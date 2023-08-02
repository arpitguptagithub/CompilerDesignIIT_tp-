git remote add origin https://github.com/arpitguptagithub/CompilerDesignIIT_tp-.git
git branch -M main
git push -u origin main



CFLAGS=-g -DDEBUG -ll
CC=gcc

all:mylexer

mylexer: lex.yy.c 
	$(CC) $(CFLAGS) lex.yy.c -o mylexer

lex.yy.c:ip.l
	lex ip.l

clean: 
	rm -f *.o lex.yy.c
