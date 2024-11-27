#include <stdio.h>
int main() {
  int i, minimum, maximum, middle, size, search, arr[100];

  printf("Enter array elements size: ");
  scanf("%d", &size);

  printf("Enter %d integer elements: ", size);

  for (i=0; i<size; i++){
    scanf("%d",&arr[i]);
}
printf("The array elements are: \n");
    for(i=0;i<size;i++){
        printf("%d ", arr[i]); 
    }
  printf("\nEnter the value to search: ");
  scanf("%d", &search);

  minimum = 0;
  maximum = size - 1;
  middle = (minimum+maximum)/2;

  while (minimum <= maximum) {

    if (arr[middle] < search)
      minimum = middle + 1;
    else if (arr[middle] == search) {
      printf("Element %d Found at index: %d\n", search, middle);
      printf("Element %d Found at position:  %d\n", search, middle+1);
      break;
    }
    else
      maximum = middle - 1;

    middle = (minimum + maximum)/2;
  }

if(minimum>maximum){
    printf("Element not found.");
    }
  return 0;
}
