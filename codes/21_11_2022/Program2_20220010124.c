// © NAVEEN KUMAR
#include <stdio.h> // importing some basic funcions like printf and scanf

int a, b; // decleraing the dataType of a and b to integer


void main() {
    // taking the users input 
    printf("Enter 1st number:\n");
    scanf("%d", &a);
    printf("Enter 2nd number:\n");
    scanf("%d", &b);

    // printing the addition, subtration, multipliation, division and modulus of given numbers
    printf("\nAddition of %d and %d:\n%d\n\n", a, b, a+b);
    printf("Subration of %d and %d:\n%d\n\n", a, b, a-b);
    printf("Multiplication of %d and %d:\n%d\n\n", a, b, a*b);
    if (b == 0) { // checking whether the b value is zero or not
        // when value of b is 0 telling user that we cant perform division
        printf("Cannot find the division and modulus as the 2nd value is Zero !!.\n\n");
    } else { // when b is not zero printing the quotient and reminder
        printf("Division of %d and %d:\n%d\n\n", a, b, a/b);
        printf("Modulus (remainder) when %d divided by %d:\n%d\n\n", a, b, a%b);
    }
}