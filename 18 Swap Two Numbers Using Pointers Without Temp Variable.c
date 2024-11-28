#include <stdio.h>
int main(){
int A=20;
int B=10;
printf("\nBefore Swaping A = %d, B = %d.\n",A,B);

int *x = &A;
int *y = &B;

*x = *x+*y;
*y = *x-*y;
*x = *x-*y;

printf("\nAfter Swaping  A = %d, B = %d.\n",A,B);

return 0;
}

