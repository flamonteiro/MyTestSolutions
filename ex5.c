#include <stdio.h>
#include <string.h>

int main(void) {
  int i = 0, len = 0;
  char str[1000], newstr[1000];

  printf("Insira a string:");
  scanf("%s", str);

  len = strlen(str);

  for (i = 0; i < len; i++) {
    newstr[i] = str[len - i - 1];
  }
  newstr[len] = '\0';

  printf("%s", newstr);

  return 0;
}