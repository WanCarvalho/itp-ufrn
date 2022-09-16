#include <stdio.h>
#include <string.h>

int main(){
    int quantidadeLinhas = 0;
    int contador = 1;
    int referenciaLinha = 1;

    scanf("%i", &quantidadeLinhas);

    if(quantidadeLinhas < 0){
        printf("Você entrou com %i, tente de novo na próxima");
    } else if(quantidadeLinhas == 0){
        printf("Você entrou com %i, tente de novo na próxima");
    } else {

        for (int i = 1; i <= quantidadeLinhas; i++){
            for(int j = 1; j <= referenciaLinha; j++){
                if(contador < 10){
                    printf(" ");
                }
                if (contador%10 <= 0 && contador != contador%10 == 0){
                    printf("%i ", contador);
                    contador = contador + 1; 
                } else {
                    printf("%i ", contador);
                    contador = contador + 1; 
                }

            }

            referenciaLinha = referenciaLinha + 1;
            printf("\n");
        }
    }
    
    return 1;
}