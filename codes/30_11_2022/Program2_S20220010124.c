#include<stdio.h>

void main() {   
    int a, b, c, d, sum, sub; // declaring variables
    
    // taking user inputs
    printf("\nEnter your first Number:\n");
    scanf("%d", &a);
    printf("\nEnter your second Number:\n");
    scanf("%d", &b);
    printf("\nEnter your third Number:\n");
    scanf("%d", &c);
    printf("\nEnter a number to subtract this ");
    printf("from the sum of last three numbers you enters:\n");
    scanf("%d", &d);

    // assigning the sum of values of a, b, c to variable sum
    sum = a + b + c;

    // assigning the value obtained by subtracting the values of sum and d to sub.    
    sub = sum - d;

    // priniting the sum and sub values
    printf("\nSum of the numbers %d, %d and %d: \n %d\n", a, b, c, sum);
    printf("\nSub of the numbers %d from the above sum %d: \n %d\n", d, sum, sub);
}