#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[200];
    int gols_marcados;
    int gols_sofridos;
} Time; 

void ordenaTimes(Time times[], int tamanhoVetorTimes){
    
    Time temp[1]; //struct que serve de auxílio para ordenação decrescente
    
    for (int j = 0; j < tamanhoVetorTimes; j++){
        for (int i = j+1; i < tamanhoVetorTimes; i++){
            if (times[i].gols_marcados > times[j].gols_marcados){
                temp[0] = times[i];
                times[i] = times[j];
                times[j] = temp[0];
            }
        }
    }
    
    for(int i = 0; i < tamanhoVetorTimes; i++){
        printf("%d - %s\n", i+1, times[i].nome);
        printf("Gols marcados: %d\nGols sofridos: %d\n", times[i].gols_marcados, times[i].gols_sofridos);
    }

}

void main(){
    int n;
    
    scanf("%d", &n);
    
    Time times[n];
    
    for(int i = 0; i < n; i++){
        scanf(" %[^\n]", times[i].nome);
        scanf("%d %d", &times[i].gols_marcados, &times[i].gols_sofridos);
    }

    ordenaTimes(times, n);
    
    
}