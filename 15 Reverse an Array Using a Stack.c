#include<stdio.h>
int top = -1;
int stack[5];
int isFull(){
    if (top==4){
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(){
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int data){
    if (isFull())
    {
        printf("Stack Overflow!\n");
        return;
    }

    top = top+1;
    stack[top] = data;
}
void pop(){
    if(isEmpty())
    {
        printf("Stack is empty!\n");
        return;
    }
    printf("Popped: %d\n",stack[top]);
    
    int arr2[5];
    for(int i=0;i<5;i++){
    arr2[i]=stack[top];
    }
    top=top-1;
}
void print(){
    if(isEmpty())
    {
        printf("Empty Stack");
        return;
    }
    printf("Your Current Stack:\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n", stack[i]);
    }
}
int main(){
    int i,size;
    printf("Enter array element size: ");
    scanf("%d",&size);
    int arr[size];
    
    printf("Enter %d array element: ", size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray element are: \n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    for(i=0;i<size;i++){
        push(arr[i]);
    }
    print();
    for(i=0;i<size;i++){
        pop(arr[i]);
    }
    
    printf("\nReverse Array element are: \n");
    for(i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    
return 0;
}
