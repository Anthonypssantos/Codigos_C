#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){
	
	int largura, comprimento, area
	
	printf("Insira a largura\n");
	scanf("%i", &largura);
	
	printf("Insira o comprimento\n");
	scanf("%i", &comprimento);
	
	area = (largura * comprimento);
	
	printf("A area do quadrado e: [%i]", &area);
	
}
