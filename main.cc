#include <stdio.h>

#include "insert_sort.h"

void print(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d,", a[i]);
    }
    printf("\n");
}

int main() {
    constexpr int size = 10;
    int a[size] = {8,2,9,4,1,3,7,0,5,6};
    print(a, size);
    InsertSort(a, size);
    print(a, size);
    return 0;
}
