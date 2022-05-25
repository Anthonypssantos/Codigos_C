#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){
	
	int c, f;
	
	printf("insira os graus em celsius com (.)\n");
	scanf("%i", &c);
	
	f = (c * 1.8 + 32.0);
	
	printf("Convertido para Fahrenheit [%i]", f);
	
}
