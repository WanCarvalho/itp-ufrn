#include <stdio.h>
#include <string.h>

void main(){
    char texto[50];
    char padrao[50];
    
    scanf(" %50[^\n]", texto);
    scanf(" %50[^\n]", padrao);
    
    //printf("%s\n%s", texto, padrao);
    int indicePadrao = 0;
    int charIgual = 0;
    
    for(int i = 0; i < strlen(texto); i++){
        
        if(padrao[indicePadrao] == texto[i]){
            
            printf("%c ", texto[i]);
            indicePadrao++;
            charIgual++;
                
            if(indicePadrao == strlen(padrao)){
                indicePadrao = 0;
            }
                
            if(charIgual == strlen(padrao)){
                printf("sim\n");
                printf("Achei o padrão no índice %d", (i - strlen(padrao))+1);
                break;
            }
        } else {
            printf("%c não", texto[i]);
            charIgual = 0;
            indicePadrao = 0;
            printf("\n");
        }
    }
}