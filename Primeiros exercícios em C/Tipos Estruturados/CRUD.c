#include <stdio.h>

struct Pessoa{
    char nome[50];
    int idade;
    char sexo;
};

void main(){
    
    struct Pessoa cadastros[200];
    int contador = 0;
    
    char funcao;
    
    do {
        
        scanf("%c", &funcao);
        
        if(funcao == 'i'){
            scanf(" %[^\n] %d %c", &cadastros[contador].nome, &cadastros[contador].idade, &cadastros[contador].sexo);
            contador++;
        } else if(funcao == 'd'){
            
        }
        
    } while (funcao != 'p');
    
    for(int i = 0; i < contador; i++){
        printf("%s,%d,%c\n", cadastros[i].nome, cadastros[i].idade, cadastros[i].sexo);
    }
    
}