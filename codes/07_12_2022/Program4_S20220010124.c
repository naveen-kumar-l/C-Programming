// © NAVEEN KUMAR
#include <stdio.h>

void main() {
    float a, b, c, total, average; // declaring variables
    
    // asing the user for his marks in his three subjects
    printf("Enter your 1st subject marks: ");
    scanf("%f", &a);
    printf("Enter your 2nd subject marks: ");
    scanf("%f", &b);
    printf("Enter your 3rd subject marks: ");
    scanf("%f", &c);
 
    if (a > 100 || b > 100 || c > 100 || a < 0 || b < 0 || c < 0) { // checking whether the marks are in range 0 - 100
        printf("You entered invalid marks\n"); // if not in range printing as invalid marks
        return; // stopping furthur running the code by returning None
    }

    total = a + b + c; // finding the total of three subjests
    average = total / 3; // finding average using the well know formula (average = sum of values / total no of values)

    printf("\nYour Total marks of three subjects: %.2f\n", total); // printing the total marks upto 2 decimal points so that used %.2f
    printf("Your Average marks of three subjects: %.2f\n", average); // printing the average upto 2 decimal points

    // in question pdf they said to use switch case to print grade but after that Dr Arijit Roy sir said to use if else instead of switch case 
    // printing the correct grade using if else statements.
    if (average > 90) { 
        printf("Your grade: 'O'\n\n");
    } else if (average > 74) {
        printf("Your grade: 'E'\n\n");
    } else if (average > 54) {
        printf("Your grade: 'A'\n\n");
    } else if (average > 44) {
        printf("Your Grade: 'B'\n\n");
    } else if (average > 40) {
        printf("Your Grade: 'C'\n\n");
    } else {
        printf("Your Grade: 'F'\n\n");
    }
}