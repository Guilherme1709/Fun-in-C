#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main () {
    char nome[3][100];
    int total[3], soma = 0;
    int porcentual[3];
    int i, maior, menor;

    for(i = 0; i < 3; i++) {
        printf("Digite o nome do vendedor %d:\n", i + 1);
        scanf("%s", &nome[i]);
    }

    printf("\n");

    for(i = 0; i < 3; i++) {
        printf("Digite o valor total vendido pelo vendedor %d:\n", i + 1);
        scanf("%d", &total[i]);
        soma += total[i];
    }
    
    printf("\n");

    for(i = 0; i < 3; i++) {
        printf("Digite o porcentual da comissao do vendedor %d:\n", i + 1);
        scanf("%d", &porcentual[i]);
        porcentual[i] = (total[i] * porcentual[i]) / 100;
    }

    printf("\n");

    for (i = 0; i < 3; i++) {
        printf("%s recebeu R$%d de comissao.\n", nome[i], porcentual[i]);
    }

    printf("\n");

    printf("Valor somado das vendas de todos os vendedores: %d\n", soma);
    
    printf("\n");

    maior = porcentual[0];
    
    for(i = 1; i < 3; i++) {
        if(porcentual[i] > maior) {
            maior = porcentual[i];  
        }
    }

    menor = porcentual[0];
    

    for(i = 1; i < 3; i++) {
        if(porcentual[i] < menor) {
            menor = porcentual[i];
        }
    }

    printf("Maior comissao: R$%d\n", maior);
    printf("Menor comissao: R$%d\n", menor);
       
    return 0;
}