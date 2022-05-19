#include <stdio.h>
int main ()
{
  //Desenvolver um programa que calcule a soma dos números de 1 a N, sendo N um número inteiro fornecido pelo usuário.
  int i, N, soma = 0;

  printf("Digite o valor de N: ");
  scanf ("%d", &N);

  i=1;

  do
  {
    soma = soma + i;
    i++;
  } while (i<=N);

  printf ("%d", soma);
}
