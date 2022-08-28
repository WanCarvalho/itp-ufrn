/*O supermercado Inteiramente e Totalmente Pão-duro (ITP) estava com um grande problema na venda de seus produtos,
porque muitos haviam expirado o prazo de validade. Ao invés de resolver o problema,
a administração bolou um plano para "mascarar" os prazos de validade: em vez de informar a data em que o
produto vai expirar, eles colocam a quantidade de dias até o produto expirar. Dessa forma, apenas quem
estiver com a matemática afiada, vai conseguir saber se o produto está perto de estragar ou não.*/

/*Mas como você está com a matemática e a programação em dia, você resolveu fazer um programa para ajudar
os clientes do supermercado! O seu programa vai ler um valor numérico inteiro, que representa uma quantidade
de dias, e vai dar como resposta o quanto essa quantidade valeria em anos, meses e dias. Para facilitar suas
contas, considere que todo ano tem 365 dias, e todo mês tem 30 dias.*/

/*DICA: observe bem os exemplos de entrada e saída, e veja se você consegue resolver no papel antes de ir
pro código :)*/

//----Exemplos----
//entrada: 15

//saída:
/*0 ano(s)
0 mes(es)
15 dia(s)*/

//entrada: 30

//saída:
/*0 ano(s)
1 mes(es)
0 dia(s)*/

#include <stdio.h>

int main(){
    int quantidade_dias = 0;

    scanf("%i", &quantidade_dias);

    if(quantidade_dias/30 >= 12){
        printf("%i ano(s)\n", quantidade_dias/365);
        int ref_calculo_ano = quantidade_dias/365; //variável utilizada como referencia para o calculo da exclusão dos dias referentes aos anos
        quantidade_dias = quantidade_dias-(ref_calculo_ano*365); //essa linha de código exclui os dias referente a quantidade de anos
    } else {
        printf("0 ano(s)\n");
    }

    if (quantidade_dias%30 != 0 || quantidade_dias%30 == 0){
        printf("%i mes(es)\n", quantidade_dias/30);
        int ref_calculo_mes = quantidade_dias/30; //variável utilizada como referencia para o calculo da exclusão dos dias referentes aos meses
        quantidade_dias = quantidade_dias-(ref_calculo_mes*30); //essa linha de código exclui os dias referente a quantidade de meses
    } else {
        printf("0 mes(es)\n");
    }

    if(quantidade_dias%30 != 0){
        printf("%i dia(s)", quantidade_dias);
    } else {
        printf("0 dia(s)");
    }

    return 0;
}