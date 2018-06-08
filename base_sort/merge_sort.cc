#include "merge_sort.h"
#include "util.h"

// Merge(A, p, q, r)
// 1. llh <- q -p + 1
// 2. lrh <- r - q
// 3. allocate empty array la[llh]
// 4. allocate empty array ra[lrh]
// 5. la[0..llh-1] <- a[p..q]
// 6. ra[0..lrh-1] <- a[q+1..r]
// 7. for m <- 0 to llh - 1
//        n <- 0 to lrh - 1
//        k <- p to r
// 8.   do
// 9.     if la[m] < ra[n]
// 10.      then a[k] <- la[m]
// 11.           m <- m+1
// 12.    else a[k] <- ra[n]
// 13.         n <- n+1
// 14.    k <- k+1
// 15. for i <- m to llh - 1
// 16.   do a[k] <- la[i]
// 17.      k <- k+1
// 18. for j <- n to lrh - 1
// 19.   do a[k] <- ra[j]
// 20.      k <- k+1
void Merge(int a[], int p, int q, int r) {
  int llh = q - p + 1;
  int lrh = r - q;
  int la[llh] = {0};
  int ra[lrh] = {0};

  for (int i = 0; i < llh; ++i) {
    la[i] = a[p + i];
  }

  for (int j = 0; j < lrh; ++j) {
    ra[j] = a[q + 1 + j];
  }

  int m = 0, n = 0, k = p;
  while (true) {
    if (la[m] < ra[n]) {
      a[k++] = la[m++];
    } else {
      a[k++] = ra[n++];
    }

    if (m == llh || n == lrh) {
      break;
    }
  }

  for (int i = m; i < llh; ++i, ++k) {
    a[k] = la[i];
  }

  for (int j = n; j < lrh; ++j, ++k) {
    a[k] = ra[j];
  }
}

// MergeSort(A, p, r)
// 1. if p == r
// 2.   return
// 3. q = (p + r) / 2
// 4. MergeSort(A, p, q)
// 5. MergeSort(A, q + 1, r)
// 6. Merge(A, p, q, r)

void MergeSort(int a[], int p, int r) {
  if (p == r) {
    return;
  }

  int q = (p + r)/2;
  MergeSort(a, p, q);
  MergeSort(a, q + 1, r);
  Merge(a, p, q, r);
  print(a, p, r);
}
