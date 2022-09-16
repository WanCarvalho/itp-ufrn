#include <stdio.h>

char * ehPerfeito(int n){
    int soma = 0;
    char *retorno;
    
    for(int j = 1; j<n; j++){
        if(n%j == 0){
            soma += j;
        }
    }
    
    if(soma == n){
        retorno = " eh perfeito";
    } else {
        retorno = " nao eh perfeito";
    }
    
    return retorno;
    
}

int main(){
    int n = 0;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int num = 0;
        scanf("%d", &num);
        printf("%d%s\n", num, ehPerfeito(num));
    }
    
    return 1;
}