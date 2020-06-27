#!/usr/bin/python3

import sys

def addiere(a, b):
	return a+b

def mul(a, b):
	return a*b

def main():
	if len(sys.argv) < 3:
		print("""zu wenige Argumente""")
		sys.exit()

	zahl1 = int(sys.argv[1])
	zahl2 = int(sys.argv[2])
	print("""Ergebnis:\n""", addiere(zahl1, zahl2))
	print("""Ergebnis:\n""", mul(zahl1, zahl2))

if __name__ == '__main__':
	main()

