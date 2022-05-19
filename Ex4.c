#include <stdio.h>
int main ()
{
  //Implementar um programa que exiba os N primeiros termos de uma PA (Progressão Aritmética) com primeiro termo a1 e razão r.

  int N, r, a1, i;

  printf("Digite o a1 da sua pa: ");
  scanf ("%d", &a1);
  printf("Digite o r da sua função");
  scanf ("%d", &r);
  printf("Digite o nro limite da sua funcao");
  scanf ("%d", &N);

  i=a1;

  while (i<=N)
  {
    printf("%d ", i);

    i = i+r;
  }
}
