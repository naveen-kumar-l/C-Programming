#include <stdio.h>

void main()
{
    int sum = 0, num, digit;                               // declaring the variables
    printf("Enter a number: ");                            // prompting the user to enter a number
    scanf("%d", &num);                                     // taking the users input

    while (num > 0)                                        // looping untill the num is 0
    {
        digit = num % 10;                                  // getting the each digit (Example: 546  % 10 = 6 (remainder))
        sum += digit;                                      // adding it to the sum variable
        num /= 10;                                         // dividing our num with 10 as it is an interger it simply remove the last digit from num (Example: 546/10 = 54 as we declare num as int)
    }
    printf("The sum of digits of your number: %d\n", sum); // printing the sum of the digits that we calculated
}