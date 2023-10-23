#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

// PRIME NUMBER
int isPrime (int n) {
  int i;
  int check = 1;
  if (n <= 1) check = 0;
  if (n > 3) for (i = 2; i < n; i++) if (n % i == 0) {
      check = 0;
      break;
  }
  return check;
}
// PERFECT NUMBER
int isPerfect (int n) {
  int i, j = n, sum = 0;
  int check;
  for(i = 1; i < j; i++){
    if (j % i == 0) {
      sum += i;
    }
  }
  check = sum == n ? 1 : 0;  
  return check;
}

// FIBONACY
void fibo (int n) {
  
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n;
  scanf("%d", &n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  


  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
