#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {

    float nota, media, peso;
    float calculo1 = 0, calculo2 = 0;
    char continuar = 's';

    while (continuar != 'n') {
        printf("Digite a nota: ");
        scanf("%f", &nota);
        printf("Digite o peso da nota: ");
        scanf("%f", &peso);

        calculo1 = calculo1 + (nota * peso);
        calculo2 = calculo2 + peso;

        printf("Ha mais notas? [s = sim / n = nao] \n");
        scanf("%c %c", &continuar, &continuar);
    }

    media = calculo1 / calculo2;

    if (media > 8 && media <=10) {
        printf("Conceito A\n");
    } else if (media > 6 && media <= 8) {
        printf("Conceito B\n");
    } else if (media > 5 && media <= 6) {
        printf("Conceito C\n");
    } else if (media < 5) {
        printf("Conceito D\n");
    }
    
    
    printf("A media ponderada das notas digitadas e: %.2f\n", media);
    system ("pause");
    return 0;

}


