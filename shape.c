#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hinhA(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= i; j++)
      printf("# ");
    printf("\n");
  }
}

void hinhB(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= h - i + 1; j++)
      printf("# ");
    printf("\n");
  }
}

void hinhC(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= i - 1; j++)
      printf("  ");
    for (j = 1; j <= h - i + 1; j++)
      printf("# ");
    printf("\n");
  }
}

void hinhD(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= h - i; j++)
      printf("  ");
    for (j = 1; j <= i; j++)
      printf("# ");
    printf("\n");
  }
}

void hinhE(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    if (i == 1 || i == h)
      for (j = 1; j <= h; j++)
        printf("# ");
    else
      for (j = 1; j <= h; j++) {
        if (j == 1 || j == h)
          printf("# ");
        else
          printf("  ");
      }
    printf("\n");
  }
}

void hinhF(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    if (i == 1 || i == h)
      for (j = 1; j <= h; j++)
        printf("# ");
    else
      for (j = 1; j <= h; j++) {
        if (j == i)
          printf("# ");
        else
          printf("  ");
      }
    printf("\n");
  }
}

void hinhG(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    if (i == 1 || i == h)
      for (j = 1; j <= h; j++)
        printf("# ");
    else
      for (j = 1; j <= h; j++) {
        if (j == h - i + 1)
          printf("# ");
        else
          printf("  ");
      }
    printf("\n");
  }
}

void hinhH(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    if (i == 1 || i == h)
      for (j = 1; j <= h; j++)
        printf("# ");
    else
      for (j = 1; j <= h; j++) {
        if (j == h - i + 1 || j == i)
          printf("# ");
        else
          printf("  ");
      }
    printf("\n");
  }
}

void hinhI(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    if (i == 1 || i == h)
      for (j = 1; j <= h; j++)
        printf("# ");
    else
      for (j = 1; j <= h; j++) {
        if (j == h - i + 1 || j == i || j == 1 || j == h)
          printf("# ");
        else
          printf("  ");
      }
    printf("\n");
  }
}

void hinhJ(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= i - 1; j++)
      printf("  ");
    for (j = 1; j <= (h - i) * 2 + 1; j++)
      printf("# ");
    printf("\n");
  }
}

void hinhK(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= h - i; j++)
      printf("  ");
    for (j = 1; j <= i * 2 - 1; j++)
      printf("# ");
    printf("\n");
  }
}

void hinhL(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= h - i; j++)
      printf("  ");
    for (j = 1; j <= i * 2 - 1; j++)
      printf("# ");
    printf("\n");
  }
  for (i = 2; i <= h; i++) {
    for (j = 1; j <= i - 1; j++)
      printf("  ");
    for (j = 1; j <= (h - i) * 2 + 1; j++)
      printf("# ");
    printf("\n");
  }
}

void hinhM(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= i; j++)
      printf("%d ", j);
    printf("\n");
  }
}

void hinhN(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= i - 1; j++)
      printf("  ");
    for (j = 1; j <= h - i + 1; j++)
      printf("%d ", j);
    printf("\n");
  }
}

void hinhO(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= h - i; j++)
      printf("  ");
    for (j = i; j >= 1; j--)
      printf("%d ", j);
    printf("\n");
  }
}

void hinhP(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = h - i + 1; j >= 1; j--)
      printf("%d ", j);
    printf("\n");
  }
}

void hinhQ(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= h - i; j++)
      printf("  ");
    for (j = 1; j <= i; j++)
      printf("%d ", j);
    for (j = i - 1; j >= 1; j--)
      printf("%d ", j);
    printf("\n");
  }
}

void hinhR(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= i - 1; j++)
      printf("  ");
    for (j = 1; j <= h - i + 1; j++)
      printf("%d ", j);
    for (j = h - i; j >= 1; j--)
      printf("%d ", j);
    printf("\n");
  }
}

void hinhS(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= i; j++)
      printf("%d ", j);
    for (j = 1; j <= (h - i) * 2 - 1; j++)
      printf("  ");
    for (j = i; j >= 1; j--)
      if (j < h)
        printf("%d ", j);
    printf("\n");
  }
}

void hinhT(int h) {
  int i, j;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= h - i + 1; j++)
      printf("%d ", j);
    for (j = 2 * i - 3; j >= 1; j--)
      printf("  ");
    if (i == 1)
      for (j = h - i; j >= 1; j--)
        printf("%d ", j);
    else
      for (j = h - i + 1; j >= 1; j--)
        printf("%d ", j);
    printf("\n");
  }
}

void hinhU(int h) {
  int i, j, k;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= h - i; j++)
      printf("  ");
    k = i % 10;
    for (j = 1; j <= i; j++) {
      if (k == 10)
        k = 0;
      printf("%d ", k);
      k++;
    }
    k = (2 * i - 2) % 10;
    for (j = 1; j <= i - 1; j++) {
      if (k < 0)
        k = 9;
      printf("%d ", k);
      k--;
    }
    printf("\n");
  }
}

// POWER OF 2 TRIANGLE
int spc(int n) {
  int count = 0, p = pow(2, n);
  while (p > 0) {
    count++;
    p /= 10;
  }
  return count;
}
void hinhV(int h) {
  int i, j, k;
  for (i = 1; i <= h; i++) {
    for (j = 1; j <= h - i; j++)
      for (k = 0; k <= spc(h); k++)
        printf(" ");
    for (j = 0; j < i; j++) {
      printf("%d ", (int)pow(2, j));
      if (j != i - 1)
        for (k = 1; k <= spc(h) - spc(j + 1); k++)
          printf(" ");
    }
    for (j = i - 2; j >= 0; j--) {
      for (k = 1; k <= spc(h) - spc(j); k++)
        printf(" ");
      printf("%d ", (int)pow(2, j));
    }
    printf("\n");
  }
}

// PASCAL TRIANGLE
void hinhW(int h) {
  int i, j, n = 1;
  for (i = 0; i < h; i++) {
    for (j = 0; j <= i; j++) {
      if (i == 0 || j == 0)
        n = 1;
      else
        n = n * (i - j + 1) / j;
      printf("%d ", n);
    }
    printf("\n");
  }
}

int main() {
  system("cls");
  // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int h;
  scanf("%d", &h);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  hinhA(h);
  printf("\n");
  hinhB(h);
  printf("\n");
  hinhC(h);
  printf("\n");
  hinhD(h);
  printf("\n");
  hinhE(h);
  printf("\n");
  hinhF(h);
  printf("\n");
  hinhG(h);
  printf("\n");
  hinhH(h);
  printf("\n");
  hinhI(h);
  printf("\n");
  hinhJ(h);
  printf("\n");
  hinhK(h);
  printf("\n");
  hinhL(h);
  printf("\n");
  hinhM(h);
  printf("\n");
  hinhN(h);
  printf("\n");
  hinhO(h);
  printf("\n");
  hinhP(h);
  printf("\n");
  hinhQ(h);
  printf("\n");
  hinhR(h);
  printf("\n");
  hinhS(h);
  printf("\n");
  hinhT(h);
  printf("\n");
  hinhU(h);
  printf("\n");
  hinhV(h);
  printf("\n");
  hinhW(h);
  printf("\n");

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return (0);
}
