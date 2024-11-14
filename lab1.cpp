#include <stdio.h>
#include <stdlib.h>


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


void heapify(int arr[], int n, int i) {
    int smallest = i;       
    int left = 2 * i + 1;  
    int right = 2 * i + 2;  

    if (left < n && arr[left] < arr[smallest]) {
        smallest = left;
    }

   
    if (right < n && arr[right] < arr[smallest]) {
        smallest = right;
    }

    if (smallest != i) {
        swap(&arr[i], &arr[smallest]);
        heapify(arr, n, smallest);
    }
}


void buildHeap(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
  
    int arr[] = {1, 5, 6, 8, 9, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);


    buildHeap(arr, n);


    printf("Min Heap: ");
    printArray(arr, n);

    return 0;
}
