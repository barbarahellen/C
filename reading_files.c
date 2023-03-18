#include<stdio.h>
int main(){

    FILE *pF = fopen("C:\\poem.txt", "r");  // r = read
    char buffer[255];

    if(pF == NULL ){
        printf("unable to open file!\n");
    }else{
        while ( fgets(buffer, 255, pF) != NULL){
            printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}