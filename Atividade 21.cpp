#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){	
	
	float k, c;
	
	printf("Insire o valor em celsius\n");
	scanf("%f", &c);
	
	k = c + 273.15;
	
	printf("Convertido em Kelvin: [%0.lf]", k);
}
