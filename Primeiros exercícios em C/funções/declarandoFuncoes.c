/*
Escreva uma função que chama ehPar que verifica se um número é par. Essa função deve retornar o valor true
em caso afirmativo, e false caso contrário. O Programa deve chamar essa função.
*/

#include <stdio.h>

void ehPar(int num){
    
    if(num%2 == 0){
        printf("true");
    } else {
        printf("false");
    }
}
    
int main(){
    
    int numero = 0;
    scanf("%d", &numero);
    
    ehPar(numero);
    
    return 1;
}