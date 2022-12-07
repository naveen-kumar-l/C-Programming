// © NAVEEN KUMAR
#include <stdio.h>


void main() {
    // reading an integer value from keyboard
    int a; // declaraing type as int
    printf("\nEnter an integer value:\n");
    scanf("%d", &a);

    // reading an floating-point value from keyboard
    float b; // declaraing type as float
    printf("\nEnter an floating-point value:\n");
    scanf("%f", &b);


    // reading an character value from keyboard
    char c; // declaraing type as char
    printf("\nEnter an character:\n");
    scanf(" %c", &c);


    // reading a string of length less than 13 characters from keyboard
    char d[13];
    /* In c programming there is no specialy dataType like str
    we use the char str_name[size] as the data type for storing strings
    actually they are storred as an array of char.
    while specifing the size add one to that
    to store the null character (/0) which is used for string temination ie. the
    end of the string check the article for more details
    https://www.geeksforgeeks.org/strings-in-c/ */

    printf("\nEnter a sting of lenght less than 13 characters:\n");
    scanf(" %[^\n]12s", d); // [^\n] tells the c to take every thing untill next line by default it considers upto a white space


    // Printing the values back to user
    printf("\nYou entered the following values\n");
    printf("Integer: %d\n", a);
    printf("Float: %f\n", b);
    printf("Character: %c\n", c);
    printf("String: %s\n", d);
}