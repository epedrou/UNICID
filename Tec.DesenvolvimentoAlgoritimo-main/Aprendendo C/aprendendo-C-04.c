#include <stdio.h>

void main(){

 float salario =0;
 float minimo =1412;

 printf("Informe o seu salario: R$");
 scanf("%f", &salario);

 salario = salario/minimo;

 printf("\nO salario minimo é:R$ %.2f" , minimo);
 printf("\nO seu salario em salarios minimos é %.f\n:" , salario);

 return 0;
}
