#include <stdio.h>

//Int = numero inteiro
int main(){
    //Criando todas variavel, Float = variaveis com ponto flutuante, decimal
    float altura,
    alturaTotal;

    int QtdAndar;

    //O que aparece para o usúario
    printf("Informe a altura: ");
    //lendo o código e armazenando(&) o valor da variavel
    //%f = numero real = todos 
    scanf("%f", &altura);

    printf("Informe a quantidade de andares: ");
    //%d = numero inteiro = {..., -3, -2, -1, 0, 1, 2, 3,...}
    scanf ("%d", &QtdAndar);

    //Usando a multiplicação para chegar no resultado
    alturaTotal = QtdAndar * altura;

    //Trazendo o resultado para o usúario
    //%.2f = 
    //2 = números atrás da virgula // f = numeros reais
    printf("A altura total: %.2f m", alturaTotal);
}