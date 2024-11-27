#include<stdio.h>
int main(){
    int arr[]= {10,20,30,40,50,60,70,80,90,100};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("Array Element Are: \n");
    for(int i = 0; i<len ; i++){
        printf("%d ",arr[i]);
    }
    int value,position;
    printf("\nEnter the position do you want to insert : ");
    scanf("%d",&position);
    printf("Enter element for the replacement : ");
    scanf("%d",&value);
    arr[position-1] = value ;
    for(int i = 0; i<len ; i++){
        printf("%d ",arr[i]);
    }
}
