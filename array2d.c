#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// INTPUT & OUTPUT 2D ARRAY
//=============================================================================
void arr2dIn(int n, int m, int arr[][50]) { // Input
  int i, j;
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      scanf("%d", &arr[i][j]);
}
void arr2dOut(int n, int m, int arr[][50]) { // Output
  int i, j;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      printf("%d ", arr[i][j]);
    printf("\n");
  }
}

// SORT ROW
//=============================================================================
void sortRowAcd(int n, int m, int arr[][50]) { // Accending
  int i, j, k;
  for (i = 0; i < n; i++)
    for (j = 0; j < m - 1; j++)
      for (k = j + 1; k < m; k++)
        if (arr[i][j] > arr[i][k]) {
          int tmp = arr[i][j];
          arr[i][j] = arr[i][k];
          arr[i][k] = tmp;
        }
}
void sortRowDcd(int n, int m, int arr[][50]) { // Decending
  int i, j, k;
  for (i = 0; i < n; i++)
    for (j = 0; j < m - 1; j++)
      for (k = j + 1; k < m; k++)
        if (arr[i][j] < arr[i][k]) {
          int tmp = arr[i][j];
          arr[i][j] = arr[i][k];
          arr[i][k] = tmp;
        }
}

// SORT COLLUM
//=============================================================================
void sortColAcd(int n, int m, int arr[][50]) { // Accending
  int i, j, k;
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n - 1; j++)
      for (int k = j + 1; k < n; k++)
        if (arr[j][i] > arr[k][i]) {
          int tmp = arr[j][i];
          arr[j][i] = arr[k][i];
          arr[k][i] = tmp;
        }
}
void sortColDcd(int n, int m, int arr[][50]) { // Decending
  int i, j, k;
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n - 1; j++)
      for (int k = j + 1; k < n; k++)
        if (arr[j][i] < arr[k][i]) {
          int tmp = arr[j][i];
          arr[j][i] = arr[k][i];
          arr[k][i] = tmp;
        }
}

int main() {
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  int n, m;
  scanf("%d %d", &n, &m);
  int arr[50][50];
  arr2dIn(n, m, arr);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

  // sortRowAcd(n, m, arr);
  // sortRowDcd(n, m, arr);
  sortColAcd(n, m, arr);
  // sortColDcd(n, m, arr);
  arr2dOut(n, m, arr);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
