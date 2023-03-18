#include<stdio.h>
#include<string.h>

int main(){

    char name[25];  // bytes
    int age;

    printf("what's your name?\n");
    //scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("how old are you?\n");
    scanf("%d", &age);

    printf("hello %s, how are you?", name);
    printf("\nyou are %d years old", age);

    return 0;
}