%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(char*);
int yylex();
extern FILE* yyin;

char str[1000];
char* genLabel();
char* genBlockLabel();
char* genOutLabel();
char* genBeginLabel();
char* OutLabel(int Ocount);

//for labels some global variables 
int t = 0;
int l = 0;
int w = 0;
int z = 0 ; 
void add_symbol(char* name, char* type, int val , char* NonTerminalAddr);

int count = 1;
int stackCount = 1;
// stack for storing the labels
char* stack[1000] ;
int Ocount = 0;
// struct for storing the symbol table
typedef struct {
    char* name;
     char* type;
    union {
        int intval;
        double doubleval;
        float floatval;
        char charval;
    } val;
    char NonTerminalAddr[200];
} Symbol;

Symbol* symtab[10000];
void HandleSymTble(char* identifier, char* number, char* symtype, int* symcount, int* addrCount, Symbol** symtab) ;
char* symtype;
void verify(char * id );
int addrCount= 0; 
int symcount = 0;
int symcount_stack[1000];
// char  *store = (char*)malloc(sizeof(char)*1000);
%}

%start StatementList

%token IF ELSE ADD SUB MUL DIV EQ LT LTE GT GTE NOT AND OR PADD PSUB LPAREN RPAREN LCURL RCURL SEMICOLON WHILE COLON SWITCH BREAK CONTINUE DEFAULT CASE COMMA LBRACK RBRACK INT DOUBLE FLOAT CHAR 

%nonassoc LT GT LTE GTE NOT EQ AND OR
%left ADD SUB
%left MUL DIV
%right LPAREN LCURL
%right RPAREN RCURL
%nonassoc PADD PSUB

%union {
    char lexeme[100];
    char NonTerminalAddr[200];
    char* lab;
    int dval;
    char cval;
}
%token <cval> CHARCONST
%token <dval> NUMBER
%token <NonTerminalAddr> IDENTIFIER StatementList IfStatement SwitchStatement ElseStmt ComplexRelExp RelExp Statement ConstIden Bracket Declaration Type variablelist Term Factor SignVal Val CaseVal CaseStatements BreakStmt 
%type <lab> getLabels begin

%%

StatementList:
    DeclarationList StatementList { printf("\n"); }
    | Statement SEMICOLON StatementList { printf("\n"); }
    | IfStatement StatementList { printf("\n"); }
    | WHILE LPAREN ComplexRelExp RPAREN LCURL begin getLabels { printf("\nif %s goto %s:\ngoto %s:", $3, $6, $7); }
      StatementList RCURL { printf("\ngoto %s:", $6); } { printf("\n%s:", $7); } StatementList { printf("\n"); }
    | SwitchStatement StatementList { printf("\n"); }  
    |{}
    ;


DeclarationList:
    Declaration DeclarationList { printf("\n"); }
    | Declaration {}
    ;

Declaration:
    LCURL { /* save state */ symcount_stack[++stackCount] = addrCount; /* set base NonTerminalAddr to 0 */ addrCount = 0; } DeclarationList RCURL { /* restore state */ addrCount = symcount_stack[stackCount--]; }
    | Type variablelist SEMICOLON 
    ;

Type: 
    INT { 
       strcpy($$, "INT"); 
       symtype = (char*)malloc(sizeof(char)*10);
       strcpy(symtype, "INT");
       }    
    | DOUBLE { printf("\n"); 
        strcpy($$, "DOUBLE");
        symtype = (char*)malloc(sizeof(char)*10);
        strcpy(symtype, "DOUBLE");
         }
    | FLOAT { printf("\n"); 
        strcpy($$, "FLOAT"); 
        symtype = (char*)malloc(sizeof(char)*10);
        strcpy(symtype, "FLOAT");}
    | CHAR { printf("\n"); 
        strcpy($$, "CHAR"); 
        symtype = (char*)malloc(sizeof(char)*10);
        strcpy(symtype, "CHAR");}
    ;

