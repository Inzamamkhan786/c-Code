#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


void maxHeapify(int heap[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] > heap[largest]) {
        largest = left;
    }

   
    if (right < n && heap[right] > heap[largest]) {
        largest = right;
    }


    if (largest != i) {
        swap(&heap[i], &heap[largest]);
        maxHeapify(heap, n, largest);
    }
}


int delete_max(int heap[], int *n) {
    if (*n == 0) {
        printf("Heap is empty!\n");
        return INT_MIN;
    }

   
    int maxIndex;
    if (*n == 1) {
        maxIndex = 0;
    } else if (*n == 2 || heap[1] > heap[2]) {
        maxIndex = 1;  
    } else {
        maxIndex = 2;  
    }

    int maxValue = heap[maxIndex];


    heap[maxIndex] = heap[*n - 1];
    (*n)--;  

    
    maxHeapify(heap, *n, maxIndex);

    return maxValue;
}


void printHeap(int heap[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    int heap[] = {1, 9, 7, 8, 5, 6};
    int n = sizeof(heap) / sizeof(heap[0]);

    printf("Initial Heap: ");
    printHeap(heap, n);

   
    int maxElement = delete_max(heap, &n);
    if (maxElement != INT_MIN) {
        printf("Deleted Max Element: %d\n", maxElement);
    }

    printf("Heap After Deleting Max: ");
    printHeap(heap, n);

    return 0;
}
