#include "isort.h"
#include "textfind.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
 printf("Please enter a number :\n");
     int no_elements = 0;
     int array[LENGHT];

     while(no_elements<LENGHT){
         char line[32];
         int n;
         fgets(line, sizeof(line), stdin);
         if(*line == '\n')
             break;
         if(1==sscanf(line, "%d", &n))
             array[no_elements++]=n;
     }
 
   printf("\n Array before sort:\n");
 for (int i = 0; i < no_elements; i++)
 {
   printf("%d , ",*(array+i));
 }
   printf("\n Array after sort:\n");

 insertion_sort(array,no_elements);

 for (int i = 0; i < no_elements; i++)
 {
   printf("%d , ",*(array+i));
 }

return 0;
}