#include <stdio.h>
int main ()
{ //Desenvolver um programa que calcule a soma dos números de 1 a N, sendo N um número inteiro fornecido pelo usuário.

  int i, N, soma=0;

  printf("Digite um valor de N: ");
  scanf ("%d", &N);

  for (i=1; i<=N; i++)
  {
    soma = soma + i;
  }
   printf("%d", soma);
}
