#include <stdio.h>
#include <string.h>

// função utilizada para separar os números da chave K
void separacaoNumerica(int K, int key[4])
{

    if (K / 1000 != 0)
    {
        key[0] = K / 1000;
    }
    K = K - ((K / 1000) * 1000);

    if (K / 100 != 0)
    {
        key[1] = K / 100;
    }
    K = K - ((K / 100) * 100);

    if (K / 10 != 0)
    {
        key[2] = K / 10;
    }
    K = K - ((K / 10) * 10);

    key[3] = K;
}

void main()
{
    int K;       // chave para descriptografar
    char P[200]; // mensagem de até 200 caracteres

    const char S[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                      'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                      'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                      'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' '};

    scanf("%d", &K);
    scanf(" %200[^\n]", P); // lendo a string de entrada

    int key[4]; // variável que armazena os algarismos de K separados

    char resultado[200];
    int condicaoParaInvalidar = 0; // variável de controle para casos específicos

    separacaoNumerica(K, key); // chamando função para separar os números

    // ------ For que verifica se entre algum dos caracteres digitados tem algum que não está no vetor/string S
    for (int j = 0; j < strlen(P); j++){
        int verificador = 0;

        for (int i = 0; i < strlen(S); i++){
            if (P[j] == S[i]){
                verificador = 1;
            }
        }

        if (verificador != 1){
            condicaoParaInvalidar = 2;
        }
    }

    int contadorIndice = 0; // variável de controle para o índice da variável key

    for (int j = 0; j < strlen(P); j++)
    {

        // condicional que verifica se a chave digitada é invalida
        if (K < 0000 || K > 9999)
        {
            condicaoParaInvalidar = 1;
            break;
        }

        for (int i = 0; i < strlen(S); i++)
        {

            if (S[i] == P[j])
            {

                int posVetor = i + key[contadorIndice];

                if(posVetor > strlen(S)){
                    posVetor = (posVetor - strlen(S)) +2;
                } else if(P[j] == ' '){
                    posVetor = key[contadorIndice] -1;
                }

                P[j] = S[posVetor];

                contadorIndice++;

                if (contadorIndice == 4)
                {
                    contadorIndice = 0;
                    break;
                }

                // printf("%d ", i); // TESTE: imprime o indíce da posição da letra da string P
                break;
            }
        }
    }

    if (condicaoParaInvalidar == 1)
    {
        printf("Chave invalida!");
    }
    else if (condicaoParaInvalidar == 2)
    {
        printf("Caractere invalido na entrada!");
    }
    else
    {
        for (int i = 0; i < strlen(P); i++)
        {
            printf("%c", P[i]);
        }
    }
}