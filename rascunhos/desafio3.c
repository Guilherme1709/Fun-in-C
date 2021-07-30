#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define tam 100
int main () {
    int original[tam] = {0}, pares[tam] = {0}, impares[tam] = {0};
    int i, cont_impar = 0, cont_par = 0;

    for(i = 0; i < 100; i++) {
        original[i] = i;
    }

    for(i = 0; i < 100; i++) {

        if (original[i] % 2 == 0) {
            pares[cont_par] = original[i];
            cont_par++;
        } else {
            impares[cont_impar] = original[i];
            cont_impar++;
        }
    }
    for(i = 0; i < 100; i++) {
        printf("%d\n", impares[i]);
    }

    system("pause");
    return 0;
}