#include <stdio.h>
int main() {
    int i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size], even[size], odd[size];
    int evenCount = 0, oddCount = 0;

    printf("Enter %d array elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }
    
    printf("The array element are: \n");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]); 
    }
    
    printf("\nEven part of the array are:\n");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    
    printf("\nOdd part of the array are:\n");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    return 0;
}
