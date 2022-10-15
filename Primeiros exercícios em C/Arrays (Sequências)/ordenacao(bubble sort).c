#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    int vetor[N];

    // Lê valores no vetor
    for (int i = 0; i < N; i++){
        scanf("%d", &vetor[i]);
    }

    // Imprime valores do vetor ainda fora de ordem
    for (int i = 0; i < N; i++){
        printf("%d ", vetor[i]);
        if (i == N - 1)
        {
            printf("\n");
        }
    }

    for (int l = 1; l < N; l++){
        for (int j = 1; j < N; j++){
        if(vetor[j - 1] > vetor[j]){
            int ref = vetor[j - 1];
            vetor[j - 1] = vetor[j];
            vetor[j] = ref;
        } 
    }
        for(int i = 0; i < N; i++){
            printf("%d ", vetor[i]);
        }
        printf("\n");
    }    
}