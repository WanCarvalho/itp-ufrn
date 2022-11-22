#include <stdio.h>

typedef struct {
    char modelo[40];
    int memoria;
    float processador;
    float camera;
    float bateria;
} Smartphone;

int cadastraSmartphone(int qnt_cadastrada, Smartphone phones[]){

    scanf(" %[^\n]", phones[qnt_cadastrada].modelo);
    scanf(" %d %f %f %f", &phones[qnt_cadastrada].memoria, &phones[qnt_cadastrada].processador, &phones[qnt_cadastrada].camera, &phones[qnt_cadastrada].bateria);

    return 0;
}

int pesquisaSmartphones(int qnt_cadastrada, Smartphone phones[], Smartphone reqMin){
    
    int dentro_dos_requisitos = 0;

    for(int j = 0; j < qnt_cadastrada; j++){
        if(phones[j].memoria >= reqMin.memoria && phones[j].processador >= reqMin.processador && phones[j].camera >= reqMin.camera && phones[j].bateria >= reqMin.bateria){
            printf("Modelo: %s\nMemoria: %dGB\nProcessador: %.2fGhz\nCamera: %.2fMPixels\nBateria: %.2fmA\n", phones[j].modelo, phones[j].memoria, phones[j].processador, phones[j].camera, phones[j].bateria);
            printf("\n");
            dentro_dos_requisitos++;
        }
    }

    return dentro_dos_requisitos;
    
}

void main(){

    char cad = 's';
    Smartphone phones[50];
    int indice = 0; // variável de controle para qnt cadastrada de smartphones

    do {
        
        scanf(" %c", &cad);
        
        if(cad == 's'){
            cadastraSmartphone(indice, phones);
            indice++;
        }

    } while(cad == 's');
    
    Smartphone reqMin;
    
    scanf("%d %f %f %f", &reqMin.memoria, &reqMin.processador, &reqMin.camera, &reqMin.bateria);
    
    int dentro_dos_requisitos = pesquisaSmartphones(indice, phones, reqMin);
    
    printf("%d smartphones encontrados.", dentro_dos_requisitos);
}