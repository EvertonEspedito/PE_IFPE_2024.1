#include <stdlib.h>
#include <stdio.h>

/* Faça um algoritmo que receba um número
inteiro e verifique e mostre se este número é
par ou ímpar.  */

main (){

	int num = 0;
	
	printf("\tSaber se um numero eh Impar ou Par\n\n");
	
	printf("- Digite um numero inteiro: \n");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("- %d eh Par \n",num);
	}else{
		printf("- %d eh Impar \n",num);
	}

	system("pause");

return (0);
}
