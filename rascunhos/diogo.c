#include <stdlib.h>
#include <stdio.h>

int main()
{

    int opcao, opcao2;
    float codigos[1000], saldos[1000], aux3, saldototal=0;

    for (int i = 1; i <= 1000; i++)
    {
        codigos[i]=0;
        saldos[i]=0;
    }


    printf("Escolha uma opcao:\n1 - Vender passagem;\n2 - Mostrar mapa de ocupacao do onibus;\n3 - Encerrar.\n");
    scanf("%d", &opcao);

    while (opcao != 3)
    {

        int aux = 0, aux4 = 0;

        if (opcao == 1 && aux4 == 0)
        {
            float aux2 = 0;
            printf("Voce deseja janela ou corredor?\n1 - Janela\n2 - Corredor.\n");
            scanf("%d", &lugar);
            saldos[aux] = aux2;
            printf("\n\n O saldo atual e de: %.2f reais.\n\n", saldos[aux]);
        }

        if (opcao == 2 && aux4 == 0)
        {
            printf("Saldo atual dessa conta e de: %.2f reais.\n", saldos[aux]);
            printf("Digite o valor que deseja sacar: \n");
            scanf("%f", &aux3);

            if (aux3 <= saldos[aux])
            {
                saldos[aux] = saldos[aux] - aux3;
                printf("Saldo atual da conta: %.2f reais \n", saldos[aux]);
            }
            else
            {
                printf("\n O valor disponivel na conta e inferior ao valor de saque. \n");
            }
        }
        if (opcao == 3)
        {
            for (int i = 1; i <= 20; i++)
            {
                saldototal = saldototal + saldos[i];
                printf("%f\n", saldos[i]);
            }
            printf("O valor total do banco e %.2f reais.\n", &saldototal);
            printf("%f\n", saldos[10]);
            printf("%f\n", saldos[15]);

        }
        printf("\n\n Digite a opcao que deseja: \n\n 1 - Efetuar deposito \n 2 - Efetuar Saque \n 3 - Consultar saldo \n 4 - Finalizar programa \n\n");
        scanf("%i", &opcao);
    }

    return 0;
}