variablelist:  IDENTIFIER  COMMA variablelist { 
    HandleSymTble($1, "0" , symtype, &symcount, &addrCount, symtab);
    }
   
    | IDENTIFIER Bracket COMMA variablelist 
        {  
        HandleSymTble($1, "0" , symtype, &symcount, &addrCount, symtab);
        }
    | IDENTIFIER EQ NUMBER
      {      
        HandleSymTble($1, $3, symtype, &symcount, &addrCount, symtab);
      }

    | IDENTIFIER EQ CHARCONST
      {
        // printf("\n%s",$3);
         HandleSymTble($1, $3, symtype, &symcount, &addrCount, symtab);
      }
    | IDENTIFIER Bracket
    {
        int i = atoi($2);
        int result = i * addrCount;
        
        HandleSymTble($1, "0" , symtype, &symcount, &result, symtab);
    }
    | IDENTIFIER  EQ ConstIden COMMA variablelist 
    { printf("\n"); }
    | IDENTIFIER
    {
        HandleSymTble($1, "0" , symtype, &symcount, &addrCount, symtab);
    }

    ;


Bracket : LBRACK NUMBER RBRACK 
       {
         char* buf = (char*)malloc(sizeof(char) * 1000);
             int getLabels = $2;
        sprintf(buf, "%d", getLabels);
        strcpy($$, buf);
      }
    | LBRACK NUMBER RBRACK Bracket { printf("\n"); }
    ;


ConstIden: Val
{  
    printf("\n");
    strcpy($$, $1);
}

| IDENTIFIER { 
    //$$ = (char*)malloc(100 * sizeof(char));
    printf("\n");
    strcpy($$, $1);

 }
    ;

SwitchStatement:
    SWITCH LPAREN CaseVal  {count++; stack[count] = (char*)malloc(sizeof(char) * 1000); strcpy(stack[count], $3); } RPAREN LCURL 
    CaseStatements RCURL  {printf("\n%s:" , genOutLabel()); Ocount++ ;count --; } StatementList { printf("\n"); }
    ;

CaseStatements:
    CASE CaseVal COLON getLabels { printf("\nifFalse (%s == %s) goto %s", stack[count], $2, $4);}
    StatementList BreakStmt { printf("\n%s:",$4);} CaseStatements  
    | DEFAULT COLON StatementList { printf("\n"); }
    | {}/* Empty case, no code to generate */
    ;

BreakStmt : 
    BREAK SEMICOLON { printf("goto %s\n", OutLabel(Ocount)); }

IfStatement:
    IF LPAREN ComplexRelExp RPAREN getLabels LCURL { printf("\nifFalse %s goto %s ", $3, $5); }
    StatementList RCURL{ printf("\n%s:", $5); } ElseStmt StatementList { printf("\n"); }
    ;

ElseStmt:
    ELSE LCURL StatementList RCURL {}
    | ELSE IfStatement {}
    | {}
    ;

getLabels:
    { $$ = (char*)malloc(100 * sizeof(char)); $$ = genBlockLabel(); }

begin:
    { $$ = (char*)malloc(100 * sizeof(char)); $$ = genBeginLabel(); }


Statement:
    IDENTIFIER EQ Statement {
        verify($1);
        strcpy($$, $1);
        strcat($$, "=");
        strcat($$, $3);
        printf("\n%s", $$);
    }
    | Term { strcpy($$, $1); }
    ;

ComplexRelExp:
    ComplexRelExp AND RelExp {
        strcpy($$, genLabel());
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, "&&");
        strcat(str, $3);
        printf("\n%s", str);
    }
    | ComplexRelExp OR RelExp {
        strcpy($$, genLabel());
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, "||");
        strcat(str, $3);
        printf("\n%s", str);
    }
    | RelExp { strcpy($$, $1); }
    ;

RelExp:
    Term LT Term {
        strcpy($$, genLabel());
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, "<");
        strcat(str, $3);
        printf("\n%s", str);
    }
    | Term LTE Term {
        strcpy($$, genLabel());
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, "<=");
        strcat(str, $3);
        printf("\n%s", str);
    }
    | Term GT Term {
        strcpy($$, genLabel());
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, ">");
        strcat(str, $3);
        printf("\n%s", str);
    }
    | Term GTE Term {
        strcpy($$, genLabel());
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, ">=");
        strcat(str, $3);
        printf("\n%s", str);
    }
    | Term EQ EQ Term {
        strcpy($$, genLabel());
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, "==");
        strcat(str, $4);
        printf("\n%s", str);
    }
    | Term NOT EQ Term {
        strcpy($$, genLabel());
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, "!=");
        strcat(str, $4);
        printf("\n%s", str);
    }
    | LPAREN RelExp RPAREN {
        strcpy($$, genLabel());
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, "!");
        strcat(str, "(");
        strcat(str, $2);
        strcat(str, ")");
        printf("\n%s", str);
    }
    | NOT RelExp {
        strcpy($$, genLabel());
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, "!");
        strcat(str, $2);
        printf("\n%s", str);
    }
    | {}
    ;

