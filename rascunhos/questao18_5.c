#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

int main () {
    float num1, num2, resultado = 0;
    char opcao; 

    printf("Menu de opcoes: \n");
    printf("1. Somar dois numeros. \n");
    printf("2. Raiz quadrada de um numero. \n");
    printf("Digite a opcao desejada: ");

    scanf("%c", &opcao);

    if (opcao == '1') {
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 + num2; 
        printf("O resultado da operacao escolhida e: %.2f\n", resultado);
        

    } else if (opcao == '2') {
        printf("Digite um numero: ");
        scanf("%f", &num1); 
        resultado = sqrt(num1);
        printf("O resultado da operacao escolhida e: %.2f\n", resultado);
        
    } else {
        printf("Opcao invalida!\n");
    }
    system("pause");
    return 0;
}




















































