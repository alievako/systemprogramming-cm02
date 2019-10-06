#include <stdio.h>

double sqcube(double x, double *xcube);

int main(){
    double x = 3;
    double square, cube;
    square = sqcube(x, &cube);

    printf("x = %f, square = %f, cube = %f\n", x, square, cube);
}

double sqcube(double x, double *xcube){
    *xcube = x * x * x; //stores value indirectly in the cell pointed to by xcube  //unofficial return value
    return x*x; //official return value
}