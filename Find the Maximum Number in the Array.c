#include <stdio.h>  
int main(){  
int i, size;  
printf("Enter any array size: ");  
scanf(“%d”,&size); 
int arr[size];  
printf("Enter %d numbers: ", size);  
for(i=0; i<size; i++){  
scanf("%d", &arr[i]);
}
printf("The array element are: \n");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]); 
    }
printf("\nThe maximum mumber is: ");  
int maximum = arr[0];  
for(i=1; i<size; i++)
{  
if(arr[i] > maximum)
    {
     maximum=arr[i];
    }
}  
printf("%d", maximum);  
return 0;
}
