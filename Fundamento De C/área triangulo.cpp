#include <stdlib.h>
#include <stdio.h>

/* Q4- Criar um algoritmo que calcule e imprima a área de um
triângulo, sendo que os dados de entrada fornecidos pelo
usuário:
triangulo  (base * altura) / 2 */

main (){

	int base =0, altura = 0, triangulo;

	printf("\t Vamos Calcular a Area do triangulo: \n\n");

	printf("- Digite a base do triangulo: \n");
	scanf("%d", &base);
	
	system("cls");
	
	printf("\t Vamos Calcular a Area do triangulo: \n\n");
	
	printf("- Digite a altura do triangulo: \n");
	scanf("%d", &altura);
	
	system("cls");
	
	printf("\t Resultado: \n\n");
	
	triangulo = (base * altura)/2;
	
	printf("A area do triangulo eh: %d \n\n",triangulo);
	
	system("pause");

return (0);
}
