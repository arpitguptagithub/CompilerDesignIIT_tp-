


%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void yyerror(char*);
int eflag = 0;
int yylex();
extern FILE * yyin;

char str[1000];
char* genLabel();
char* genBlockLabel();
char* genBeginLabel();
int t = 0;
int l = 0;
int w = 0;
%}

%start StatementList

%token IF ELSE ADD SUB MUL DIV EQ LT LTE GT GTE NOT AND OR PADD PSUB LPAREN RPAREN LCURL RCURL SEMICOLON WHILE 

%nonassoc LT GT LTE GTE NOT EQ AND OR
%left ADD SUB
%left MUL DIV
%right LPAREN LCURL
%right RPAREN RCURL
%nonassoc PADD PSUB

%union{
	char lexeme[100];
	char addr[200];
	char* lab;
	int dval;
}

%token <dval> NUMBER
%token <addr> IDENTIFIER
%type <addr> StatementList
%type <addr> ElseStmt
%type <addr> ComRelExp
%type <addr> Relexp
%type <addr> Statement
%type <addr> Term
%type <addr> Factor
%type <addr> SIGNVal
%type <addr> Val
%type <lab> dummyLabels
%type <lab> begin



// code modified with begin label to handle condition of label generations and all precisely.

%%
	
StatementList:
              	Statement SEMICOLON StatementList { printf("\n"); }
		| IF LPAREN ComRelExp RPAREN LCURL dummyLabels dummyLabels{
			printf("\nif %s goto %s:\ngoto %s:", $3, $6, $7);
			printf("\n%s:", $6);
		} StatementList { printf("\n%s:", $7); } RCURL ElseStmt { printf("\n%s:", genBlockLabel()); } StatementList { printf("\n"); }
                | WHILE LPAREN ComRelExp RPAREN LCURL begin dummyLabels {printf("\nif %s goto %s:\ngoto %s:", $3, $6, $7);}  { printf("\n%s:", $6); } StatementList
                        RCURL  { printf("\ngoto %s:", $6); }{ printf("\n%s:",$7); } StatementList { printf("\n"); }
		| {}
		;

ElseStmt:
	ELSE LCURL StatementList RCURL {}
	| { }
	;

dummyLabels:
	   { $$ = (char*)malloc(100*sizeof(char)); $$ = genBlockLabel(); }



begin:
	   { $$ = (char*)malloc(100*sizeof(char)); $$ = genBeginLabel(); }

Statement:
        IDENTIFIER EQ Statement {
		strcpy($$, $1);
		strcat($$, "=");
		strcat($$, $3);
		printf("\n%s", $$);  
	}
        | 
	Term { strcpy($$, $1); }
        ;

ComRelExp:
	 ComRelExp AND Relexp {
                strcpy($$, genLabel());
                strcpy(str, $$);
                strcat(str, "=");
                strcat(str, $1);
                strcat(str, "&&");
                strcat(str, $3);
                printf("\n%s", str);
        }
        |
    	ComRelExp OR Relexp {
                strcpy($$, genLabel());
                strcpy(str, $$);
                strcat(str, "=");
                strcat(str, $1);
                strcat(str, "||");
                strcat(str, $3);
                printf("\n%s", str);
        }
	|
	Relexp { strcpy($$, $1); }
	;

Relexp:
      	Term LT Term {
		strcpy($$, genLabel());
		strcpy(str, $$);
		strcat(str, "=");
		strcat(str, $1);
		strcat(str, "<");
		strcat(str, $3);
		printf("\n%s", str);
	}
	|
	Term LTE Term {
                strcpy($$, genLabel());
                strcpy(str, $$);
		strcat(str, "=");
                strcat(str, $1);
                strcat(str, "<=");
                strcat(str, $3);
                printf("\n%s", str);
        }
	|
	Term GT Term {
                strcpy($$, genLabel());
                strcpy(str, $$);
		strcat(str, "=");
                strcat(str, $1);
                strcat(str, ">");
                strcat(str, $3);
                printf("\n%s", str);
        }
        |
        Term GTE Term {
                strcpy($$, genLabel());
                strcpy(str, $$);
		strcat(str, "=");
                strcat(str, $1);
                strcat(str, ">=");
                strcat(str, $3);
                printf("\n%s", str);
        }
	|
	Term EQ EQ Term {
                strcpy($$, genLabel());
                strcpy(str, $$);
		strcat(str, "=");
                strcat(str, $1);
                strcat(str, "==");
                strcat(str, $4);
                printf("\n%s", str);
        }
        |
        Term NOT EQ Term {
                strcpy($$, genLabel());
                strcpy(str, $$);
		strcat(str, "=");
                strcat(str, $1);
                strcat(str, "!=");
                strcat(str, $4);
                printf("\n%s", str);
        }
        |
	LPAREN Relexp RPAREN {
                strcpy($$, genLabel());
                strcpy(str, $$);
		strcat(str, "=");
                strcat(str, "!");
         	strcat(str, "(");
                strcat(str, $2);
		strcat(str, ")");
                printf("\n%s", str);
        }
	|
	NOT Relexp {
                strcpy($$, genLabel());
                strcpy(str, $$);
		strcat(str, "=");
                strcat(str, "!");
                strcat(str, $2);
                printf("\n%s", str);
        }
	| {}
	// Term { strcpy($$, $1); }
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
        Factor MUL SIGNVal { 
		char* g = genLabel();
		strcpy($$, g);
		strcpy(str, $$);
		strcat(str, "=");
		strcat(str, $1);
                strcat(str, "*");
                strcat(str, $3);
                printf("\n%s", str);
	}
	| Factor DIV SIGNVal {
		strcpy($$, genLabel());
		strcpy(str, $$);
		strcat($$, "=");
		strcat($$, $1);
                strcat(str, "/");
                strcat(str, $3);
                printf("\n%s", str); 
	}
        | SIGNVal { strcpy($$, $1); }
	;

SIGNVal:
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

Val:
        IDENTIFIER { 
		strcpy($$, $1); 
	}
        | NUMBER { 
		char* buf = (char*)malloc(sizeof(char)*1000);
		int dummyLabels = $1;
		sprintf(buf, "%d", dummyLabels);
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

void yyerror(char* s){
        while(yylex() != SEMICOLON && yylex() != EOF);
        printf("Rejected EXPR\n");
        yyparse();
}

char* genLabel(){
	char* s = (char*)malloc(sizeof(char)*1000);
	char* label = (char*)malloc(sizeof(char)*1000);
	strcpy(s, "t");
	sprintf(label, "%d", t);
	strcat(s, label);
	t++;
	return s;
}

char* genBlockLabel(){
        char* s = (char*)malloc(sizeof(char)*1000);
        char* label = (char*)malloc(sizeof(char)*1000);
        strcpy(s, "L");
        sprintf(label, "%d", l);
        strcat(s, label);
	l++;
        return s;
}


char* genBeginLabel(){
        char* s = (char*)malloc(sizeof(char)*1000);
        char* label = (char*)malloc(sizeof(char)*1000);
        strcpy(s, "BEGIN");
        sprintf(label, "%d", l);
        strcat(s, label);
	w++;
        return s;
}


int main(int argc, char* argv[])
{
        if(argc > 1)
        {
                FILE *fp = fopen(argv[1], "r");
                if(fp) yyin = fp;
        }
        yyparse();
        return 0;
}