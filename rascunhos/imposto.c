#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

//codigo recebe como entrada o peso da carga e o codigo do estdado e da carga;
//converte o peso da carga em kg;
//calcula o valor do imposto baseado no peso da carga em kg;
//calcula o preco em kg de acordo com os valores enunciados na tabela do exercicio;
//calcula o valor total da carga somando o imposto com o preco em kg;
//mostra os resultados no final.


int main () {
    float peso_carga, peso_kg, preco_kg, imposto, valor_total; 
    int codigo_estd, codigo_carga;

    printf("Digite o peso da carga do caminhao (em toneladas): ");
    scanf("%f", &peso_carga);
    printf("Digite o codigo do estado (entre 1 e 5): ");
    scanf("%i", &codigo_estd);
    printf("Digite o codigo da carga (entre 10 e 40): ");
    scanf("%i", &codigo_carga);

    peso_kg = peso_carga * 1000;

    if (codigo_estd == 1) { 
        imposto = peso_kg * 0.40;     
    } else if (codigo_estd == 2) {
        imposto = peso_kg * 0.30;
    } else if (codigo_estd == 3) {
        imposto = peso_kg * 0.20;
    } else if (codigo_estd == 4) {
        imposto = peso_kg * 0.10;
    } else if (codigo_estd == 5) {
        imposto = peso_kg * 0.05;
    }
    
    if (codigo_carga >= 10 && codigo_carga <= 20) {
        preco_kg = peso_kg * 1000;
    } else if (codigo_carga >= 21 && codigo_carga <= 30) {
        preco_kg = peso_kg * 2500;
    } else if (codigo_carga >= 31 && codigo_carga <= 40) {
        preco_kg = peso_kg * 340;
    }
    
    valor_total = preco_kg + imposto;

    printf("O peso da carga, em quilos, e: %.2f\n", peso_kg);
    printf("O valor da carga do caminhao, em preco por quilo, e: %.2f\n", preco_kg);
    printf("O valor do imposto, calculado sobre a carga em quilos, e: %.2f\n", imposto);
    printf("O valor total, preco da carga mais impostos, e: %.2f\n", valor_total);

    return 0;
}