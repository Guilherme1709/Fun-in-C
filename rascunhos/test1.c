#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {
    float nota[5] = {0}, media = 0, soma = 0;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Digite a nota numero %d: ", i);
        scanf("%f", &nota[i]);

        soma += nota[i];
    }

    media = soma / 5;

    printf("A media das notas e igual a: %.2f", media);
    return 0;
}