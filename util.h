#include <stdio.h>

static inline void print(int a[], int p, int r) {
  for (int i = p; i <= r; ++i) {
    printf("%d,", a[i]);
  }
  printf("\n");
}

