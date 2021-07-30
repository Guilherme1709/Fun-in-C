#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {
    float i, n, multi;

    printf("Digite um valor: ");
    scanf("%f", &n);

    for (i = 1; i <= n; i++) {
        multi = i*n;
        printf("%.f x %.f = %.2f\n", i, n, multi);
    }
    return 0;
}
