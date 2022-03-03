#include <stdio.h>

int	isPrime(long int n)
{
	long int i;

	i = 2;
	while (i < n - 1)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
    int count;
    int i;

    count = 0;
    i = 1;
    while (count <= 10001)
    {
        if (isPrime(i))
            count++;
        i++;
    }
    printf("10 001st prime number is : %d\n", i - 1);
    return (0);
}