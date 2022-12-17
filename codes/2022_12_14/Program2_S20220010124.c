#include <stdio.h>

void main()
{
    int n, i = 0, previous = 0, current = 1, temp;

    // taking vale of n from user
    printf("Enter a number n to get the nth number of Fibonacci series: ");
    scanf("%d", &n);

    if (n < 0)
    {                                               // checking whether user entered a -ve number or not
        printf("You entered a wrong number!!\n");
        return;                                     // saying user that he/she entered a wrong number and quiting if user enters a -ve number
    }

    while (i < n)
    {                                               // looping in the while block untill we reach the required number
        temp = current;                             // saving the "current" variable value for assigning that later to "previous"
        current = previous + current;               // following the fibonacci logic Fi = F(i-1) + F(i-2)
        previous = temp;                            // previous = F(i-2)
        i++;                                        // incrementing the i value by 1
    }

    // printing the Fn value
    printf("F%d: %d\n", n, previous);
}