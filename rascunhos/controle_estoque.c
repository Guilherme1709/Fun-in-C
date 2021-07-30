#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {
    float peso_kilo, peso_gramas, preco_total, imposto, preco_final;
    int codigo_pais, codigo_produto;

    printf("Digite o codigo do pais: ");
    scanf("%i", &codigo_pais);
    printf("Digite o codigo do produto: ");
    scanf("%i", &codigo_produto);
    printf("Digite o peso do produto (em quilogramas): ");
    scanf("%f", &peso_kilo);

    if (codigo_pais == 1) {
        imposto = 0.10;
    } else if (codigo_pais == 2) {
        imposto = 0.25;
    } else if (codigo_pais == 3) {
        imposto = 0.35;
    } 
    
    if (codigo_produto >= 1 && codigo_produto <= 4) {
        preco_total = 15;
    } else if (codigo_produto >= 5 && codigo_produto <= 7) {
        preco_total = 30;
    } else if (codigo_produto >= 8 && codigo_produto <= 10) {
        preco_total = 40;
    } 


    peso_gramas = peso_kilo * 1000;
    preco_total = peso_gramas * preco_total;
    imposto = preco_total * imposto;
    preco_final = preco_total + imposto;

    printf("O peso transformado em gramas e: %.2f\n", peso_gramas);
    printf("O preco total do produto comprado e: %.2f\n", preco_total);
    printf("O valor do imposto (calculado sobre o preco total e o pais de origem) e: %.2f\n", imposto);
    printf("O preco do produto somado ao imposto e: %f\n", preco_final);

    return 0;
}