// © NAVEEN KUMAR
#include <stdio.h>

void main() {
    float marks; // declaring the marks as float type  
    // asking the user for his marks
    printf("Enter Your marks: ");
    scanf("%f", &marks);
    

    if (marks < 0 || marks > 100) { 
        printf("You enteres wrong marks.\n\n"); // when marks is not in the correct ranges (i.e. between 0 and 100) this block will run
    } else if (marks > 90) {
        printf("Your grade: Excellent\n\n"); // when marks in ranges 91-100 this block will run
    } else if (marks > 80) {
        printf("Your grade: Good\n\n"); // when marks in range 81-90 this block will run
    } else if (marks > 70) {
        printf("Your grade: Above Average\n\n"); // when marks in range 71-80 this block will run
    } else if (marks > 60) {
        printf("Your grade: Average\n\n"); // when marks in range 61-70 this block will run
    } else if (marks > 50) {
        printf("Your grade: Below Good\n\n"); // when marks in range 51-60 this block will run
    } else if (marks > 40) {
        printf("Your grade: Poor\n\n"); // when marks in range 41-50 this block will run
    } else if (marks > 30) {
        printf("Your grade: Very Poor\n\n"); // when marks in range 31-40 this block will run
    } else {
        printf("You are not awarded with any grade.\n\n"); // when marks in range 0-30 this block will run
    }   
}