#include <stdio.h>

int main(void) {

  int i = 13, sum = 0, K = 0;

  while (K < i) {
    K = K + 1;
    sum = sum + K;
  }

  printf("Soma: %d", sum);
  //O resultado será 91
}