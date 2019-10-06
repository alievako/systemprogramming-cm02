#include <stdio.h>

int main()
{

    int x;

    int *iptr = &x;
    
    x = 10;

    printf("The value of iptr is %p\n", iptr);
    printf("The address of  x is %p\n", &x);
    //print value of object accessed indirectly and directly
    printf("The value indirectly accessed is %d, the value directly accessed is %d\n", *iptr, x);
    *iptr *= 10;
    printf("The value indirectly accessed is %d, the value directly accessed is %d\n", *iptr, x);


    return 0;
}