flex.exe miniPascal.lex
bison.exe %-d miniPascal.y
gcc lex.yy.c miniPascal.tab.c -o pascal_compile
pascal_compile mon_programme.txt
PAUSE