#include <stdio.h>

void testa_retangulo(float a, float b, float c, float d, float e, float f, float g, float h){

    if(c > g && d > h && e > a && f > b){
        printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", a, b, c, d, e, f, g, h);
    } else if(g > c && h > d){
        printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", e, f, g, h, a, b, c, d);
    } else {
        printf("Nao posso afirmar!\n");
    }
}

int main(){
    float a, b, c, d;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    float l1, l2, l3, l4;
    int ref = 1;

    do{
        scanf("%f %f %f %f", &l1, &l2, &l3, &l4);

        //condicional para parar de receber valores quando forem digitados quatro 'zeros'
        if(l1, l2, l3, l4 == 0){
            ref = 0;
            break;
        }

        testa_retangulo(a, b, c, d, l1, l2, l3, l4);

    } while (ref != 0);
    
}