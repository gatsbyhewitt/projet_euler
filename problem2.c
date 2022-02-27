#include <stdio.h>

int	main()
{
	int	n1;
	int	n2;
	int	n3;
	int	sum;

	n1 = 1;
	n2 = 2;
	n3 = 3;
	sum = 2;
	while(n3 < 4000000)
	{
		n3 = n1 + n2;
		if (n3 % 2 == 0)
			sum += n3;
		n1 = n2;
		n2 = n3;
	}
	printf("sum : %d\n", sum);
	return (0);
}
