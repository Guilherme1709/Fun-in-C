#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main () {
    int codigo_cargo;
    float salario, novo_salario;


    printf("Digite o codigo do funcionario (de 1 a 5): ");
    scanf("%i", &codigo_cargo);
    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    
    if (codigo_cargo == 1) {
        novo_salario = (0.50 * salario) + salario;
        printf("Tecnico, aumento de 50 porcento");
        printf("\nO salario reajustado e: %.2f", novo_salario);
    } else if (codigo_cargo == 2) {
        novo_salario = (0.35 * salario) + salario;
        printf("Secretaria, aumento de 35 porcento");
        printf("\nO salario reajustado e: %.2f", novo_salario);
    } else if (codigo_cargo == 3) {
        novo_salario = (0.20 * salario) + salario;
        printf("Seguranca, aumento de 20 porcento");
        printf("\nO salario reajustado e: %.2f", novo_salario);
    } else if (codigo_cargo == 4) {
        novo_salario = (0.10 * salario) + salario;
        printf("Supervisor, aumento de 10 porcento");
        printf("\nO salario reajustado e: %.2f", novo_salario);
    } else if (codigo_cargo == 5) {
        printf("Gerente, nao tem aumento");
    }
    return 0;
}