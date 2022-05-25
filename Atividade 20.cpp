#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){
	
	int c, f;
	
	printf("insira os graus em Fahrenheit com (.)\n");
	scanf("%i", &f);
	
	c = (f - 32.0 / 1.8);
	
	printf("Convertido para Celsius [%i]", c);
}
