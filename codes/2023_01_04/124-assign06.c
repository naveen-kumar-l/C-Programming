#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

// check whether a word is odd palindrome or not
int is_odd_palindrome(char str[])
{
    int len = strlen(str);
    if (len % 2 == 0)
        return 0;
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

void problem1()
{
    char str[100];
    printf("Enter a string to check whether it is odd palindrome or not: ");
    scanf("%s", str);
    int sts = is_odd_palindrome(str);
    if (sts)
        printf("It is an odd palindrome\n\n");
    else
        printf("It is not an odd palindrome\n\n");
}

// generates an random array
int gen_array(int arr[])
{
    int size = (rand() % (30 - 20 + 1)) + 20;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    return size;
}

// finds the GCD or HCF of the two numbers
int gcd(int m, int n)
{
    int rem;
    while (m % n != 0)
    {
        rem = m % n;
        m = n;
        n = rem;
    }
    return n;
}

void problem2()
{
    int arr[30], size, largest = INT_MIN, smallest = INT_MAX;
    size = gen_array(arr);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest && arr[i] % 2 == 0)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest && arr[i] % 2 == 0)
        {
            largest = arr[i];
        }
    }

    printf("Randomly generated array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nSmallest even term: %d\n", smallest);
    printf("largest even term: %d\n", largest);
    printf("The GCD of %d and %d: %d\n\n", smallest, largest, gcd(largest, smallest));
}

// checking whether the given number is prime or not
int isPrime(int num)
{
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0)
            return 0;
    return 1;
}

// get the consecutive prime number of the given prime number
int getConsecutivePrime(int num)
{
    while (1)
    {
        num++;
        if (isPrime(num))
            return num;
    }
}

// check whether the given num is present in the given array or not
int isPresent(int num, int arr[], int len)
{
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] == num)
            return 1;
    }
    return 0;
}

void problem3()
{
    int arr[] = {2, 15, 7, 6, 3, 8, 22, 41, 23, 4, 18, 13, 5, 27, 47, 12, 11, 23, 10, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        if (!isPrime(arr[i]))
        {
            continue;
        }
        int consecutive = getConsecutivePrime(arr[i]);
        if (isPresent(consecutive, arr, len))
        {
            int sum = arr[i] + consecutive;
            if (isPresent(sum, arr, len))
            {
                printf("Primes: %d, %d & sum: %d\n", arr[i], consecutive, sum);
            }
        }
    }
}

void problem4()
{
    int arr[] = {1, 3, 4, 5, 6, 2, 3, 8, 7, 6, 5, 4, 3, 2, 3, 4, 2, 5, 1, 8, 9, 4, 3, 2, 1, 5, 2, 6, 7, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Starting Positions, Ending Positions: \n");
    for (int i = 0; i < len - 2; i++)
    {
        for (int j = 2; j < len; j++)
        {
            if (arr[i] == arr[j] && arr[i + 1] == arr[j - 1] && arr[i + 2] == arr[j - 2])
            {
                printf("%d, %d\n", i + 1, i + 3);
            }
        }
    }
}

// prints the single dimensional array as a well formated matrix
void printMatrix(int order, int matrix[])
{
    for (int i = 0; i < order * order; i++)
    {
        printf("%d  ", matrix[i]);
        if ((i + 1) % order == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}

// Prints the sum of rows and column of the sub matrix
void printSum(int matrix[][3])
{
    printf("\nSum of Column: %d %d %d\n", matrix[0][0] + matrix[1][0] + matrix[2][0], matrix[0][1] + matrix[1][1] + matrix[2][1], matrix[0][2] + matrix[1][2] + matrix[2][2]);
    printf("Sum of row: %d %d %d\n\n", matrix[0][0] + matrix[0][1] + matrix[0][2], matrix[1][0] + matrix[1][1] + matrix[1][2], matrix[2][0] + matrix[2][1] + matrix[2][2]);
}

// finds the sub matrix and print it when the central element is an even number
void printSubmatrix(int size, int A[], int k)
{
    int sub[3][3];

    if (k % size == size - 1 || k % size == size - 2)
    {
        return;
    }
    sub[0][0] = A[k];
    sub[0][1] = A[k + 1];
    sub[0][2] = A[k + 2];
    sub[1][0] = A[k + size];
    sub[1][1] = A[k + size + 1];
    sub[1][2] = A[k + size + 2];
    sub[2][0] = A[k + 2 * size];
    sub[2][1] = A[k + 2 * size + 1];
    sub[2][2] = A[k + 2 * size + 2];

    if (sub[1][1] % 2 != 0)
    {
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    printSum(sub);
    printf("\n\n");
}

void problem5()
{
    int size, A[100];
    size = (rand() % (10 - 5 + 1)) + 5;
    for (int i = 0; i < size * size; i++)
    {
        A[i] = (rand() % (30 - 10 + 1)) + 10;
    }
    printf("Randomly Generated Matrix: \n\n");
    printMatrix(size, A);
    printf("\nSub matrix with even centered: \n\n");
    for (int i = 0; i < size * (size - 2); i++)
        printSubmatrix(size, A, i);
}

void main()
{
    printf("Problem - 1:\n\n");
    problem1();

    printf("\n\nProblem - 2:\n\n");
    problem2();

    printf("\n\nProblem - 3:\n\n");
    problem3();

    printf("\n\nProblem - 4:\n\n");
    problem4();

    printf("\n\nProblem - 5:\n\n");
    problem5();
}