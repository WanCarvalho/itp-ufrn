#include <stdio.h>

int ehPar(int num){
    
    if(num%2 == 0){
        printf("true");
    } else {
        printf("false");
    }
    
    return 1;
}
    
int main(){
    
    int numero = 0;
    scanf("%d", &numero);
    
    ehPar(numero);
    
    return 1;
}