#include <stdio.h>

int main(){
    //declaração de variáveis iniciais
    int quantidadeAlunos; // quantidade de valores lidos e respectivamente quantidade de alunos
    char traco;

    //lê quantidade de valores que vão ser lidos
    scanf("%d", &quantidadeAlunos);

    //variáveis para armazenar as medias dos alunos e suas posições na lista
    float medias[quantidadeAlunos];
    int posicao[quantidadeAlunos];

    for (int i = 0; i < quantidadeAlunos; i++){
        scanf("%d  %c %f", &posicao[i], &traco, &medias[i]);
    }

    printf("Aprovados: ");
    for (int k = 0; k < quantidadeAlunos; k++){
        int ref; //variável de referência para o posicionamento das vírgulas
        if (medias[k] >= 7.0 && ref != 1){
            printf("%d (%.1f)", posicao[k], medias[k]);
            ref++;
        } else if(medias[k] >= 7.0) {
            printf(", %d (%.1f)", posicao[k], medias[k]);
        } 
    }

    printf("\n");

    printf("Recuperação: ");
    for (int k = 0; k < quantidadeAlunos; k++){
        int ref; //variável de referência para o posicionamento das vírgulas
        if ((medias[k] >= 5.0 && medias[k] < 7.0) && ref != 1){
            printf("%d (%.1f)", posicao[k], medias[k]);
            ref++;
        } else if(medias[k] >= 5.0 && medias[k] < 7.0) {
            printf(", %d (%.1f)", posicao[k], medias[k]);
        } 
    }

    printf("\n");

    printf("Reprovados: ");
    for (int k = 0; k < quantidadeAlunos; k++){
        int ref; //variável de referência para o posicionamento das vírgulas
        if (medias[k] < 5.0 && ref != 1){
            printf("%d (%.1f)", posicao[k], medias[k]);
            ref++;
        } else if(medias[k] < 5.0) {
            printf(", %d (%.1f)", posicao[k], medias[k]);
        } 
    }
    
    return 1;
}