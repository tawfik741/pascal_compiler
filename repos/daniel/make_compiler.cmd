flex prj.l
bison %-d prj.y
gcc lex.yy.c prj.tab.c -o pascal_compile
pascal_compile mon_programme.txt
