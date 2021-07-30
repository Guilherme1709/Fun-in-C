#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

int main () {
    
    float num, cubo, quadrado, raiz;

    while (num > 0) {
        printf("Digite um numero: ");
        scanf("%f", &num);

        cubo = num*num*num;
        quadrado = num*num;
        raiz = sqrt(num);

        if (num < 0) {
            printf("Voce digitou um numero negativo!");
        }
    }
    printf("O cubo desse numero e: %.2f\n", cubo);
    printf("O quadrado desse numero e: %.2f\n", quadrado);
    printf("A raiz quadrada desse numero e: %.2f", raiz);
    
    system("pause");
    return 0;
}