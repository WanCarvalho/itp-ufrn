/*
Para ajudar o estagiário Juca a compreender o conceito de funções, você sugeriu a seguinte atividade:
determinar se dois números são amigos utilizando funções.

Definição: dois números naturais diferentes são amigos se cada um for igual à soma dos divisores do outro
(sem incluir os próprios números nos divisores).

Assim, você forneceu o trecho de código abaixo e pediu para ele implementar as funções e depois criar um
programa que recebe dois intervalos naturais L1 = [A,B] e L2 = [C,D] e apresenta todos os valores em L1
que possuem ao menos um amigo em L2.

Exemplo de entrada	Exemplo de saída
200 300             O 220 possui um amigo!
200 300             O 284 possui um amigo!

1 10	            Os intervalos nao apresentam amigos!
1 100
*/

#include <stdio.h>

//retorna verdadeiro se numero é divisível por divisor e falso em caso contrário
int testa_divisor(int numero, int divisor){
    if (numero%divisor == 0){
        return 1; // 1 é igual a true e 0 igual a false
    } else {
        return 0;
    }
}

//retorna a soma dos divisores de value no intervalo [1, value)
int soma_divisores(int value){
    int somaDivisores = 0;

    for(int i = 1; i < value; i++){
        if(testa_divisor(value, i) == 1){
            somaDivisores += i;
        }
    }

    return somaDivisores;
}

//retorna verdadeiro se a é amigo de b e falso em caso contrário
int testa_amigos(int a, int b){
    if(soma_divisores(a) == b && soma_divisores(b) == a){
        return 1;
    } else {
        return 0;
    }
}

//recebe dois intervalos naturais L1 = [A,B] e L2 = [C,D]
//apresenta todos os valores em L1 que possuem ao menos um amigo em L2.
int main(){
    int L1[2];
    int L2[2];

    scanf("%d %d %d %d", &L1[0], &L1[1], &L2[0], &L2[1]);
    
    for(int i = L1[0]; i <= L1[1]; i++){
        int contadorDeAmigos;
        
        for(int j = L2[0]; j <= L2[1]; j++){
            if(testa_amigos(i, j) == 1 && i != j){
               printf("O %d possui um amigo!\n", i); 
               contadorDeAmigos++;
            }
        }

        if(i == L1[1] && contadorDeAmigos == 0){
            printf("Os intervalos nao apresentam amigos!");
        }
         
    }
}