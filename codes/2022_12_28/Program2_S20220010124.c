#include <stdio.h>

void main()
{
    int array[10], swap, min, index, comparision;

    // Taking 10 numbers from user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    // Printing the unsorted array that user entered
    printf("\nYour unsorted array: (");
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
            printf("%d)\n", array[i]);                  // adding ')' after the last element of array
        else
            printf("%d, ", array[i]);                   // adding ', ' after every number except at last
    }

    // Sorting the array using selection sort algorithm
    for (int i = 0; i < 10; i++)                        // looping over every element of an array
    {
        min = array[i], index = i;                      // we will assume current number is the minimun
        for (int j = i + 1; j < 10; j++, comparision++) // testing the unsorted array for the min number using for loop and also updating comparision value every time 
        {
            if (array[j] < min)
            {
                min = array[j];                         // if we find any number which is smaller than current nummber then changing the min variable value
                index = j;                              // saving that min number index for swaping
            }
        }
        if (index != i)
        {
            swap++;                                     // updating the swap value
            array[index] = array[i];                    // swapping the values
            array[i] = min;
        }
    }

    // Printing the Sorted array
    printf("Your sorted array: (");
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
            printf("%d)\n", array[i]);
        else
            printf("%d, ", array[i]);
    }

    // Printing the no of comparisions and swaps made.
    printf("\n\nTotal no of Comparisions: %d\n", comparision);
    printf("Total no of Swaps: %d\n", swap);
}