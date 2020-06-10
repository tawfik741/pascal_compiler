import subprocess
import os
import pickle
test_program ="program test ; \n var \n a,b : integer ;\n z : integer ;\n begin\n a := 3 ;\n b := a ;\n z :=a;\n end"
buffer = "buffer.p"
p_buffer = open(buffer, "w")
def compile ():
    wd = os.getcwd()
    #p = subprocess.Popen(['pascal_compile.exe' , 'mon_programme.txt'] ,shell=True , cwd=wd ,  stdout=subprocess.PIPE)
    p = subprocess.Popen(['pascal_compile' , buffer] ,shell=True , cwd=wd ,  stdout=subprocess.PIPE)
    out = p.communicate()[0]
    stdout=out.decode("utf-8")
    print(stdout)
    return (stdout)
def add_to_buffer(content):
    p_buffer.write(content)
    p_buffer.close()
    
def clean_buffer():
    os.remove(buffer)
if __name__=="__main__":
    add_to_buffer(test_program)
    compile()
    