#include <stdio.h>
int main(){
int A=20;
int B=10;
printf("\nBefore Swaping A = %d, B = %d.\n",A,B);

int *x = &A;
int *y = &B;
int temp = *x;
*x = *y;
*y = temp;

printf("\nAfter Swaping  A = %d, B = %d.\n",A,B);

return 0;
}
