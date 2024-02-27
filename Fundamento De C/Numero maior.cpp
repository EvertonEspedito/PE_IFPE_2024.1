#include <stdlib.h>
#include <stdio.h>

/* Faça um algoritmo que receba dois números
inteiros e mostre o maior. Se por acaso, os dois
números forem iguais, imprima a mensagem
“Numeros iguais”. */

main (){
	int num1=0, num2=0;
	
	printf("\t Qual numero eh maior\n\n");
	
	printf("- Digite um numero inteiro:\n");
	scanf("%d", &num1);
	
	printf("- Digite outro numero inteiro:\n");
	scanf("%d", &num2);
	
	system("cls");
	
	if(num1 > num2){
		
		printf("- %d eh maior que %d\n",num1,num2);
		
	}else{
	
	
		if(num1 < num2){
			
			printf("- %d eh menor que %d\n",num1,num2);
			
		}else{
			
			if(num1==num2){
				
				printf("- %d eh igual a %d\n",num1,num2);
				
			}
			
		}	
	}

	system("pause");

return(0);
}
