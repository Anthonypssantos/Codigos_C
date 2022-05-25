#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){

int f, c, r, k;
	
	printf("Insira quantos graus esta ai\n");
	scanf("%i", &r);
	
	c = (r - 32)/1.8;
	f = r * 1.8 + 32;
	k = c + 273.15;	
	
	printf("Celsius: %i\nFahrenheit: %i\nKelvin: %i\n", c, f, k);

}
