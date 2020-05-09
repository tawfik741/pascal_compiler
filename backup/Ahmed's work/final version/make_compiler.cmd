flex miniPascal.lex
bison %-d miniPascal.y
gcc lex.yy.c miniPasc.tab.c -o pascal_compile
pascal_compile mon_programme.txt
PAUSE