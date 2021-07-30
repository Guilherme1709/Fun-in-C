#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {
    int vet[16];
    int i, aux;

    for (i = 1; i <= 16; i++) {
        printf("Informe um valor para o indice %i do vetor:", i);
        scanf("%i", &vet[i]);
    }

    for (i = 1; i < 8; i++) {
        aux = vet[i]; 
        vet[i] = vet[i + 8];
        vet[i + 8] = aux;
    }

    for (i = 1; i <= 16; i++) {
        printf("%4d", vet[i]);
    }

    return 0;
}




