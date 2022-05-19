#include <stdio.h>
int main ()
{
  int N, i;

  printf("Digite um numero: ");
  scanf("%d", &N);

  i=1;

  while (i<=N)
  {
    if (N%i==0)
    {
      printf ("%d ", i);
    }
    i++;
  }
}
