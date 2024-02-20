#include <stdio.h>
#include <stdlib.h>

/* Q2 - Monte um algoritmo que leia dois números reais (float) e
imprima a média aritmética com a mensagem: “Média: ”
antes do resultado e com uma casa decimal. */

int main(){
	
	float numUm = 0, numDois = 0, media = 0;
	
	printf("Descubra a Media Aritmetica \n");
	
	printf("Digite um numero REAL: \n");
	scanf("%f", &numUm);
	
	printf("Digite outro numero REAL: \n");
	scanf("%f", &numDois);
	
	system("cls");
	
	media = (numUm + numDois)/2;
	
	printf("A media eh: %.1f \n",media);
	
	return(0);
}