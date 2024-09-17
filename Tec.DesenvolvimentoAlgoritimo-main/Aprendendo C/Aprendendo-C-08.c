#include <stdio.h>

int main() {
  int a=0, b=1, c=2;
  printf("%d",a);
  c=a;
  printf("%d",b);
  b=c;
  printf("%d",c);
  return 0;
}

//Resultado = 010
