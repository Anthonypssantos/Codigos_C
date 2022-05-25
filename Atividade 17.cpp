#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){
	
	int recebe1, recebe2, recebe3, recebe4;
	int numero[2];
	int i;
	
	for (i=0;i<2;i++){
		
		printf("Insira o numero com (.)\n");
		scanf("%i", &numero[i]);
	
	}

	for (i=0;i<1;i++){
		
		recebe1 = (numero[0]+numero[1]);
		recebe2 = (numero[0]/numero[1]);
		recebe3 = (numero[0]-numero[1]);
		recebe4 = (numero[0]*numero[1]);
		
	}
	system("cls");
	printf("Soma: [%i]\nDivisao: [%i]\nSubtracao: [%i]\nMultiplicacao: [%i]\n", recebe1, recebe2, recebe3, recebe4);
	
}
