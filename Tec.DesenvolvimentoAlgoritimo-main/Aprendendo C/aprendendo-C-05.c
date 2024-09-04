#include <stdio.h>

int main(){
    
float metros;

printf ("Digite o comprimento em metros: ");
scanf ("%f", &metros);

printf ("\nEsse e o seu comprimento em centimetros: %2.f", metros*100);

printf ("\nEsse e o seu comprimento em decimetros: %2.f", metros*10);

printf ("\nEsse e o seu comprimento em milimetros: %2.f", metros*1000);

return 0;

}
