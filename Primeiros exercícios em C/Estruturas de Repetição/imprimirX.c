#include <stdio.h>

int main()
{
    int quantidadeLinhas = 0;
    char letraSelecionada;

    scanf("%d %c", &quantidadeLinhas, &letraSelecionada);

    if (quantidadeLinhas % 2 == 1)
    {

        int contador = 2;
        int refEspacoInicial = 0; // variável que controla quantidade de espaços no inicio da linha

        while (contador < (quantidadeLinhas - 1) + 2)
        {

            if (refEspacoInicial != 0)
            {
                for (int l = 0; l < refEspacoInicial; l++)
                {
                    printf(" ");
                }
            }

            printf("%c", letraSelecionada);

            for (int i = 0; i < (quantidadeLinhas - contador) - 1; i++)
            {
                printf(" ");
            }

            printf("%c", letraSelecionada);

            printf("\n");
            contador = contador + 2;
            refEspacoInicial = refEspacoInicial + 1;
        }

        refEspacoInicial = refEspacoInicial - 1;
        contador = 2;

        while (contador < (quantidadeLinhas - 1) + 2)
        {

            if (refEspacoInicial != 0)
            {
                for (int l = 0; l < refEspacoInicial; l++)
                {
                    printf(" ");
                }
            }

            printf("%c", letraSelecionada);

            for (int i = 0; i < contador - 2; i++)
            {
                printf(" ");
            }

            printf("%c", letraSelecionada);

            printf("\n");
            contador = contador + 2;
            refEspacoInicial = refEspacoInicial - 1;
        }
    }
    else if (quantidadeLinhas % 2 == 0)
    {

        int contador = 2;
        int refEspacoInicial = 0;

        while (contador < (quantidadeLinhas - 1) + 1)
        {
            if (refEspacoInicial != 0)
            {
                for (int l = 0; l < refEspacoInicial; l++)
                {
                    printf(" ");
                }
            }

            printf("%c", letraSelecionada);

            for (int i = 0; i < (quantidadeLinhas - contador) - 1; i++)
            {
                printf(" ");
            }

            printf("%c", letraSelecionada);

            printf("\n");

            contador = contador + 2;
            refEspacoInicial = refEspacoInicial + 1;
        }

        for (int i = 0; i < refEspacoInicial; i++)
        {
            printf(" ");
        }

        printf("%c\n", letraSelecionada);

        refEspacoInicial = refEspacoInicial - 1;
        contador = 2;

        while (contador < (quantidadeLinhas - 1) + 1)
        {

            if (refEspacoInicial != 0)
            {
                for (int l = 0; l < refEspacoInicial; l++)
                {
                    printf(" ");
                }
            }

            printf("%c", letraSelecionada);

            for (int i = 0; i < contador - 1; i++)
            {
                printf(" ");
            }

            printf("%c", letraSelecionada);

            printf("\n");
            contador = contador + 2;
            refEspacoInicial = refEspacoInicial - 1;
        }
    }

    return 1;
}