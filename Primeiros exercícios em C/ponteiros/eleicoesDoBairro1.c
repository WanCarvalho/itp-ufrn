#include <stdio.h>

void compute_votes(int n, int votes[n], int *most_voted, int *second_most_voted){
    
    // ordena o vetor em ordem crescente
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (votes[i] > votes[j]) {
                int temp = votes[i];
                votes[i] = votes[j];
                votes[j] = temp;
            }
        }
    }
    
}

void main(){
    int N;
    scanf("%d", &N);
    int votes[N];
    int vetorRep[N];
    
    for(int i = 0; i < N; i++){
        scanf("%d", &votes[i]);
    }
    
    compute_votes(N, votes, 0, 0);
    
    /*for(int i = 0; i < N; i++){
        printf("%d ", votes[i]);
    }*/
    
    // encontrando mais votado
    int votos[10];
    
    for(int i = 0; i < 10; i++){
        votos[i] = 0;
    }
    
    
    for(int j = 0; j < N; j++){
        if(votes[j] == 1){
            votos[0] += 1;
        } else if(votes[j] == 2){
            votos[1] += 1;
        } else if(votes[j] == 3){
            votos[2] += 1;
        } else if(votes[j] == 4){
            votos[3] += 1;
        } else if(votes[j] == 5){
            votos[4] += 1;
        } else if(votes[j] == 6){
            votos[5] += 1;
        } else if(votes[j] == 7){
            votos[6] += 1;
        } else if(votes[j] == 8){
            votos[7] += 1;
        } else if(votes[j] == 9){
            votos[8] += 1;
        } else if(votes[j] == 10){
            votos[9] += 1;
        }
    }
    
    /*for(int i = 1; i <= 10; i++){
        printf("%d ", i);
    } teste que imprime posição da chapa (para ficar mais facil de ver a chapa mais votada)*/
    
    /*for(int i = 0; i <= 9; i++){
        printf("%d ", votos[i]);
    } imprime a quantidade de votos referente a cada chapa*/
    
    // descobrindo indice que guarda maior numero de votos
    int indiceMaisVotado = 0;
    for(int i = 0; i < 8; i++){
        if(votos[i + 1] > votos[indiceMaisVotado]){
            indiceMaisVotado = i+1;
        }
    }
    
    int segundoMaisVotado = 0;
    for(int i = 0; i < 8; i++){
        if(i+1 != indiceMaisVotado){
            if(votos[i + 1] > votos[segundoMaisVotado]){
                segundoMaisVotado = i+1;
            }
        }
        
    }
    
    printf("%d %d", indiceMaisVotado+1, segundoMaisVotado+1);
}