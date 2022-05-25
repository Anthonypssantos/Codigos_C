#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){
	
	int numero, recebe, menos=1, mais=1, recebe1;
	
	
	
	printf("Insira um numero\n");
	scanf("%i", &numero);
	
	recebe =(numero - menos);
	recebe1 =(numero + mais);
	
	printf("antecessor: [%i]\nSucessor:[%i]", recebe, recebe1);
	
}
