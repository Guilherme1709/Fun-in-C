#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {
    int idade, cont_idade, cont_faixa_1, cont_faixa_2, 
        cont_faixa_3, cont_faixa_4, cont_faixa_5;

    float calculo1, calculo2;

    cont_faixa_1 = cont_faixa_2 = cont_faixa_3 = cont_faixa_4 = cont_faixa_5 = 1;

    for (cont_idade = 1; cont_idade <= 8; cont_idade++) {
        printf("Digite a idade: ");
        scanf("%i", &idade);

        if (idade <= 15) {
            cont_faixa_1 = cont_faixa_1 + 1;
        } else if (idade > 15 && idade <= 30) {
            cont_faixa_2 = cont_faixa_2 + 1;
        } else if (idade > 30 && idade <= 45) {
            cont_faixa_3 = cont_faixa_3 + 1;
        } else if (idade > 45 && idade <= 60) {
            cont_faixa_4 = cont_faixa_4 + 1;
        } else if (idade > 60) {
            cont_faixa_5 = cont_faixa_5 + 1;
        }
    }

    calculo1 = (cont_faixa_1 * 100) / 8;
    calculo2 = (cont_faixa_5 * 100) / 8;

    printf("\nIdades: ");
    printf("\nAte 15 anos: %i", cont_faixa_1);
    printf("\nEntre 16 e 30 anos: %i", cont_faixa_2);
    printf("\nEntre 31 e 45 anos: %i", cont_faixa_3);
    printf("\nEntre 46 e 60 anos: %i", cont_faixa_4);
    printf("\nMaiores de 60 anos: %i", cont_faixa_5);
    printf("\nPorcentagem de pessoas com ate 15 anos: %.2f", calculo1);
    printf("\nPorcentagem de pessoas acima de 60 anos: %.2f\n", calculo2);

    system("pause");
    return 0;
}

