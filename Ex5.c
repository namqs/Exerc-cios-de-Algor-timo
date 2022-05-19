#include <stdio.h>
int main ()
{ //Criar um programa que exiba os N primeiros termos da seguinte série: 1,2,4,8,16,32,...

  int N, i, soma;

  printf("Digite quantos termos voce quer ver: ");
  scanf ("%d", &N);

  i=1;

  while (i<=N)
  {
    printf("%d ", i);
    soma= soma*2;
    i++;
  }
}
