#include <stdio.h>
#include <math.h>

/* Equação de 2 grau */

int main() {
    float a, b, c;
    float delta, x1, x2;

    
    printf("\tDigite os coeficientes da equacao de segundo grau (ax^2 + bx + c): \n\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    
    delta = b * b - 4 * a * c;

    if (delta >= 0) {
    
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        printf("As raizes sao: %.2f e %.2f\n", x1, x2);
    } else if (delta == 0) {
  	 	printf("Raiz Unica\n");
  	 	
	} else if(delta < 0) {
    	printf("Nao Existe Raiz Real\n");
	}
     
    system("pause");

    return 0;
}

