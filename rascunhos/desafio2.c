#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {
    int i;
    float media[3] = {0}, num;

    for (i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%f", &num);

        media[0] += num;
    }

    for (i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%f", &num);

        media[1] += num;
    }

    for (i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%f", &num);

        media[2] += num;
    }

    printf("A media 1 e: %.2f\n", media[0]/5);
    printf("A media 2 e: %.2f\n", media[1]/5);
    printf("A media 3 e: %.2f\n", media[2]/5);

    system("pause");
    return 0;
}