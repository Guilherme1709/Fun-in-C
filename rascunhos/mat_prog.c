#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {
    float media, diferenca, produto, divisao, numero1, numero2;
    int opcao;

    printf("Escolha uma opcao: \n1. Media dos numeros \n2. Diferenca dos numeros \n3. Produto entre os numeros \n4. Divisao do primeiro pelo segundo\n");
    scanf("%i", &opcao);
    printf("Digite dois numeros: ");
    scanf("%f %f", &numero1, &numero2);

    if (opcao == 1) {
        media = (numero1 + numero2) / 2;
        printf("A media dos numeros e: %.2f", media);
    } else if (opcao == 2) {
        diferenca = numero1 - numero2;
        printf("A diferenca dos numeros e: %.2f", diferenca);
    } else if (opcao == 3) {
        produto = numero1 * numero2;
        printf("O produto entre os numeros e: %.2f", produto);
    } if (numero2 == 0) {
        printf("OPERACAO INVALIDA!");
    } else if (opcao == 4) {
        divisao = numero1 / numero2;
        printf("A divisao do primeiro numero pelo segundo e: %.2f", divisao);  
    } else {
        printf("OPCAO INVALIDA!");
    } 
    return 0;
}