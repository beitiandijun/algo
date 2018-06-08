#include "bubble_sort.h"


// BubbleSort(A, n)
// 1. for j <- 0 to n-1
// 2.  for i <- j+1 to n -1
// 3.    if A[i] > A[j]
// 4.      tmp <- A[i]
// 5.      A[i] <- A[j]
// 6.      A[j] <- tmp

void BubbleSort(int a[], int n) {
  for (int j = 0; j < n; ++j) {
    for (int i = j + 1; i < n; ++i) {
      if (a[i] < a[j]) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }
}
