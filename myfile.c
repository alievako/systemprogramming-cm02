//function pointers in c
#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}
int mult(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    int (*f2p)(int, int) = &sum;
    // f2p = sum;

    //calling function using function pointer
    int op1 = f2p(10, 13);

    //calling function in normal way using function name

    int op2 = sum(10, 13);

    f2p = mult;
    int op3 = mult(10, 13);
    printf("Output1: Call using function pointer: %d\n", op1);
    printf("Output2: Call using function name: %d\n", op2);
    printf("Output1: Call using function name: %d\n", op3);

    return 0;
}