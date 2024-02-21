#include <stdlib.h>
#include <stdio.h>

/* Q5 - Faça um algoritmo que leia um valor em Celsius (C) e
converta para Fahrenheit (F) e Kelvin (K). */

main (){

 int valorGrauCelci = 0, calcFar= 0, calcKelvin=0;
 
 printf("\tConversor de Graus para : Celsius (C), Fahrenheit (F) e Kelvin (K)\n\n");
 
 printf("- digite o grau em Celsius para converter: \n\n");
 scanf("%d",&valorGrauCelci);
 
 system("cls");
 
 calcFar= (valorGrauCelci * 9/5 )+32 ;
 
 calcKelvin= valorGrauCelci + 273.15  ;
 
 printf("- Em Celsius (C): %dC\n\n",valorGrauCelci);
 
 printf("- Em Fahrenheit (F): %dF\n\n",calcFar);
 
 printf("- Em Kelvin (K): %dK\n\n",calcKelvin);
 
 system("pause");
 
return (0);
}
