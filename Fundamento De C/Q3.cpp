#include <stdio.h>
#include <stdlib.h>

/* Q3 - Escrever um algoritmo que leia o seu salário fixo e o total
de vendas efetuadas por ele no mês (em dinheiro).
Sabendo que este vendedor ganha 15% de comissão sobre */

int main(){
	
	float salarioMin = 0, vendas = 0, somaSaVend = 0;
	
	
	printf("Digite Seu Salario: \n");
	scanf("%f", &salarioMin);
	
	printf("Digite quanto vc vendeu em dinheiro: \n");
	scanf("%f", &vendas);
	
	system("cls");
	
	somaSaVend = (vendas - (vendas*0.85)) + salarioMin;
	
	printf("o salario final eh: %.2f \n",somaSaVend);
	
	return(0);
}