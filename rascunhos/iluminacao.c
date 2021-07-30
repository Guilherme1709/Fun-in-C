#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {
    float metros_compri, cent_compri, metro_larg, cent_larg, cent_metro, cent_metro_larg;
    float area, iluminacao;

    printf("Quantos metros tem o comprimento do seu comodo?: \n");
    scanf("%f", &metros_compri);
    printf("Quantos centimetros tem o comprimento do seu comodo?: \n");
    scanf("%f", &cent_compri);

    cent_metro = cent_compri/100;

    printf("Quantos metros tem a largura do seu comodo?: \n");
    scanf("%f", &metro_larg);
    printf("Quantos centimetros tem a largura do seu comodo?: \n");
    scanf("%f", &cent_larg);
    
    cent_metro_larg = cent_larg/100;

    area = (metros_compri + cent_metro) * (metro_larg + cent_metro_larg);
    printf("A area do seu comodo, em metros quadrados, e: %2.f\n", area);

    iluminacao = area * 18;
    printf("A iluminacao ideal para o seu comodo, considerando 18W de potencia, e: %.2f\n", iluminacao);
    
    return 0;
}