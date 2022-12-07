// © NAVEEN KUMAR
#include <stdio.h>
#include <math.h>

/*
"error: ld returned 1 exit status"

if you are getting the above error then check the article
https://stackoverflow.com/questions/12824134/undefined-reference-to-pow-in-c-despite-including-math-h


you are getting the above error because of linker in gcc unable to find function pow 
so you should link manually by entering the below command
...$ gcc Program3_S20220010124.c -lm
*/

void main() {
    int a, b, c, result; // declaring the required variables

    // taking the values a, b, c from users
    printf("Enter 'a' number: ");
    scanf("%d", &a);
    printf("Enter 'b' number: ");
    scanf("%d", &b);
    printf("Enter 'c' number: ");
    scanf("%d", &c);

    // finding the result of (a^bc + b^ac + c^ab)^2 using pow function
    result = pow((pow(a, b*c) + pow(b, a*c) + pow(c, a*b)), 2);
    printf("Value of (a^bc + b^ac + c^ab)^2: %d\n\n", result);
}