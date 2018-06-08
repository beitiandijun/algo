#include "heap_sort.h"
#include "util.h"

// HeapAdjust(A, i, n)
// 1. lh <- 2*i+1
// 2. rh <- 2*i+2
// 3. max <- i
// 4. if lh < n and A[max] < A[lh]
// 5.  max <- lh
// 6. if rh < n and A[max] < A[rh]
// 7.  max <- rh
// 8. if max != i
// 9.  tmp <- A[max]
// 10. A[max] <- A[i]
// 11. A[i] <- tmp
// 12.HeapAdjust(A, max, n)

void HeapAdjust(int a[], int i, int n) {
  int lh = 2 * i + 1;
  int rh = 2 * i + 2;
  int max = i;

  if (lh < n && a[max] < a[lh]) {
    max = lh;
  }
  if (rh < n && a[max] < a[rh]) {
    max = rh;
  }

  if (max != i) {
    int tmp = a[max];
    a[max] = a[i];
    a[i] = tmp;
    HeapAdjust(a, max, n);
  }
}

// HeapBuild(A, n)
// 1. for i <- n/2 to 0
// 2.   HeapAdjust(a, 0, i)

void HeapBuild(int a[], int n) {
  for (int i = n/2 - 1; i >= 0; --i) {
    HeapAdjust(a, i, n);
  }
}
// HeapSort(A, n)
// 1. HeapBuild(A, n)
// 2. for i <- n-1 to 0
// 3.  tmp <- A[i]
// 4.  A[i]] <- A[0]
// 5.  A[0] <- tmp
// 6.  HeapAdjust(A, 0, i)

void HeapSort(int a[], int n) {
  HeapBuild(a, n);
  print(a, 0, n-1);
  for (int i = n-1; i > 0; --i) {
    int tmp = a[i];
    a[i] = a[0];
    a[0] = tmp;
    HeapAdjust(a, 0, i);
  }
}
