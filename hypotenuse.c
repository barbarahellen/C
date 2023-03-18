#include<stdio.h>
#include<math.h>

int main(){

    double A, B, C;

    printf("enter side A: ");
    scanf("%lf", &A);

    printf("enter side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("side C: %.2lf", C);


    return 0;
}