#include<stdio.h>

void main(){
    int A = 5, B = 10, C = 15; //declaring the variables
    
    /* i. A Bitwse AND B
    A = 5 = 0101 (binary representation of 5)
    B = 10 = 1010 (binary representation of 10)
    now bitwise AND will take each value pair and execute as follows
    0 & 1 = 0
    1 & 0 = 0
    0 & 1 = 0
    1 & 0 = 0
    So A & B = 0 (in binary 0000)
    */
    printf("\nA (%d) Bitwse AND B (%d): %d\n", A, B, A & B);
    
    /* ii. A Bitwise OR B 
    A = 5 = 0101 (binary representation of 5)
    B = 10 = 1010 (binary representation of 10)
    now bitwise or will take each value pair and execute as follows
    0 | 1 = 1
    1 | 0 = 1
    0 | 1 = 1
    1 | 0 = 1
    So A & B = 15 (in binary 1111)
    */
    printf("A (%d) Bitwse OR B (%d): %d\n", A, B, A | B);
    
    /* iii. B Bitwise exclusive OR C 
    B = 10 = 1010 (binary representation of 10)
    C = 15 = 1111 (binary representation of 15)
    now bitwise exclusive OR will take each value pair and execute as follows
    1 ^ 1 = 0
    0 ^ 1 = 1
    1 ^ 1 = 0
    0 ^ 1 = 1
    So A & B = 5 (in binary 0101)
    */
    printf("B (%d) Bitwse exclusive OR C (%d): %d\n", B, C, B ^ C);
  
    /* iv. A Left shift 2
    A = 5 = 0101 (binary representation of 5)
    Left Shift will shift every thing to left like 0101 << 2 = 010100 = 20 in decimal
    */
    printf("A (%d) Left shift 2: %d\n", A, A<<2);
  
    /* v. B Right shift 4 
    B = 10 = 1010 (binary representation of 10)
    Right Shift will shift every thing to right like 1010 >> 4 = 0000 = 0 in decimal
    */
    printf("B (%d) Right shift 4: %d\n", B, B>>4);
  
    /* vi. One’s complement of C
    its simply finds the signed 1's complement of given number 
    */
    printf("One's complement of C (%d): %d\n", C, ~C);
}