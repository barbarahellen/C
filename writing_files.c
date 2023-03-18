#include<stdio.h>

int main(){
    /*
    FILE *pF = fopen("C:\\Users\\Adriana\\OneDrive\\Área de Trabalho\\C\\test.txt", "a");  // (localization of the document, what is gonna do - w = write, a = append)

    fprintf(pF, "\nspongebob squarepants");

    fclose(pF);
    */

   if(remove("test.txt") == 0){
    printf("that file was deleted succesfully");
   } else{
    printf("that file was NOT deleted");
   }
    return 0;
}