#include <stdio.h>

int main(void) {

  int ini = 0, fib1 = 0, fib2 = 1, n = 0, temp = 0;

  printf("Insira o valor: ");
  scanf("%d", &n);

  while (fib2 < n) {
    temp = fib2;
    fib2 = fib1 + fib2;
    fib1 = temp;
  }

  if (fib2 == n)
    printf("%d pertence", n);
  else
    printf("%d não pertence", n);
}