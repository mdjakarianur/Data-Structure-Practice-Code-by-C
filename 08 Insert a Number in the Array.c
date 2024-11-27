#include <stdio.h>
int main()
{
    int arr[100],i,size,position,value;
    printf("Enter any array aize: ");
    scanf("%d", &size);
    printf("Enter %d Array Element: ", size);
    for(i=0;i<size;i++){
    scanf("%d", &arr[i]);
  }
  for(i=0;i<size;i++)
    {
        printf("%d ", arr[i]); 
    }
    printf("\nEnter the position you want to insert: ");
    scanf("%d", &position);
    printf("Enter the value you want to insert: ");
    scanf("%d", &value);
    for(i=size;i>=position;i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=value;
printf("The Array Element After Insertion: \n");
    for(i=0;i<size+1;i++)
    {
        printf("%d ", arr[i]); 
    }
    return 0;
}
