#include <stdio.h>

/*int compute_votes(int num_votes, int votes[num_votes], int num_parties, Party parties[num_parties],
Party *most_voted, Party *second_most_voted){

}*/

void main(){

    int N;

    scanf("%d", &N);

    int num_chapa[N];
    char *nome_chapa[N];

    for (int i = 0; i < N; i++){
        scanf("%d %s", &num_chapa[i], nome_chapa[i]);
    }

    for (int i = 0; i < N; i++){
        printf("%d %s\n", num_chapa[i], nome_chapa[i]);
    }

}