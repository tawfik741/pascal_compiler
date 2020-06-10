import subprocess
import os


wd = os.getcwd()
p = subprocess.Popen(['pascal_compile.exe' , 'mon_programme.txt'] ,shell=True , cwd=wd ,  stdout=subprocess.PIPE)
out = p.communicate()[0]
print (out.decode("utf-8") )