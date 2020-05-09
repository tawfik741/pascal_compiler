import os

os.system("flex miniPasc.lex")
os.system("bison %-d miniPasc.y")
os.system("gcc lex.yy.c miniPasc.tab.c -o pascal_compile")
os.system("pascal_compile mon_programme.txt")
os.system("PAUSE")