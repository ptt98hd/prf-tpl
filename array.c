#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// INPUT & OUTPUT ARRAY
void arrIn(int n, int arr[]) { // Input
  int i;
  for (i = 0; i < n; i++) scanf("%d", &arr[i]);
}
void arrOut(int n, int arr[]) { // Output
  int i;
  for (i = 0; i < n; i++) printf("%d ", arr[i]);
}

// DELETA AN ELEMENT
void del (int n, int arr[], int i) {
	int tmp;
	for ( ; i < n; i++)
		arr[i] = arr[i+1];
}
// SELECTION SORT 
void sltAcd(int n, int arr[]) { // Accending
  int i, j;
	int tmp;
  for(i = 0; i < n - 1; i++) 
    for (j = i + 1; j < n; j++)
      if (arr[i] > arr[j]) {
        tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
      }
}
void sltDcd(int n, int arr[]) { // Decending
	int i, j;
	int tmp;
	for(i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (arr[i] < arr[j]) {
				tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
			}
}

// BUBBLE SORT
void bbAcd (int n, int arr[]) { // Accending
	int i, j, tmp;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++) 
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = tmp;
			}
}
void bbDcd (int n, int arr[]) { //Decending
	int i, j, tmp;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++) 
			if (arr[j] < arr[j + 1]) {
				tmp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = tmp;
			}
}

int main ()
{
  // FIXED PART: do not edit 
  system("cls");
  // INPUT: enter your code HERE
  
  int n;
  do {
    scanf("%d", &n);
  } while (n < 5 || n > 10);
  int arr[n];
  arrIn(n, arr);
  
  // FIXED PART: do not edit
  printf("\nOUTPUT:\n");
  // OUTPUT: enter your code HERE
  
  

  // FIXED PART: do not edit
  printf("\n");
  system("pause");
  return 0;
}
