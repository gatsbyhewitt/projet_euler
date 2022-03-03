#include <math.h>
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

int	main()
{
	long int	num;
	long int	max;
	long int	i;
	long int 	largest_prime_factor;

	num = 600851475143;
	max = sqrt(600851475143);
	i = 2;
	largest_prime_factor = 0;
	while (i < max)
	{
		if (num % i == 0)
			{
				if (isPrime(i))
				{
					largest_prime_factor = i;
				}
			}
		i++;
	}
	printf("largest prime factor is : %ld\n", largest_prime_factor);
	return (0);
}
