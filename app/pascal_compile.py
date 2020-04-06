
from subprocess import PIPE , Popen

def compile_pascal_code(input_text):
	
	process = Popen("pascal_compile 'program'", stdout=PIPE, shell=True)
	response = process.communicate()
	print (response)
