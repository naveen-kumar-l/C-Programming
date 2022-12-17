#include <stdio.h>

int isPrime(int num) // a function to check whether a number is prime or not
{
    /*
    For testing whether the given number is prime or not
    we create a simple for loop which iters over the numbers from 2 to num/2 (we check from 2 because 1 can every numbers)
    (of course we can check upto num instead of num/2 but it is of no use in testing untill it
    because no number is present between num/2 and num which can divide num and if we test untill num it decrease the performance too.)
    and try to check the remainder whether it is 0 or not. if it is zero we return 0 which mean isPrime as false
    else return 1 which mean isPrime is true.
    */
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void main()
{
    /*
    sum = the sum of first 10 prime number which will be obtained at the end to the program
    i = a simple variable which tell us how many prime numbers we added to sum,
        it helps in stopping iteration after adding required number of prime numbers to sum (i.e. 10)
    num = the number we are testing whether it is prime or not we initially assign its value to 2 because 1 is niether prime not composite
    */
    int sum = 0, i = 0, num = 2;

    printf("First 10 prime numbers: ");
    while (i < 10)                                  // a loop that runs untill we add 10 prime numbers to sum
    {
        if (isPrime(num))                           // checks whether the num is prime or not
        {
            sum += num;                             // when the num is prime add it to the sum
            i++;                                    // we add one to the previous value of i telling that we added another prime number to sum
            printf("%d", num);                      // printing number when it is prime
            if (i != 10) printf(", ");               // ', ' after number except when it is the last number
        }
        num++;                                      // adding 1 to num and testing for furthur numbers
    }
    printf("\nSum of first 10 prime num: %d\n", sum); // printing the result sum as output
}