Term:
    Term ADD Factor {
        strcpy($$, genLabel());
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, "+");
        strcat(str, $3);
        printf("\n%s", str);
    }
    | Term SUB Factor {
        strcpy($$, genLabel());
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, "-");
        strcat(str, $3);
        printf("\n%s", str);
    }
    | Factor { strcpy($$, $1); }
    ;

Factor:
    Factor MUL SignVal {
        char* g = genLabel();
        strcpy($$, g);
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, "*");
        strcat(str, $3);
        printf("\n%s", str);
    }
    |Factor DIV SignVal {
        char* g = genLabel();
        strcpy($$, g);
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, "/");
        strcat(str, $3);
        printf("\n%s", str);
    }
    | SignVal { strcpy($$, $1); }
    ;

SignVal:
    ADD Val {
        strcpy($$, "+");
        strcat($$, $2);
    }
    | SUB Val {
        strcpy($$, "-");
        strcat($$, $2);
    }
    | Val { strcpy($$, $1); }
    ;


CaseVal: 
     IDENTIFIER {
        
        strcpy($$, $1);
    }
    | NUMBER    {
        char* buf = (char*)malloc(sizeof(char) * 1000);
        int getLabels = $1;
        sprintf(buf, "%d", getLabels);
        strcpy($$, buf);
    };
    

Val:
    IDENTIFIER {
        strcpy($$, $1);
    }
    | NUMBER {
        char* buf = (char*)malloc(sizeof(char) * 1000);
        int getLabels = $1;
        sprintf(buf, "%d", getLabels);
        strcpy($$, buf);
    }
    | PADD IDENTIFIER {
        strcpy($$, $2);
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $2);
        strcat(str, "+1");
        printf("\n%s", str);
    }
    | PSUB IDENTIFIER {
        strcpy($$, $2);
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $2);
        strcat(str, "-1");
        printf("\n%s", str);
    }
    | IDENTIFIER PADD {
        strcpy($$, $1);
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, "+1");
        printf("\n%s", str);
    }
    | IDENTIFIER PSUB {
        strcpy($$, $1);
        strcpy(str, $$);
        strcat(str, "=");
        strcat(str, $1);
        strcat(str, "-1");
        printf("\n%s", str);
    }
    | LPAREN Term RPAREN { strcpy($$, $2); }
    ;

%%

void yyerror(char* s) {
    while (yylex() != SEMICOLON && yylex() != EOF);
    printf("Rejected EXPR\n");
    yyparse();
}

char* genLabel() {
    char* s = (char*)malloc(sizeof(char) * 1000);
    char* label = (char*)malloc(sizeof(char) * 1000);
    strcpy(s, "t");
    sprintf(label, "%d", t);
    strcat(s, label);
    t++;
    return s;
}

void verify (char *id )
{
    int i;
    for (i = 0; i < symcount; i++) {
        if (strcmp(symtab[i]->name, id) == 0) {
            return;
        }
    }
    printf("Error: Symbol %s not found\n", id);
    exit(1);
}

