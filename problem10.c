#include <math.h>
#include <stdio.h>

/*int	isPrime(long int n)
{
	long int i;

	i = 2;
	while (i < 6)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}
    while (i < n + 1)
    {
        if (n % (i - 1) == 0  || n % (i + 1) == 0)
        {
            return (0);
        }
        i = i + 6;
    }
	return (1);
}*/

int	isPrime(long int n)
{
	long int i;

	i = 2;
	while (i * i < n + 1)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
    int     number;
    long int     sum;
    int     i;

    sum = 0;
    i = 2;
    while(i < 2000000)
    {
        if (isPrime(i))
            sum += i;
        i++;
    }
    printf("sum of primes numbers below 2 million is : %ld\n", sum);
}