#include <stdio.h>
#include <math.h>

int main()
{
    int     a;
    int     b;
    int     c;
    double     solution;

    c = 0;
    solution = 0;
    a = 1;
    while (a < 800)
    {
        b = 1;
        while (b < 800)
        {
            c = a*a + b*b;
            if ((a + b + sqrt(c)) == 1000 && a < b && b < c)
            {
                solution = a * b * sqrt(c);
                printf("oui : %f a=%d  b=%d  c=%f  \n", solution, a, b, sqrt(c));
            }
            b++;
        }
        a++;
    }
    printf("oui : %f\n", solution);
    return (0);
}