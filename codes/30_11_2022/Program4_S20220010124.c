#include<stdio.h>

void main() {
    int P = 2, Q = 5;
    float R = 5.45, S = 2.35, X;

    // i. X = P + Q / 4 *  S/ 3 + Q 
    X = P + Q / 4 * S / 3 + Q;
    printf("\ni. X = P + ((Q / 4) *  (S/ 3)) + Q:\n%f\n", X);

    // ii. X = R + S / 4 * Q / 3 + S 
    X = R + S / 4 * Q / 3 + S;
    printf("\nii. X = R + ((S / 4) * (Q / 3)) + S:\n%f\n", X);

    // iii. X = R / P * Q / 3
    X = R / P * Q / 3;
    printf("\niii. X = (R / P) * (Q / 3):\n%f\n", X);

    // iv. X = P / Q * Q % 5 % 3 
    X = P / Q * Q % 5 % 3;
    printf("\niv. X = (P / Q) * ((Q %% 5) %% 3):\n%f\n", X);

    // v. X = 10 - 5 - 7 / 4 * 4
    X = 10 - 5 - 7 / 4 * 4;
    printf("\nv. X = 10 - 5 - ((7 / 4) * 4):\n%f\n", X);

    // vi. X = 24/(1 + 2%3 + 4/5 + 6 + 31%8)  
    X = 24/(1 + 2%3 + 4/5 + 6 + 31%8);
    printf("\nvi. X = 24/(1 + (2%%3) + (4/5) + 6 + (31%%8)):\n%f\n", X);
}