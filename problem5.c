#include <stdio.h>

int notDivisible(int n)
{
    int i;

    i = 1;
    while (i <= 20)
        if (n % i == 0)
            i++;
        else
            return (1);
    return (0);
}

int main()
{
    int i = 1;
    while (notDivisible(i))
        i++;
    printf("the smallest multiple is : %d\n", i);
    return (0);
}