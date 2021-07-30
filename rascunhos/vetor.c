#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define tam 20
int main() {
    int vet[tam];
    int posicao, N, i;
    int valor = 0, cont_valor = 0;

    for (i = 0; i < tam; i++) {
        printf("Informe o valor da posicao %d do vetor: ", i);
        scanf("%i", &vet[i]);
    }

    printf("Informe a posicao a ser consultada: ");
    scanf("%i", &posicao);

    while ((posicao  >= 0) && (posicao < tam)) {
        printf("O valor da posicao informada e: %i\n", vet[posicao]);

        printf("Informe a posicao a ser consultada: ");
        scanf("%i", &posicao);
    }
    
    printf("Informe um valor a ser buscado no vetor: ");
    scanf("%i", &N);

    for (i = 0; i < tam; i++) {
        if (N == vet[i]) {
            valor = 1;
            cont_valor++;
        }
    }

    if (valor == 0) {
        printf("O valor nao existe!");
    }

    printf("O valor existe\n");
    printf("O valor aparece %i vezes", cont_valor);
    return 0;
}