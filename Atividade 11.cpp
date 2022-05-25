#include <stdio.h>
#include <conio.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <string.h>


main(){
	
	int numeros;
	
	printf("Insire um numero\n");
	scanf("%i", &numeros);

	if (numeros < 10 && numeros >= 0){
		system("cls");
		printf("Numeros: [00%i]", numeros);
	}
	
	else if (numeros >= 10 && numeros <= 99){
		system("cls");
		printf("Numeros: [0%i]", numeros);
	}
	else if (numeros >= 100 && numeros <= 999){
		printf("Numeros: [0%i]", numeros);
	}
	else if (numeros >= 1000 && numeros <= 9999){
		system("cls");
		printf("Numeros: [%i]", numeros);
	}
	if (numeros >= 9999){
		system("cls");
		printf("Programa encerrado");
		
	}
	
}
