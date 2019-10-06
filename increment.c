//Passing pointers to functions
#include <stdio.h>

void direct_incr(int p);
void indirect_incr(int *p);

int main(){
    int x;

    x = 7;
    printf("The original value of x is %d\n", x);
    direct_incr(x);
    direct_incr(x);
    

    printf("The value of x is %d\n", x);

    indirect_incr(&x);

    printf("The value of x indirectly accessed is %d\n", x);

}

void direct_incr(int p){
    p = p + 1;
}

void indirect_incr(int *p){
    *p = *p + 1;
}
