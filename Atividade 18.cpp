#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){
	
	int recebe;
	int numero[3];
	int i;
	
	for (i=0;i<3;i++){
		
		printf("Insira o numero com (.)\n");
		scanf("%i", &numero[i]);
	}

	for (i=0;i<1;i++){
		
		recebe = (numero[0]+numero[1]+numero[2]);
		
	}
	
	printf("Numero: [%i]", recebe);
	
}
