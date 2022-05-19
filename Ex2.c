#include <stdio.h>
int main()
{ //Desenvolver um programa que calcule a soma dos números de 1 a N, sendo N um número inteiro fornecido pelo usuário.
  int i, N, soma=0;

  printf("Digite um numero:");
  scanf ("%d", &N);


  i=1;

  while (i<=N)
  {
   soma = soma + i;
     printf("%d", soma);
    i++;
  }

}
