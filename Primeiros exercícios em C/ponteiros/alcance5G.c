#include <stdio.h>
#include <string.h>

/*int get_range(int n, int cells[n], int distance, int user, int *left_index, int *right_index){

}*/

void main(){

    int N, D, U;
    
    scanf("%d %d %d", &N, &D, &U);

    int celulas[N];
    int alcance[99];

    for (int i = 0; i < N; i++){
        scanf("%d", &celulas[i]);
    }

    int cont = 0;

    for (int i = 0; i < N; i++){
        int verificadorAlcance;

        if(celulas[i] < U){
            verificadorAlcance = U - celulas[i];
        } else {
            verificadorAlcance = celulas[i] - U;
        }

        if(verificadorAlcance <= D && verificadorAlcance > 0){
            alcance[cont] = celulas[i];
            cont++;
        }
    }

    for (int i = 0; i < cont; i++){
        printf("%d ", alcance[i]);
    }

    if(strlen(alcance) == 0){
        printf("USUARIO DESCONECTADO");
    }
}