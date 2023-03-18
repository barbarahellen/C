#include<stdio.h>

int main(){

    char operator;
    double num1, num2, result;

    printf("enter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("enter number 1: ");
    scanf("%lf", &num1);

    printf("enter number 2: ");
    scanf("%lf", &num2);

    switch (operator){
    case '+':
        result = num1 + num2;
        printf("result = %.1lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("result = %.1lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("result = %.1lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("result = %.1lf", result);
        break;
    
    default:
        printf("%c is not valid", operator);
        
    }

   
    return 0;
}