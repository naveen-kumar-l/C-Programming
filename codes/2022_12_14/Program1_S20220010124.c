#include <stdio.h>

void main()
{
    char str[10];                    // declaring the str to array of 10 char

    // taking the input from the user
    printf("Enter a string of atmost 10 char: ");
    scanf("%10[^EOF]c", str);        // %10[^EOF]c states that take upto 10 characters except EOF char

    printf("\nPrinting Your input in a reverse way:\n");

    for (int i = 10; i != 0; i--)    // looping through the char array str and printing the result from reverse
        printf("%c", str[i]);        // printing the char with index i since we are starting loop from 10 and ending with 0. it obviously prints char in reverse order

    printf("\n");                    // printing new line for making output to look good
}