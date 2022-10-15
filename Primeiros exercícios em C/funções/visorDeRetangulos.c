/*
Um dos principais algoritmos na área de computação gráfica é o algoritmo de recorte utilizado
para determinar quais partes de um objeto devem ser exibidos na tela. Você deve desenvolver
uma versão simplificada utilizada num programa de processamento de retângulos indicando se um
retângulo está dentro de outro. Neste programa, os retângulos são representados por dois pontos:
<esquerdo, inferior> e o <direito, superior>.

Um dos principais algoritmos na área de computação gráfica é o algoritmo de recorte utilizado para
determinar quais partes de um objeto devem ser exibidos na tela. Você deve desenvolver uma versão
simplificada utilizada num programa de processamento de retângulos indicando se um retângulo está dentro
de outro. Neste programa, os retângulos são representados por dois pontos: <esquerdo, inferior> e o
<direito, superior>.

Por exemplo, na figura abaixo, a tela (retângulo A) é especificada pelos pontos <5,5> e <10,10> e o
retângulo B pelos pontos <7,7> e <8,8>, neste caso, o retângulo B se encontra dentro do A.

Observe o formato de entrada e saída nos casos de teste para indicar quando um retângulo contém ou
está contido em relação ao retângulo da área visível.

Exemplo de entrada	Exemplo de saída
10 10 20 20         (<0.00,0.00>,<30.00,30.00>) contem (<10.00,10.00>,<20.00,20.00>).
0 0 30 30
0 0 0 0

0 0 1 1             0 0 0 0	Nao posso afirmar!
0 0 1 1

*/

#include <stdio.h>

void testa_retangulo(float a, float b, float c, float d, float e, float f, float g, float h)
{

    if (c > g && d > h && e > a && f > b)
    {
        printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", a, b, c, d, e, f, g, h);
    }
    else if (g > c && h > d)
    {
        printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", e, f, g, h, a, b, c, d);
    }
    else
    {
        printf("Nao posso afirmar!\n");
    }
}

int main()
{
    float a, b, c, d;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    float l1, l2, l3, l4;
    int ref = 1;

    do
    {
        scanf("%f %f %f %f", &l1, &l2, &l3, &l4);

        // condicional para parar de receber valores quando forem digitados quatro 'zeros'
        if (l1, l2, l3, l4 == 0)
        {
            ref = 0;
            break;
        }

        testa_retangulo(a, b, c, d, l1, l2, l3, l4);

    } while (ref != 0);
}