#include <stdio.h>

int	main()
{
	int	i = 0;
	int	sum;

	while (i < 1000)
	{
		if (!(i%3) || !(i%5))
			sum = sum + i;
		i++;
	}
	printf("the sum of all the multiples of 3 or 5 bellow 1000 is: %d", sum);
	return (0);
}
