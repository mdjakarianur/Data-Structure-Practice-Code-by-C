#include <stdio.h>
int main() {
    int arr[100],i,size,position;
    printf("Enter Array Size: ");
    scanf("%d", &size);
    printf("Enter %d Array Element: ", size);
    for(i=0;i<size;i++){
    scanf("%d", &arr[i]);
    }
    printf("The Array Element Are: \n");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]); 
    }
    printf("\nEnter the position you want to delete: ");
    scanf("%d", &position);
    for(i=position-1;i<=size-2;i++){
    arr[i]=arr[i+1];
    }
        arr[size-1]=0;
    printf("The Array Element Atfer Deletion: \n");
    for(i=0;i<size-1;i++)
    {
        printf("%d ", arr[i]); 
    }
    return 0;
}
