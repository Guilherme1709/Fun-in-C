#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define tam 10

int main () {
    int N[tam], i, aux;

    for (i = 0; i < 10; i++) {
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &N[i]);
    }

    for (i = 0; i < 5; i++) {
        aux = N[i];
        N[i] = N[9 - i];
        N[9 - i] = aux;
    }

     for (i = 0; i < 10; i++) {
        printf("%2d", N[i]);
    }
}