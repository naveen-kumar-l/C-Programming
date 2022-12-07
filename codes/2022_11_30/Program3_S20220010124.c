// © NAVEEN KUMAR
#include<stdio.h>

void main() {
    int a, b, c, i, ii, iii, iv; // declaring varables

    // taking user inputs
    printf("\nEnter your a:\n");
    scanf("%d", &a);
    printf("\nEnter your b:\n");
    scanf("%d", &b);
    printf("\nEnter your c:\n");
    scanf("%d", &c);

    // printing values before excution
    printf("\nYour Values before execution:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    // i. Pre-decrement of a 
    i = --a; //same as a = a - 1
    printf("\ni. Pre-decrement of a: %d\n", i);

    // ii. Add the result of (i) to the post-decrement of c.
    ii = a + c--; 
    printf("ii. Add the result of (i) to the post-decrement of c: %d\n", ii);
    /*
    a + c-- is not same as a + --c 
    a + c-- is same as
        ii = a + c; 
        c = c - 1;
    a + --c is same as
        c = c - 1
        a + c
    (So becareful in using the pre-drecrement or pre-increment and post-decrement or post-increment in this way.)
    */

    // iii. Pre-decrement of b
    iii = --b;
    printf("iii. Pre-decrement of b: %d\n", iii);

    // iv. Subtract the result of (iii) from the pre-increment of c. 
    iv = ++c-b;
    printf("iv. Subtract the result of (iii) from the pre-increment of c: %d\n", iv);
    /*
    c = c + 1
    iv = c + b
    */

    // prining values after excution
    printf("\nYour Values after execution:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
}