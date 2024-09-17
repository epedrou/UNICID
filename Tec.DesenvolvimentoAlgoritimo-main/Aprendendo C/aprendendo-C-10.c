 #include <stdio.h>

 int main() {

  float n1,n2,n3,n4,media;

  printf("Escreva sua nota em Portugues: ");
  scanf("%f", &n1);

  printf ("Escreva sua nota em Matematica: ");
  scanf("%f", &n2);

  printf("Escreva sua nota em Geografia: ");
  scanf("%f", &n3);

  printf("Escreva sua nota em Historia: ");
  scanf("%f", &n4);

  media=(n1+n2+n3+n4)/4;

  printf("Sua nota final é: %.1f", media);

  return 0;

}
