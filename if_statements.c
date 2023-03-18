#include<stdio.h>

int main(){

    int age;

    printf("enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("you are now sign up!");
    } else if(age == 0){
        printf("you can't sign up! you were just born!");
    } else if(age < 0){
        printf("you haven't been born yet!");
    } else {
        printf("you are to young to sign up!");
    }

    return 0;
}