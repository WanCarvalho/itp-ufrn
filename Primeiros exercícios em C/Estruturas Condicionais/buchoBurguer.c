#include <stdio.h>

int main(){
    int combo;
    int dinheiro;

    scanf("%d %d", &combo, &dinheiro);

    if(combo == 1){
        combo = 12;
        if(combo/dinheiro == 1 && combo%dinheiro == 0){
            printf("Deu certim!");
        } else if(combo < dinheiro){
            printf("Troco = %d reais", dinheiro - combo);
        } else if(combo > dinheiro){
            printf("Saldo insuficiente! Falta %d reais", combo - dinheiro);
        }
       
    } else if(combo == 2){
        combo = 23;
        if(combo/dinheiro == 1 && combo%dinheiro == 0){
            printf("Deu certim!");
        } else if(combo < dinheiro){
            printf("Troco = %d reais", dinheiro - combo);
        } else if(combo > dinheiro){
            printf("Saldo insuficiente! Falta %d reais", combo - dinheiro);
        }
        
    } else if(combo == 3){
        combo = 31;
        if(combo/dinheiro == 1 && combo%dinheiro == 0){
            printf("Deu certim!");
        } else if(combo < dinheiro){
            printf("Troco = %d reais", dinheiro - combo);
        } else if(combo > dinheiro){
            printf("Saldo insuficiente! Falta %d reais", combo - dinheiro);
        }

    } else if(combo == 4){
        combo = 28;
        if(combo/dinheiro == 1 && combo%dinheiro == 0){
            printf("Deu certim!");
        } else if(combo < dinheiro){
            printf("Troco = %d reais", dinheiro - combo);
        } else if(combo > dinheiro){
            printf("Saldo insuficiente! Falta %d reais", combo - dinheiro);
        }
          
    } else if(combo == 5){
        combo = 15;
        if(combo/dinheiro == 1 && combo%dinheiro == 0){
            printf("Deu certim!");
        } else if(combo < dinheiro){
            printf("Troco = %d reais", dinheiro - combo);
        } else if(combo > dinheiro){
            printf("Saldo insuficiente! Falta %d reais", combo - dinheiro);
        }
        
          
    }

}