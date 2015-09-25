import sys
import os

while True:
	rsp = raw_input("Which test program would you like to run? 'c' = calc, 'p' = calc2postfix, 's' = calc2sexpr, 'a' = all, 'q' = quit\n>")
	if rsp == 'c' or rsp == 'p' or rsp == 's' or rsp == 'a' or rsp == 'q':
		break
	print 'Unknown command'

if rsp == 'c':
	os.system('python ' + os.getcwd() + '/testCalc.py')
elif rsp == 'p':
	os.system('python ' + os.getcwd() + '/testPostfix.py')
elif rsp == 's':
	os.system('python ' + os.getcwd() + '/testSexpr.py')
elif rsp == 'a':
	print 'Running all tests'
	print 'Running testCalc.py...'
	os.system('python ' + os.getcwd() + '/testCalc.py')
	print 'Running testPostfix.py...'
	os.system('python ' + os.getcwd() + '/testPostfix.py')
	print 'Running testSexpr.py...'
	os.system('python ' + os.getcwd() + '/testSexpr.py')
