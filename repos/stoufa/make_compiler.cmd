flex pascal.l
bison %-d pascal.y
gcc lex.yy.c pascal.tab.c -o pascal_compile
pascal_compile mon_programme.txt
