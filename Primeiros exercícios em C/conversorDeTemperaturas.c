#include <stdio.h>

int main()
{

    float temperatura;
    char escala;

    //printf("Informe a temperatura: ");
    scanf(" %f", &temperatura);
    //printf("Informe a escala: ");
    scanf(" %c", &escala); /* O scanf pode apresentar problemas na leitura de caracteres fornecido pelo usuário em sequência.
    Como scanf lê os caracteres no buffer de entrada (teclado), quando digitamos um caractere e teclamos Enter, o caractere '\n'
    vai para o buffer e é lido pelo próximo scanf.

    Solução: Na função scanf insira um espaço entre a aspa e o símbolo %c.*/

    switch (escala)
    {
    case 'C':
        printf("Celsius: %.2f\n", temperatura);
        printf("Farenheit: %.2f\n", (temperatura * 1.8 + 32));
        printf("Kelvin: %.2f", (temperatura + 273.15));
        break;
    case 'K':
        temperatura = temperatura - 273.15;

        printf("Celsius: %.2f\n", temperatura);
        printf("Farenheit: %.2f\n", (temperatura * 1.8 + 32));
        printf("Kelvin: %.2f", (temperatura + 273.15));
        break;
    case 'F':
        temperatura = (temperatura - 32) / 1.8;

        printf("Celsius: %.2f\n", temperatura);
        printf("Farenheit: %.2f\n", (temperatura * 1.8 + 32));
        printf("Kelvin: %.2f", (temperatura + 273.15));
        break;
    default:
        return 0;
    }

    return 0;
}