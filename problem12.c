#include <stdio.h>

int countDivisor(int n)
{
    int i;
    int count;
    int tmp;

    i = 1;
    count = 0;
    while (i * i < n)
    {
        if (n % i == 0)
            count += 2;
        i++;
    }
    return (count);
}

int main()
{
    int numDivisor;
    int num;
    int tmp;
    int i;

    numDivisor = 0;
    tmp = 1;
    num = 0;
    i = 1;
    while (tmp < 500)
    {
        num = num + i;
        tmp = countDivisor(num);
        if (tmp > numDivisor)
            numDivisor = tmp;
        i++;
    }
    printf(" num %d : %d divisor\n", num, numDivisor);
    return (0);
}