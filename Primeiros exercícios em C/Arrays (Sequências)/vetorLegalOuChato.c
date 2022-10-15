#include <stdio.h>

void vetorLegal(int vetorParametro[], int nParametro){
    int auxiliar = 0; //variável para auxiliar se há alguma subtração que não resulte em número par

    for(int i = 1; i < nParametro; i++){
        int subtracao = (vetorParametro[i] - vetorParametro[i-1]);

        if((vetorParametro[i] - vetorParametro[i-1]) == 0){
            auxiliar = auxiliar;
        } else if (subtracao % 2 != 0){
            auxiliar++;
        }   
    }

    if(auxiliar == 0){
        printf("Legal");
    } else {
        printf("Chato");
    }
}

void main(){
    
    int n;

    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    vetorLegal(vetor, n);
}