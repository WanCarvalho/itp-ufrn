#include <stdio.h>

int main(){
    int N, M;

    scanf("%d %d", &N, &M);

    char matriz[N][M];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf(" %c", matriz[i][j]);
        }
    }
}