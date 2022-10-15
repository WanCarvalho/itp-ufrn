#include <stdio.h>
#include <stdlib.h>

int main(){
    int K; // chave para descriptografar
    char P[200]; // mensagem de até 200 caracteres
    
    scanf("%d", &K);
    scanf("%[^\n]", P);
    
    printf("%s", P);

    return 1;
}