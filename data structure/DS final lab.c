#include <stdio.h>

void merge_1568(int arr[], int p, int q, int r);
void mergeSort_1568(int arr[], int LI, int HI);

int main() {
  int arr[10], size;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &size);

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  mergeSort_1568(arr, 0, size - 1);

  printf("Sorted array in ascending order:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

void merge_1568(int arr[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;
  int L[n1], R[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[q + 1 + j];

  int i = 0, j = 0, k = p;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort_1568(int arr[], int LI, int HI) {
  if (LI < HI) {
    int mid = LI + (HI - LI) / 2;
    mergeSort_1568(arr, LI, mid);
    mergeSort_1568(arr, mid + 1, HI);
    merge_1568(arr, LI, mid, HI);
  }
}
