#include<stdio.h>
#include<string.h>


struct Player{
    char name[12];
    int score;
};

int main(){

   // struct = collection of related members ("variables") 
   //          they can be of different data types
   //          listed under one name in a block of memory
   //          VERY SIMILAR to classes in other languages (but no methods)
    struct Player player1 = {"bro", 4};
    struct Player player2 = {"bruh", 5};

    //srtcpy(player1.name, "bro");
    //player1.score = 4;

    //srtcpy(player2.name, "bruh");
    //player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);


    return 0;
}
