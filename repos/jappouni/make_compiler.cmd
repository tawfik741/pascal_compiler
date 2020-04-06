flex ast_lex.l
bison %-d ast_yacc.y
gcc lex.yy.c ast_yacc.tab.c -o pascal_compile
pascal_compile mon_programme.txt
