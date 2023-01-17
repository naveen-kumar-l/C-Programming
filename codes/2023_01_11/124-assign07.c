#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int isPrime(int num, int div)
{
    if (div < 2 && num > 1)
        return 1;
    if (div > 1 && num % div != 0)
        return isPrime(num, div - 1);
    return 0;
}

int getSumOfPrime(long int num)
{
    if (num <= 0)
        return 0;
    int digit = num % 10;
    if (isPrime(digit, digit - 1))
    {
        return digit + getSumOfPrime(num / 10);
    }
    return getSumOfPrime(num / 10);
}

void problem1()
{
    long int num;
    printf("Enter a number: ");
    scanf("%ld", &num);
    printf("Sum: %d\n", getSumOfPrime(num));
}

int shouldPrint(long int num)
{
    int digit = num % 10;
    if ((digit != 1 && digit % 3 != 0) || (digit==0 && num != 0))
        return 0;
    if (num == 0)
        return 1;
    return shouldPrint(num / 10);
}

void print(int num)
{
    if (shouldPrint(num))
    {
        if (num != 1)
            printf("%d, ", num);
        else
            printf("1");
    }
    if (num > 1)
        print(num - 1);
}

void problem2()
{
    srand(time(0));
    int num = rand() % (100 - 20 + 1) + 20;
    printf("Randomly generated value of N: %d\n", num);
    print(num);
    printf("\n");
}

int getNoOfRepeasts(int start, int check, int len, int repeat, char str[])
{
    if (strlen(str) - len + 1 == check)
        return repeat;

    if (len == 2 && str[start] == str[check] && str[start + 1] == str[check + 1])
        repeat++;

    if (len == 3 && str[start] == str[check] && str[start + 1] == str[check + 1] && str[start + 2] == str[check + 2])
        repeat++;

    if (len == 4 && str[start] == str[check] && str[start + 1] == str[check + 1] && str[start + 2] == str[check + 2] && str[start + 3] == str[check + 3])
        repeat++;

    return getNoOfRepeasts(start, check + 1, len, repeat, str);
}

void printSub(int len, int i, int start, char str[])
{
    if (i > len - 1)
        return;
    printf("%c", str[start + i]);
    printSub(len, i + 1, start, str);
}

void check(int start, int maxRepeatStart, int len, int maxRepeatLen, int maxRepeat, char str[])
{
    int repeat = getNoOfRepeasts(start, 0, len, 0, str);
    if (repeat > maxRepeat)
    {
        maxRepeat = repeat;
        maxRepeatStart = start;
        maxRepeatLen = len;
    }

    if (strlen(str) - len + 1 == start && len < 4)
    {
        start = -1;
        len++;
    }
    else if (strlen(str) - len + 1 == start && len >= 4)
    {
        printf(">> No of occurence: %d\nMost repeated Substring: ", maxRepeat);
        printSub(maxRepeatLen, 0, maxRepeatStart, str);
        return;
    }

    check(start + 1, maxRepeatStart, len, maxRepeatLen, maxRepeat, str);
}

void problem3()
{
    char str[] = "acbaacdeceefdacadecaefefafecef";
    check(0, 0, 2, 2, 0, str);
}

void checkAndPrint(int start, int check, int len, int arrayLen, int arr[])
{
    if (len > 3)
        return;

    int multipliedBy = arr[check] / arr[start];
    if (len == 2 && arr[start] * multipliedBy == arr[check] && arr[start + 1] * multipliedBy == arr[check + 1] && multipliedBy != 1)
        printf("{%d, %d} {%d, %d} \n", arr[start], arr[start + 1], arr[check], arr[check + 1]);
    if (len == 3 && arr[start] * multipliedBy == arr[check] && arr[start + 1] * multipliedBy == arr[check + 1] && arr[start + 2] * multipliedBy == arr[check + 2] && multipliedBy != 1)
        printf("{%d, %d, %d} {%d, %d, %d} \n", arr[start], arr[start + 1], arr[start + 2], arr[check], arr[check + 1], arr[check + 2]);

    if (check + len == arrayLen)
    {
        start++;
        check = -1;
    }
    if (start + len == arrayLen)
    {
        len++;
        start = 0;
        check = -1;
    }
    checkAndPrint(start, check + 1, len, arrayLen, arr);
}

void problem4()
{
    int arr[] = {2, 3, 7, 5, 1, 2, 7, 4, 4, 2, 6, 9, 21, 10, 2, 4, 4, 2, 6, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkAndPrint(0, 0, 2, size, arr);
}

void print2X2Matrix(int matrix[2][10], int index)
{
    if (index > 19)
        return;
    if (index % 10 == 0)
        printf("\n");
    printf("%d ", matrix[index / 10][index % 10]);
    print2X2Matrix(matrix, index+1);
}

void checkCondition(int primeIndex, int compositeIndex, int start, int arr[], int matrix[2][10], int ArrayLen)
{
    if (start + 1 > ArrayLen)
        return;
    if (isPrime(arr[start], arr[start]-1))
    {
        matrix[1][primeIndex] = arr[start];
        primeIndex++;
    }
    else
    {
        matrix[0][compositeIndex] = arr[start];
        compositeIndex++;
    }

    checkCondition(primeIndex, compositeIndex, start + 1, arr, matrix, ArrayLen);
}

void problem5()
{
    int arr[] = {8, 2, 3, 6, 7, 11, 21, 22, 28, 23, 12, 43, 9, 17, 25, 27, 29, 47, 10, 31}, matrix[2][10];
    int ArrayLen = sizeof(arr) / sizeof(arr[0]);
    checkCondition(0, 0, 0, arr, matrix, ArrayLen);
    printf("The 2-dimensional Matrix: \n");
    print2X2Matrix(matrix, 0);
}

void main()
{
    printf("================== Problem 1 ==================\n\n");
    problem1();
    printf("\n\n\n================== Problem 2 ==================\n\n");
    problem2();
    printf("\n\n\n================== Problem 3 ==================\n\n");
    problem3();
    printf("\n\n\n================== Problem 4 ==================\n\n");
    problem4();
    printf("\n\n\n================== Problem 5 ==================\n\n");
    problem5();
    printf("\n\n");
}