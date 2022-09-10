/*Você deve desenvolver um programa para determinar quantas séries a prova de 100 metros rasos deve ter.
Porém, somente os atletas mais rápidos devem ser aptos a competir, isto é, somente os atletas que correram os 
100 metros em um tempo inferior ou igual ao estabelecido para inscrição na competição. Desse modo,
a primeira entrada do programa será o tempo máximo que o atleta pode ter alcançado para estar apto a competir.

Em seguida, o programa irá receber uma quantidade indeterminada de inscrições até que o valor -1.0
seja apresentado. Cada inscrição consiste em um único valor correspondente ao
tempo em segundos que o atleta correu nos 100 metros registrado até a terceira casa decimal.

O programa deve apresentar como saída a quantidade total de atletas aptos a competir e logo em seguida a
quantidade de séries necessárias para realização da prova de 100 metros.

Observe o formato da entrada e saída padrão para ver como esses dados serão inseridos no programa.

Entrada:
12.00
11.00
10.50
11.20
-1

Saída
3 1


Entrada:
9.00
12.00
10.70
11.12
10.87
11.54
12.00
10.79
10.90
10.67
10.85
10.65
10.97
-1

Saída
0 0
*/

#include <stdio.h>

int main(){
    float tempoMaximo = 0;
    float tempoAtleta = 0;

    int atletasAptos = 0;

    scanf("%f", &tempoMaximo);

    while (tempoAtleta != -1){
        scanf("%f", &tempoAtleta);

        if (tempoAtleta <= tempoMaximo && tempoAtleta != -1){
            atletasAptos += 1;
        }
    }

    int quantidadeSeries = (atletasAptos/8)+1;

    if(atletasAptos == 0){
        quantidadeSeries = 0;
    } else if(atletasAptos%8 == 0){
        quantidadeSeries = atletasAptos/8;
    }

    printf("%i %i", atletasAptos, quantidadeSeries);

    return 1;
}
