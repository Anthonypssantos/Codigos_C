#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>

main(){
	
	int i=0;
	int data[3]; 
	
	for (i=0;i<3;i++){
		
		printf("Insire seu dia, mes e ano atual");
		scanf("%i", &data[i]);
		
	}
	
	for (i=0;i<3;i++){
		system("cls");
		printf("Ano: [%i] || Mes: [%i] || Dia: [%i]", data[2], data[1], data[0]);
		
	}
	
}

