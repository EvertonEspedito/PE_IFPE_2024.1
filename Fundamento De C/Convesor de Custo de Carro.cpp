#include <stdlib.h>
#include <stdio.h>

/* Q6 - O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos
impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a percentagem do distribuidor sobre o
resultado). Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%. Elabore um algoritmo que leia
o custo de fábrica de um carro, calcule e mostre o valor do carro na concessionária. */

main (){

float valorBruto = 0,valorFinal=0;

printf("\t Convesor de Custo de Carro\n\n");
printf("- Distribidora: 28%%\n");
printf("- Impostos: 45%%\n\n");

printf("- Digite o velor de fabrica do carro para converter: \n");
scanf("%f", &valorBruto);

system("cls");

valorFinal =  valorBruto + (valorBruto*0.73);

printf("\t Convesor de Custo de Carro\n\n");
printf("- Distribidora: 28%%\n");
printf("- Impostos: 45%%\n\n");

printf("- O valor do carro na concessionaria eh: %.2f\n\n",valorFinal);

system("pause");
return (0);
}
