#include<stdio.h>

int main(){

    const double PI = 3.14159;
    double circunference, radious, area;

    printf("enter the radious of a circle: ");
    scanf("%lf", &radious);

    circunference = 2 * PI * radious;
    area = PI * radious * radious;

    printf("the circunference is %.2lf", circunference);
    printf("\nthe area is %.2lf", area);

    return 0;
}