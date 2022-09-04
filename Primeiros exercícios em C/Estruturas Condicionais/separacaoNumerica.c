#include <stdio.h>

int main(){
    int inteiro;
    scanf("%i", &inteiro);

    //corrigir bug: se tiver 0 no meio do inteiro o programa abaixo não imprime
    //exemplo: entra 12309 -> sai 1239

    if (inteiro / 100000 != 0){
        printf("%i\n", inteiro / 100000);
    }
    inteiro = inteiro - ((inteiro / 100000) * 100000);

    if (inteiro / 10000 != 0){
        printf("%i\n", inteiro / 10000);
        
    }
    inteiro = inteiro - ((inteiro / 10000) * 10000);

    if(inteiro / 1000 != 0){
        printf("%i\n", inteiro / 1000);
    }   
    inteiro = inteiro - ((inteiro / 1000) * 1000);

    if (inteiro / 100 != 0){
        printf("%i\n", inteiro / 100);  
    }
    inteiro = inteiro - ((inteiro / 100) * 100);

    if (inteiro / 10 != 0){
        printf("%i\n", inteiro / 10);
    }
    inteiro = inteiro - ((inteiro / 10) * 10);

    printf("%i\n", inteiro);

    return 0;
}