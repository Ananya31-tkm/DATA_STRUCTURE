#include <stdio.h>
int main()
{
     float marks[10], i, n, sum = 0, average;

     printf("Enter number of elements: ");
     scanf("%f", &n);

     for(i=0; i<n; ++i)
     {
          printf("Enter number%d: ",i+1);
          scanf("%f", &marks[i]);
          
          // adding integers entered by the user to the sum variable
          sum += marks[i];
     }

     average = sum/n;
     printf("Average = %f", average);

     return 0;
}