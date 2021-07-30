#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

//os cálculos realizados neste código não consideram anos bissextos, nem valores decimais para o número de semanas.

int main () {
    
    int ano_nasc, ano_atual,  idade_ano, idade_meses, idade_dias, idade_semana;

    printf("Digite o ano em que voce nasceu: ");
    scanf("%i", &ano_nasc);
    printf("\nDigite o ano atual: ");
    scanf("%i", &ano_atual);

    idade_ano = ano_atual - ano_nasc;
    idade_meses = idade_ano * 12;
    idade_dias = idade_ano * 365;
    idade_semana = idade_ano * 52;

    if (idade_ano >= 60) {
        printf("\nVoce faz parte do grupo de risco de infecao da COVID-19");
    }

    printf("\nSua idade em anos e: %i", idade_ano);
    printf("\nSua idade em meses e: %i", idade_meses);
    printf("\nSua idade em dias e: %i", idade_dias);
    printf("\nSua idade em semanas e: %i\n", idade_semana);
    
    system("pause");
    return 0;
}