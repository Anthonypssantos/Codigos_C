#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){

int f, k;
	
	printf("Insire o valor em kelvin\n");	
	scanf("%i", &k);
	
	f = k * 1.8 - 459.67;
	
	printf("Conversao para fahrenheit: [%i]", f);
	
	
}
