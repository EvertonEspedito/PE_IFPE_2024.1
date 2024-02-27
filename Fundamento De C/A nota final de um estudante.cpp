#include <stdlib.h>
#include <stdio.h>

/* A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas
mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está
reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado.
Faça todas as verificações necessárias. */

main (){
	float trabLab = 0, avaSemes = 0 ,exafinal = 0;

	printf("\tNota Final do Aluno\n\n");
	
	printf("- Digite a nota do Trabalho de Laboratorio ( De 0 a 2 ) \n");
	scanf("%f", &trabLab);
	
	printf("- Digite a nota da Avaliacao Semestral ( De 0 a 3 ) \n");
	scanf("%f", &avaSemes);
	
	printf("- Digite a nota do Exame Final ( De 0 a 5 ) \n");
	scanf("%f", &exafinal);
	
	float somaNota = trabLab + avaSemes + exafinal;
	
	system("cls");
	
	printf("\tNota Final do Aluno\n\n");
	
	if(somaNota >= 0 && somaNota <= 2.9){
		printf("- A nota eh %.2f \n",somaNota);
		printf("- Aluno Reprovado \n\n");
	}else{
		if(somaNota >= 3 && somaNota <= 4.9){
			printf("- A nota eh %.2f \n",somaNota);
			printf("- Aluno Ficou de Recuperacao \n\n");	
		}else{
			if(somaNota >= 5){
				printf("- A nota eh %.2f \n",somaNota);
				printf("- Aluno Foi Aprovado \n\n");
			}
		}
	}

	system("pause");

return(0);
}