void HandleSymTble(char* identifier, char* number, char* symtype, int* symcount, int* addrCount, Symbol** symtab) {
    // Check if the identifier is already present in the symbol table
    if (*symcount > 1) {
        int i;
        for (i = 0; i < *symcount; i++) {
            if (strcmp(symtab[i]->name, identifier) == 0) {
                if (strcmp(symtab[i]->type, symtype) != 0) {
                    printf("Error: Symbol %s already defined with conflicting type\n", identifier);
                    exit(1);
                }
                printf("Error: Symbol %s already defined\n", identifier);
                exit(1);
            }
        }
    }

    char addrStr[10];
    sprintf(addrStr, "%X", *addrCount);

    if (strcmp(symtype,"INT") ==0) {
        add_symbol(identifier, "INT", number, addrStr);
        *addrCount = *addrCount + 4;
    }
    else if (strcmp (symtype,"DOUBLE") ==0) {
        add_symbol(identifier, "DOUBLE", number, addrStr );
        *addrCount = *addrCount + 8;
    }
    else if (strcmp (symtype ,"FLOAT") ==0) {
        add_symbol(identifier, "FLOAT", number, addrStr);
        *addrCount = *addrCount + 4;
    }
    else if (strcmp (symtype ,"CHAR") ==0) {
        add_symbol(identifier, "CHAR", number, addrStr);
        *addrCount = *addrCount + 1;

        //     if (strlen(number) != 3 || number[0] != '\'' || number[2] != '\'') {
        //     printf("Error: Invalid char constant %s\n", number);
        //     exit(1);
        // }
        // add_symbol(identifier, "CHAR", number, addrStr);
        // *addrCount = *addrCount + 1;
    }
    else {
        printf("Error: Symbol %s not found\n", identifier);
        exit(1);
    }
}


char* genBlockLabel() {
    char* s = (char*)malloc(sizeof(char) * 1000);
    char* label = (char*)malloc(sizeof(char) * 1000);
    strcpy(s, "L");
/*Out:
    { $$ = (char*)malloc(100 * sizeof(char)); $$ = genOutLabel(); }*/
    sprintf(label, "%d", l);
    strcat(s, label);
    l++;
    return s;
}

char* genBeginLabel() {
    char* s = (char*)malloc(sizeof(char) * 1000);
    char* label = (char*)malloc(sizeof(char) * 1000);
    strcpy(s, "BEGIN");
    sprintf(label, "%d", w);
    strcat(s, label);
    w++;
    free(label);
    return s;
}

char* genOutLabel() {
    char* s = (char*)malloc(sizeof(char) * 1000);
    char* label = (char*)malloc(sizeof(char) * 1000);
    strcpy(s, "OUT");
    sprintf(label, "%d", z);
    strcat(s, label);
    z++;
    return s;
}
char* OutLabel(int Ocount){
    char* s = (char*)malloc(sizeof(char) * 1000);
    char* label = (char*)malloc(sizeof(char) * 1000);
    strcpy(s, "OUT");
    sprintf(label, "%d", Ocount);
    strcat(s, label);
    Ocount++;
    free(label);
    return s;
}

void add_symbol(char* name, char* type, int val, char* NonTerminalAddr) {
    if (symcount >= 10000) {
        fprintf(stderr, "Error: Symbol table is full\n");
        exit(EXIT_FAILURE);
    }

    Symbol* sym = (Symbol*)malloc(sizeof(Symbol));
    if (sym == NULL) {
        fprintf(stderr, "Error: Unable to allocate memory for Symbol\n");
        exit(EXIT_FAILURE);
    }

    sym->name = strdup(name);
    if (sym->name == NULL) {
        fprintf(stderr, "Error: Unable to allocate memory for name\n");
        exit(EXIT_FAILURE);
    }

    sym->type = strdup(type);
    if (sym->type == NULL) {
        fprintf(stderr, "Error: Unable to allocate memory for type\n");
        exit(EXIT_FAILURE);
    }

    sym->val.intval = val;
    strncpy(sym->NonTerminalAddr, NonTerminalAddr, sizeof(sym->NonTerminalAddr) - 1);
    sym->NonTerminalAddr[sizeof(sym->NonTerminalAddr) - 1] = '\0'; // Ensure null-termination

    symtab[symcount++] = sym;

    printf("Added symbol: name=%s, type=%s, val=%d, NonTerminalAddr=%s\n", sym->name, sym->type, sym->val.intval, sym->NonTerminalAddr);
}


int main(int argc, char* argv[]) {
    t =0;
    l = 0;
    w = 0;
    z = 0 ;
    count = 1;
    Ocount = 0;
    
    if (argc > 1) {
        FILE* fp = fopen(argv[1], "r");
        if (fp) yyin = fp;
    }
    yyparse();
    return 0;
}
