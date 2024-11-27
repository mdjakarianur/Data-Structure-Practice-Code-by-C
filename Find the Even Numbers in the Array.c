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
printf("\nThe even mumber are: ");  
for(i=0; i<size; i++){  
if(arr[i]%2==0){
     printf("%d ", arr[i]);
    }
}  
return 0;
}
