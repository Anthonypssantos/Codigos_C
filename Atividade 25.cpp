#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){

int c, f, k;
	
	printf("Insirea a temperatura em celsius\n");
	scanf("%i", &c);
		
	f = c * 1.8 + 32;
	k = c + 273.15;
	
	printf("Fahernheit: [%i]\nkelvin: [%i]\n", f, k);	
		
}
