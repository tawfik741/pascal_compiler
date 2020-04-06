from subprocess import Popen, PIPE
output = Popen(["date"],stdout=PIPE)
response = output.communicate()
print (response)