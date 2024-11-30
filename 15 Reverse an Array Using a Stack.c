#include<stdio.h>
#define stack_size 100
int top = -1;
int stack[stack_size];
int isFull(){
    if (top==stack_size-1){
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
    top++;
    stack[top] = data;
}


int pop(){
    if(isEmpty())
    {
        printf("Stack is empty!\n");
        return 1;
    }
    printf("Popped element: %d\n",stack[top]);
    return stack[top--];
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
    
    for (int i=0; i<size; i++) {
        arr[i] = pop();
        }
    
    
    printf("\nReverse Array element are: \n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
return 0;
}
