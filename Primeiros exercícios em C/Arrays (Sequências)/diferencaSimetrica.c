/*
Algoritmo que recebe dois conjuntos e imprime a diferença simétrica entre eles.
*/

#include <stdio.h>

void main(){
    int N, M;

    // restringir valores lidos de M e N, entre 0 e 50
    do{
        scanf("%d %d", &N, &M);
    } while ((N < 0 || N > 50) || (M < 0 || M > 50));

    int conjunto1[N];
    int conjunto2[M];

    /// ler valores dos conjuntos em vetores
    for (int i = 0; i < N; i++){
        scanf("%d", &conjunto1[i]);
    }
    for (int j = 0; j < M; j++){
        scanf("%d", &conjunto2[j]);
    }

    int vetorResultante[99]; // vetor que vai ser impresso como saída final
    int tamanhoResultante = 0; // tamanho do vetor resultante
    int ref = 0; // variável de referência de indíce para o conjunto resultante

    // fazer diferença simétrica verifica elementos do conjunto1
    for (int i = 0; i < N; i++){
        int repete = 0;
        for (int j = 0; j < M; j++){
            if (conjunto1[i] == conjunto2[j]){
                repete++;
            }
        }
        if (repete == 0){
            vetorResultante[ref] = conjunto1[i];
            ref++;
            tamanhoResultante++;
        }
    }

    // fazer diferença simétrica verifica elementos do conjunto2
    for (int i = 0; i < M; i++){

        int repete = 0; // variável que verifica se os números se repetem entre os conjuntos

        for (int j = 0; j < N; j++){
            if (conjunto2[i] == conjunto1[j])
            {
                repete++;
            }
        }
        if (repete == 0){
            vetorResultante[ref] = conjunto2[i];
            ref++;
            tamanhoResultante++;
        }
    }

    // ordenar em ordem crescente
    for (int l = 1; l < tamanhoResultante; l++){
        for (int j = 1; j < tamanhoResultante; j++){
            if (vetorResultante[j - 1] > vetorResultante[j]){
                int ref1 = vetorResultante[j - 1];
                vetorResultante[j - 1] = vetorResultante[j];
                vetorResultante[j] = ref1;
            }
        }
    }

    // imprimir vetor resultante
    for (int i = 0; i < tamanhoResultante; i++){
        printf("%d ", vetorResultante[i]);
    }
}