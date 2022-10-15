/*
Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios
(excluindo ele mesmo) é igual ao próprio número. Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6. 

Sua tarefa é escrever um programa que utiliza uma função com tipo de retorno bool, que recebe um inteiro x e retorna true
se x for perfeito ou false caso contrário. Seu programa deve utilizar a função para determinar se um número é perfeito ou não. 

A primeira linha da entrada contém um inteiro N, indicando o número de casos a serem verificados. Cada uma das N linhas seguintes
contém um valor inteiro X, que pode ser ou não, um número perfeito. Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito”
ou “X nao eh perfeito”, de acordo com a especificação fornecida.

Exemplo de entrada	Exemplo de saída
3                   6 eh perfeito
6                   5 nao eh perfeito
5                   28 eh perfeito
28                   

4                   5 nao eh perfeito        
5                   10 nao eh perfeito
10                  4 nao eh perfeito
4                   496 eh perfeito
496
*/

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