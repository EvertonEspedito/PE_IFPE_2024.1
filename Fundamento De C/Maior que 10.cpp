#include <stdlib.h>
#include <stdio.h>

/* 1. Faça um algoritmo que receba um número e mostre
uma mensagem caso este número seja maior que 10. */

main (){
	
	float num = 0;
	
	printf("\t- digite um numero: \n\n");
	
	printf(" - ");
	scanf("%f",&num);
	
	printf("\n- Numero %.1f \n",num);
	
	if(num > 10){
		printf("- eh maior que 10 \n\n",num);
	}

return (0);
}
