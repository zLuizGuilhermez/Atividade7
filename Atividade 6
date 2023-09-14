#include <stdio.h>

int main()
{
    int abacaxi = 5, quantidadeAbacaxi = 0, quantidadeMacas = 0, pera = 4, maca = 1, resultadoFinal = 0, menu, quantidadePeras = 0, continuarComprando = 0;


    do
    {
        int escolha;
        printf("Digite o numero, que corresponde ao da fruta (1-abacaxi 2-maca 3-pera): ");
        scanf("%d", &escolha);

        if (escolha < 1 || escolha > 3)
        {
            printf("Valor incorreto!\n");
        }

        if (escolha >= 1 || escolha <= 3)
        {
            switch (escolha)
            {
            case 1:
                printf("Qual a quantidade?");
                scanf("%d", &quantidadeAbacaxi);
                resultadoFinal += abacaxi * quantidadeAbacaxi;
                break;
            case 2:
                printf("Qual a quantidade?");
                scanf("%d", &quantidadeMacas);
                resultadoFinal += maca * quantidadeMacas;
                break;
            case 3:
                printf("Qual a quantidade?");
                scanf("%d", &quantidadePeras);
                resultadoFinal += pera * quantidadePeras;
                break;
            }
        }
        printf("O valor final é de: %d\n", resultadoFinal);
        printf("\nDeseja voltar ao menu? Digite 1 para continuar ou 0 para sair: ");
        scanf("%d", &menu);

    } while (menu > 0);

    return 0;
}
