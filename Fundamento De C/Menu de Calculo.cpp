#include <stdlib.h>
#include <stdio.h>

/* Escreva o menu de opções abaixo. Leia a opção do usuário
e execute a operação escolhida. Escreva uma mensagem
de erro se a opção for inválida.
-----------------------------------------------------------------------------------------
Escolha a opcao:
1- Soma de 2 numeros.
2- Diferenca entre 2 numeros (maior pelo menor).
3- Produto entre 2 numeros.
4- Divisão entre 2 numeros (o denominador nao pode ser zero).
----------------------------------------------------------------------------------------- */

main (){
	
	int opcao = 0,num1 = 0, num2 = 0;
	
	//Menu
	for(int i= 0;i < 61;i++){
		printf("-");
	}
	printf("\n\n");
	
	printf("- Escolha a opcao: \n");
	
	printf("1 - Soma de 2 numeros. \n");
	
	printf("2 - Diferenca entre 2 numeros (maior pelo menor). \n");
	
	printf("3 - Produto entre 2 numeros. \n");
	
	printf("4 - Divisão entre 2 numeros (o denominador nao pode ser zero). \n");
	
	for(int i= 0;i < 61;i++){
		printf("-");
	}
	printf("\n\n");
	
	scanf("%d",&opcao);
	//fim do menu
	
	system("cls");
	
	
	
	switch (opcao) {
        case 1:
            printf("Digite dois numeros: ");
            scanf("%d %d", &num1, &num2);
            printf("A soma dos numeros eh: %d\n", num1 + num2);
            break;
        case 2:
            printf("Digite dois numeros: ");
            scanf("%d %d", &num1, &num2);
            if (num1 > num2)
                printf("A diferenca entre os numeros eh: %d\n", num1 - num2);
            else
                printf("A diferenca entre os numeros eh: %d\n", num2 - num1);
            break;
        case 3:
            printf("Digite dois numeros: ");
            scanf("%f %f", &num1, &num2);
            printf("O produto dos numeros eh: %d\n", num1 * num2);
            break;
        case 4:
            printf("Digite dois numeros: ");
            scanf("%d %d", &num1, &num2);
            if (num2 != 0)
                printf("A divisao dos numeros eh: %d\n", num1 / num2);
            else
                printf("Erro: O denominador nao pode ser zero.\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
