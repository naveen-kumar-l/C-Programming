// © NAVEEN KUMAR
#include <stdio.h> // importing some basic funcions like printf and scanf

float a, b, d, result; // declering the dataType of the required variable

void main(){
    // taking the result from the user
    printf("Enter the 1st number of your arthemetic series:\n");
    scanf("%f", &a);
    printf("Enter the 2nd number of your arthemetic series:\n");
    scanf("%f", &b);

    d = b - a; // finding the comman difference of the reired A.P
    result = (100 * (2*a + 99*d))/2; // Finding the sum of first 100 numbers of the given series

    // printing the result
    printf("The sum of the first 100 numbers of the Arthemetic Progression series ");
    printf("who's first two number are %f and %f:\n%f\n\n", a, b, result);
}