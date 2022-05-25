#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <conio.h>


main(){
	
	int f, k;
	
	printf("Insire o valor em fahrenheit\n");	
	scanf("%i", &f);
	
	k = (f + 459.67)/1.8;
	
	printf("Conversao para kelvin: [%i]", k);
	
	
}
