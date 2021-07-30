#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {
    int i = 0, quant_pessoas, idade, peso, cont_idade = 0, cont_idade2 = 0, cont_peso = 0;

    float media, soma = 0, soma2 = 0, altura, porcent;

    printf("Digite a quantidade de pessoas: ");
    scanf("%i", &quant_pessoas);

    for (i = 1; i <= quant_pessoas; i++) {
        printf("Digite a idade: \n");
        scanf("%i", &idade);
        printf("Digite a altura: \n");
        scanf("%f", &altura);
        printf("Digite o peso: \n");
        scanf("%i", &peso);

        soma = soma + altura;
        soma2 = soma2 + quant_pessoas;

        if (idade > 60) {
            cont_idade++;
        }

        if (idade >= 30 && idade <= 40) {
            cont_idade2++;
        }

        if (peso > 40) {
            cont_peso++;
        }
    }

    media = soma / cont_idade2;
    porcent = (cont_peso * 100) / soma2;

    printf("%i pessoas tem mais de 60 anos\n", cont_idade);
    printf("A media das alturas das pessoas com idade entre 30 e 40 anos e: %.2f\n", media);
    printf("A porcentagem de pessoas com peso maior que 40kg\nentre todas as pessoas analisadas e: %.2f\n", porcent);

    system("pause");
    return 0;
}