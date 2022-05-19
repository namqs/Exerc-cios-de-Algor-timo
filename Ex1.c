#include <stdio.h>
int main ()
{ //Dado um número inteiro N, fazer um programa que exiba os números pares iguais ou inferiores a N.

  int N, i;

  printf ("Digite um numero inteiro: ");
  scanf("%d", &N);

  i=2;

  while (i<=N)
  {
    printf("%d ", i);
  i=i+2;
  }
return 0;
}
