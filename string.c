#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main () {
  system("cls");
  
  char str[50];
  gets(str);
  char c;
  scanf("%c", &c);

  printf("\noutput:\n");
  
  int count = 0;
  for (int i = 0; i < 50; i++) {
    if (str[i] == c) {
      count++;
    }
  }
  
  printf("%d", count);

  printf("\n");
  system("pause");
  return 0;
}
