#include <stdio.h>
#include <stdlib.h>

/* Q1 - Faça um algoritmo que receba um número inteiro e mostre
o seu antecessor e o seu sucessor. */

int main(){
	
	int num = 0;
	
	
	printf("Digite um Numero Inteiro: \n");
	scanf("%d", &num);
	
	int suce = num + 1;
	int ante = num - 1;
	
	system("cls");
	
	printf("O Antecessor de %d eh: %d \n",num,ante);
	
	printf("O Sucessor de %d eh: %d \n",num,suce);
	
	
	return(0);
}