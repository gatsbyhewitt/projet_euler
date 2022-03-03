#include <stdio.h>

int main()
{
    int i;
    long int sumOfSquare;
    long int squareOfSum;
    long int n;

    sumOfSquare = 0;
    squareOfSum = 0;
    i = 1;
    while (i <= 100)
    {
        sumOfSquare += i * i;
        i++;
    }
    i = 1;
    while (i <= 100)
    {
        squareOfSum += i;
        i++;
    }
    n = (squareOfSum * squareOfSum) - sumOfSquare;
    printf("%ld\n", n);
    return (0);
}