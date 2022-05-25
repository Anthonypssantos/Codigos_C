#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){
	
	int numero;
	int recebe;
	
	printf("Insira um numero inteiro!\n");
	scanf("%i", &numero);

	recebe = (numero/10);

	printf("Numero: [%i]", recebe);
}
