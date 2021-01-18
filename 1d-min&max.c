#include<stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE] = {34,56,78,15,43,71,89,34,70,91};
    int i, max, min;

    max = min = arr[0];

    for(i = 0; i < SIZE; i++)
    {
        // if value of current element is greater than previous value
        // then assign new value to max
        if(arr[i] > max)
        {
            max = arr[i];
        }

        // if the value of current element is less than previous element
        // then assign new value to min
        if(arr[i] < min)
        {
            min = arr[i];
        }
     }

    printf("Lowest value = %d\n", min);
    printf("Highest value = %d", max);
    return 0;
}