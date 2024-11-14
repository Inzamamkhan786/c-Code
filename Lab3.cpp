#include <stdio.h>
#include <stdlib.h>

// Define the structure of a heap node
struct HeapNode {
    int data;
    struct HeapNode* left;
    struct HeapNode* right;
};

// Function to create a new heap node
struct HeapNode* createNode(int data) {
    struct HeapNode* node = (struct HeapNode*)malloc(sizeof(struct HeapNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to insert a new value into the Min Heap
void insert(struct HeapNode** root, int data) {
    // Create a new node
    struct HeapNode* newNode = createNode(data);
    
    if (*root == NULL) {
        *root = newNode;
        return;
    }
    
    // Use a queue to perform level-order traversal
    struct HeapNode* queue[100];
    int front = 0, rear = 0;
    
    queue[rear++] = *root;
    
    while (front < rear) {
        struct HeapNode* current = queue[front++];
        
        if (current->left == NULL) {
            current->left = newNode;
            break;
        } else {
            queue[rear++] = current->left;
        }
        
        if (current->right == NULL) {
            current->right = newNode;
            break;
        } else {
            queue[rear++] = current->right;
        }
    }
    
    // Perform heapify-up to maintain the Min Heap property
    struct HeapNode* temp = newNode;
    while (temp != *root) {
        struct HeapNode* parent = *root;
        struct HeapNode* queue2[100];
        int front2 = 0, rear2 = 0;
        
        queue2[rear2++] = parent;
        
        while (front2 < rear2) {
            parent = queue2[front2++];
            
            if (parent->left == temp || parent->right == temp) {
                break;
            }
            
            if (parent->left != NULL) {
                queue2[rear2++] = parent->left;
            }
            
            if (parent->right != NULL) {
                queue2[rear2++] = parent->right;
            }
        }
        
        if (temp->data < parent->data) {
            int swap = temp->data;
            temp->data = parent->data;
            parent->data = swap;
            
            temp = parent;
        } else {
            break;
        }
    }
}

// Function to extract the minimum value from the Min Heap
int extractMin(struct HeapNode** root) {
    if (*root == NULL) {
        printf("Heap is empty\n");
        return -1;
    }
    
    int minValue = (*root)->data;
    
    struct HeapNode* lastNode = *root;
    struct HeapNode* queue[100];
    int front = 0, rear = 0;
    
    queue[rear++] = *root;
    
    while (front < rear) {
        struct HeapNode* current = queue[front++];
        
        if (current->left != NULL) {
            queue[rear++] = current->left;
            lastNode = current->left;
        }
        
        if (current->right != NULL) {
            queue[rear++] = current->right;
            lastNode = current->right;
        }
    }
    
    (*root)->data = lastNode->data;
    
    struct HeapNode* parent = *root;
    struct HeapNode* queue2[100];
    int front2 = 0, rear2 = 0;
    
    queue2[rear2++] = parent;
    
    while (front2 < rear2) {
        parent = queue2[front2++];
        
        if (parent->left == lastNode) {
            parent->left = NULL;
        } else if (parent->right == lastNode) {
            parent->right = NULL;
        } else {
            if (parent->left != NULL) {
                queue2[rear2++] = parent->left;
            }
            
            if (parent->right != NULL) {
                queue2[rear2++] = parent->right;
            }
        }
    }
    
    free(lastNode);
    
    // Perform heapify-down to maintain the Min Heap property
    struct HeapNode* current = *root;
    while (current->left != NULL) {
        struct HeapNode* smallest = current;
        
        if (current->left->data < smallest->data) {
            smallest = current->left;
        }
        
        if (current->right != NULL && current->right->data < smallest->data) {
            smallest = current->right;
        }
        
        if (smallest != current) {
            int swap = current->data;
            current->data = smallest->data;
            smallest->data = swap;
            
            current = smallest;
        } else {
            break;
        }
    }
    
    return minValue;
}

// Function to print the heap in level-order
void printHeap(struct HeapNode* root) {
    if (root == NULL) {
        printf("Heap is empty\n");
        return;
    }
    
    struct HeapNode* queue[100];
    int front = 0, rear = 0;
    
    queue[rear++] = root;
    
    while (front < rear) {
        struct HeapNode* current = queue[front++];
        printf("%d ", current->data);
        
        if (current->left != NULL) {
            queue[rear++] = current->left;
        }
        
        if (current->right != NULL) {
            queue[rear++] = current->right;
        }
    }
    printf("\n");
}

int main() {
    struct HeapNode* minHeap = NULL;
    
    insert(&minHeap, 10);
    insert(&minHeap, 5);
    insert(&minHeap, 20);
    insert(&minHeap, 2);
    insert(&minHeap, 15);
    
    printf("Heap elements: ");
    printHeap(minHeap);
    
    printf("Extracted Min: %d\n", extractMin(&minHeap));
    printf("Heap elements: ");
    printHeap(minHeap);
    
    printf("Extracted Min: %d\n", extractMin(&minHeap));
    printf("Heap elements: ");
    printHeap(minHeap);
    
    return 0;
}
