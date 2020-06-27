#include<stdio.h>
#include<stdlib.h>

/*! Prototyp  */
int Addieren(int a, int b);

/*! @brief Das sist eine Funktion 
int Addieren(int a, int b)
{
	return a+b;
}


int main(int argc, char* argv[])
{
int i, zahl1, zahl2;

printf("argc: %d\n",argc);
for(i=0; i<argc; i++) {
	printf("argv[%d]: %s\n", i, argv[i]);
}
zahl1 = (int)strtol(argv[1], NULL, 10);
zahl2 = (int)strtol(argv[2], NULL, 10);
printf("Ergebnis %d\n", Addieren(zahl1, zahl2));

return 0;
}

