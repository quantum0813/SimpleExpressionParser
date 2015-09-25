import os
from subprocess import Popen, PIPE, STDOUT

lines = [line.rstrip('\n') for line in open(os.getcwd() + '/testFile')]

outputs = []
outputFile = open(os.getcwd() + '/testPostfixOutput', 'w')
for line in lines:
	p = Popen([os.getcwd() + '/calc2postfix'], stdout=PIPE, stdin=PIPE, stderr=PIPE)
	stdoutData = p.communicate(input=line)[0]
	outputFile.write(line + ' = ' + stdoutData)

outputFile.close()
