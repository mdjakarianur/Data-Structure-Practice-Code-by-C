#include <stdio.h>

int main() {
    int i, size, isSorted = 1;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d array elements: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The array elements are: \n");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]); 
    }
    for (i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = 0;
            break;
        }
    }

    if (isSorted) {
        printf("\nThe array is sorted in ascending order.\n");
    } else {
        printf("\nThe array is not sorted.\n");
    }
    return 0;
}
