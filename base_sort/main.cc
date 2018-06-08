#include <stdio.h>

#include "util.h"
#include "insert_sort.h"
#include "merge_sort.h"
#include "bubble_sort.h"

void TestInsertSort() {
  printf("==>InsertSort\n");
  constexpr int size = 10;
  int a[size] = {8,2,9,4,1,3,7,0,5,6};
  print(a, 0, size-1);
  InsertSort(a, size);
  print(a, 0, size-1);
}

void TestMergeSort() {
  printf("==>MergeSort\n");
  constexpr int size = 10;
  int a[size] = {8,2,9,4,1,3,7,0,5,6};
  print(a, 0, size-1);
  MergeSort(a, 0, 9);
  print(a, 0, size-1);
}

void TestBubbleSort() {
  printf("==>BubbleSort\n");
  constexpr int size = 10;
  int a[size] = {8,2,9,4,1,3,7,0,5,6};
  print(a, 0, size-1);
  BubbleSort(a, size);
  print(a, 0, size-1);
}

int main() {
  TestMergeSort();
  TestInsertSort();
  TestBubbleSort();
  return 0;
}
