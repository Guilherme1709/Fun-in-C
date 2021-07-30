#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {
    float altura, peso, idade, media, porcent;
    int cont_pessoas = 0, cont_altura = 0, cont_idade = 0, cont_idade2 = 0, soma = 0;
    char parada = 's';

    while (parada != 'n') { 
        printf("Digite a idade (em anos): \n");
        scanf("%f", &idade);
        printf("Digite o peso (em quilogramas): \n");
        scanf("%f", &peso);
        printf("Digite a altura (no formato x.xx): \n");
        scanf("%f", &altura);

        cont_idade = cont_idade + 1;
        soma = soma + idade;

        if (peso < 80 && altura > 1.80) {
            cont_pessoas = cont_pessoas + 1;
        }

        if (idade >= 20 && idade <=35) {
            cont_idade2 = cont_idade2 + 1;
        }
        if (idade > 1.70) {
            cont_altura = cont_altura + 1;
        }

        printf("Ha mais dados? s = sim  n = nao\n");
        scanf("%c %c", &parada, &parada);
    }

    porcent =(cont_idade2 * 100) / cont_altura;
    media = soma / (float) cont_idade;

    printf("A media das idades e: %.2f\n", media);
    printf("A quantidade de pessoas com peso inferior a 80kg e altura superior a 1.80m e: %i\n", cont_pessoas);
    printf("A porcentagem de pessoas com idade entre 20 e 35 anos\nentre as pessoas que medem mais do que 1.70 e: %.2f%%\n", porcent);

    system("pause");
    return 0;
}