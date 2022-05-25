#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){
	
	float k, c;
	
	printf("Insire o valor em kelvin\n");
	scanf("%f", &k);
	
	c = k - 273.15;
	
	printf("Convertido em celsius: [%0.lf]", c);
	
}
