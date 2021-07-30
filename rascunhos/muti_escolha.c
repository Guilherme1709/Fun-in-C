#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {
    float numero1, numero2, soma, produto, divisao;
    int codigo;
    
    printf("Digite o codigo do cargo (entre 1 e 3): ");
    scanf("%i", &codigo);
    printf("Digite dois numeros: ");
    scanf("%f %f", &numero1, &numero2);

    switch (codigo)
    {
    case 1: soma = numero1 + numero2;
        printf("O resultado da soma e: %.2f", soma);
        break;
    case 2: produto = numero1 * numero2;
        printf("O o produto da multiplicacao dos dois numeros e: %.2f", produto);
        break;
    case 3: if (numero2 == 0) {
        printf("OPERACAO INVALIDA!");
    } else {
        divisao = numero1 / numero2;
        printf("O resultado da divisao do primeiro numero pelo segundo e: %.2f", divisao);
    }
        break;
    default: printf("Codigo Invalido!");
        break;
    }
}