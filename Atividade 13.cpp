#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){
	
	int numero;
	int recebe;
	
	printf("Insira um numero para o programa multiplicalo ao quadrado!\n");
	scanf("%i", &numero);
	
	recebe = (numero*4);
	
	printf("Numero multiplicado: [%i]", recebe);
}
