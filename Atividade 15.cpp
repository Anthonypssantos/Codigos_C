#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){
	
	float recebe;
	float numero[2];
	int i;
	
	for (i=0;i<2;i++){
		
		printf("Insira o numero com (.)\n");
		scanf("%f", &numero[i]);
	}

	for (i=0;i<1;i++){
		
		recebe = (numero[0] + numero[1]);
		
	}
	
	printf("Numero: [%0.2lf]", recebe);
}
