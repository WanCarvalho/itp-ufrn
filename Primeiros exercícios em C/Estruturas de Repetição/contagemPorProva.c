/*
Para isso, você irá desenvolver um programa que analisa as inscrições de cada clube e determina a quantidade de
atletas em cada tipo de prova. A primeira entrada do programa consiste na quantidade N de equipes inscritas na
competição. Em seguida, para cada equipe inscrita, é fornecida uma quantidade indeterminada de inscrições representadas
por um único caractere que pode assumir os valores C, S ou L indicando respectivamente uma prova de corrida, salto ou
lançamento. A entrada das inscrições de uma equipe termina com a apresentação do valor F e então são fornecidas as inscrições
da próxima equipe até que todas as N equipes sejam apresentadas ao programa.

O programa deve apresentar como saída a quantidade de total de atletas em cada tipo de prova na seguinte ordem: provas de
corrida; provas de salto e provas de lançamento. Logo em seguida deve ser apresentado a quantidade total de atletas em todas as provas.

Exemplos:

Entrada             Saída

1                   1 3 2 6
S S S C L L F

---------------
Entrada             Saída

2                   1 3 1 5
S S S F
C L F
*/

#include <stdio.h>

int main(){
    int quantidadeEquipes = 0;
    int provaC = 0;
    int provaS = 0;
    int provaL = 0;
    
    char inscricao;

    scanf("%i", &quantidadeEquipes);

    for (int i = 0; i < quantidadeEquipes; i++){

        do{
            scanf(" %c", &inscricao);

            if (inscricao == 'C'){
                provaC = provaC + 1;
            } else if (inscricao == 'S'){
                provaS += 1;
            } else if (inscricao == 'L'){
                provaL += 1;
            }
            
        } while (inscricao != 'F');
        
    }

    int totalAtletas = provaC + provaS + provaL;

    printf("%i %i %i %i", provaC, provaS, provaL, totalAtletas);


    return 1;
}