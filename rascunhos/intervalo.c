#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

int main () {
    int vet[10], i;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 10; i += 2) {
        printf("%i - ", vet[i]);
    }

    return 0;
}