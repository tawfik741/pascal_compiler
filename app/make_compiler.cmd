flex miniPasc.lex
bison %-d miniPasc.y
gcc lex.yy.c miniPasc.tab.c -o pascal_compile
pascal_compile mon_programme.txt
