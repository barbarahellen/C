#include <stdio.h>

int main()
{
   // array = a data structure that can store many values of the same data type.

   double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
   //double prices[5];

   //prices[0] = 5.0;
   //prices[1] = 10.0;
   //prices[2] = 15.0;
   //prices[3] = 25.0;
   //prices[4] = 20.0;

   //printf("$%.2lf\n", prices[0]);

   for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
    printf("$%.2lf\n", prices[i]);
   } 

   // 2D array = an array, where each element is an entire array
   //            Useful if you need a matrix, grid, or table of data
   /*
   int numbers[2][3] = {
                        {1, 2, 3},
                        {4, 5, 6}
                       };
   */

   int numbers[2][3];

   int rows = sizeof(numbers)/sizeof(numbers[0]);
   int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

   printf("rows: %d\n", rows);
   printf("columns: %d\n", columns);

   numbers[0][0] = 1;
   numbers[0][1] = 2;
   numbers[0][2] = 3;
   numbers[1][0] = 4;
   numbers[1][1] = 5;
   numbers[1][2] = 6;

   for(int i = 0; i < rows; i++)
   {
      for(int j = 0; j < columns; j++)
      {
         printf("%d ", numbers[i][j]);
      }
      printf("\n");
   }


   return 0;
}