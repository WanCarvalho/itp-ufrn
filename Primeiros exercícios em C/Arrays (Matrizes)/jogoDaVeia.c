#include <stdio.h>

void main(){
    char tabuleiro[3][3];
    int quantidadeJogadas;

    // Lê os caracteres em cada posição da matriz de 3x3
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf(" %c", &tabuleiro[i][j]);
        }
    }

    // lê a quantidade de jogadas testadas
    scanf("%d", &quantidadeJogadas);

    for (int i = 0; i < quantidadeJogadas; i++){
        int linha, coluna;
        char letra;
        scanf("%d %d %c", &linha, &coluna, &letra);

        // subtrai 1 dos valores de linha e coluna digitados pelo usuário para se adequar as posições da matriz na linguagem
        linha = linha - 1;
        coluna = coluna - 1;

        // variável para guardar o caractere que estava naquela posição antes de atribuir um novo caractere a mesma
        char ref = tabuleiro[linha][coluna];

        if (tabuleiro[linha][coluna] != '.'){
            printf("Jogada inválida!\n");
        }

        // confere as possibilidades de jogadas vencedoras
        else if (tabuleiro[linha][coluna] == '.'){

            tabuleiro[linha][coluna] = letra;

            // confere as linhas horizontalmente
            if (tabuleiro[0][0] == letra && tabuleiro[0][1] == letra && tabuleiro[0][2] == letra || tabuleiro[1][0] == letra && tabuleiro[1][1] == letra && tabuleiro[1][2] == letra || tabuleiro[2][0] == letra && tabuleiro[2][1] == letra && tabuleiro[2][2] == letra){
                printf("Boa jogada, vai vencer!\n");
            }

            // confere as colunas verticalmente
            else if (tabuleiro[0][0] == letra && tabuleiro[1][0] == letra && tabuleiro[2][0] == letra || tabuleiro[0][1] == letra && tabuleiro[1][1] == letra && tabuleiro[2][1] == letra || tabuleiro[0][2] == letra && tabuleiro[1][2] == letra && tabuleiro[2][2] == letra){
                printf("Boa jogada, vai vencer!\n");
            }

            // confere as diagonais
            else if (tabuleiro[0][0] == letra && tabuleiro[1][1] == letra && tabuleiro[2][2] == letra || tabuleiro[0][2] == letra && tabuleiro[1][1] == letra && tabuleiro[2][0] == letra){
                printf("Boa jogada, vai vencer!\n");
            }
            
            else {
                printf("Continua o jogo.\n");
            }
        }

        // ao final do laço volta ao caractere que estava na posição antes da jogada ser testada
        tabuleiro[linha][coluna] = ref;
    }
}