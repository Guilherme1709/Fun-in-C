#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
//o codigo recebe o valor da divida que o usuario digitar;
//depois recebe a quantidade de parcelas, sendo 2, 4, 7, 10 ou 13;
//o valor de juros e calculado de acordo com o valor da parcela;
//se a parcela for igual a 2, o programa calcula 5% de juros sobre o valor da divida do usuario;
//se a parcela for igual a 4, o juros cobrado e de 15%
//se a parcela for igual a 7, o juros e de 20%;
//se a parcela for igual a 10, o juros e de 25%;
//e se a parcela for igual a 13, o juros e de 30%;
//por fim, o programa mostra os valores da divida, do juros, das parcelas e a quantidade de parcelas escolhida pelo usuario.


int main () {
    float divida, valor_juros, valor_parcela;
    int parcela;

    printf("Digite o valor da divida: ");
    scanf("%f", &divida);
    printf("Digite a quantidade de parcelas:  [2, 4, 7, 10 ou 13]\n");
    scanf("%i", &parcela);

    if (parcela == 2) {
        valor_juros = divida * 0.05;
        valor_parcela = divida / 2;
    } 

    if (parcela == 4) {
        valor_juros = divida * 0.15;
        valor_parcela = divida / 4;
    } 

    if (parcela == 7) {
        valor_juros = divida * 0.2;
        valor_parcela = divida / 7;
    } 

    if (parcela == 10) {
        valor_juros = divida * 0.25;
        valor_parcela = divida / 10;
    }

    if (parcela == 13) {
        valor_juros = divida * 0.3;
        valor_parcela = divida / 13;
    }
    printf("%s%20s%28s%20s\n", "Valor da divida", "Valor do juros", "Quantidade de parcelas", "Valor da parcela");
    printf("%10.2f %20.2f %20d %25.2f\n", divida, valor_juros, parcela, valor_parcela);


    system("pause");
    return 0;
}

