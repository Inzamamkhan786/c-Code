#include<stdio.h>
#include<stdlib.d>

struct node{
    struct node*left;
    int data;
    struct node*right;
};

struct node*insert(int arr[],struct node*root,int i,int n);
struct node*createNode(int value);


int main(){
struct node*head = NULL;
int arr[] = {1,5,6,8,9,7,3};
int n = sizeof(arr)/sizeof(arr[0]);
 head = insert(arr,head,0,n);


    return 0;
}


struct node*insert(int arr[],struct node*root,int i,int n){
    if(i<n){
        struct node*newNode = createNode(arr[i]);
        root = newNode;
//for left side elements;
    root->left = insert(arr,root->left,i,n);

    //for right side elements;
    root->right = insert(arr,root->right,i,n);

    }
return root;

}

struct node*createNode(int value){
    struct node*newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;

}
