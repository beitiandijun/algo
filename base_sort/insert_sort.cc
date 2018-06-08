
// InsertSort(A, n)
// 1. for i <- 1 to n
// 2.   key <- A[i]
// 3.   j <- i-1
// 4.   while j >= 0 and A[j] > key
// 5.     do A[j+1] <- A[j]
// 6.        j <- j-1
// 7.   A[j + 1] <- key

void InsertSort(int a[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = key;
    }
}

