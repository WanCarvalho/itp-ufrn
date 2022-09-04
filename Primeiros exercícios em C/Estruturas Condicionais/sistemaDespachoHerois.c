#include <stdio.h>

int main(){
    int quantHeroisEnviados;
    int classeHeroi;
    int nivelMonstro;

    scanf("%i %i %i", &quantHeroisEnviados, &classeHeroi, &nivelMonstro);

    if(quantHeroisEnviados == 0){
        printf("Melhor chamar Saitama!"); 
    } else if (nivelMonstro == 1 && classeHeroi >= 2 || nivelMonstro == 1 && classeHeroi == 1 && quantHeroisEnviados >= 3){
        printf("Heróis vencerão!");
    } else if(nivelMonstro == 2 && classeHeroi >= 3 || nivelMonstro == 2 && classeHeroi == 2 && quantHeroisEnviados >= 3){
        printf("Heróis vencerão!");
    } else if(nivelMonstro == 3 && classeHeroi >= 4 || nivelMonstro == 3 && classeHeroi == 3 && quantHeroisEnviados >= 3){
        printf("Heróis vencerão!");
    } else if(nivelMonstro == 4 && classeHeroi >= 5 || nivelMonstro == 4 && classeHeroi == 4 && quantHeroisEnviados >= 3){
        printf("Heróis vencerão!");
    } else if(nivelMonstro == 5 && classeHeroi == 5){
        printf("Heróis vencerão!");
    } else {
        printf("Melhor chamar Saitama!"); 
    }
    
}