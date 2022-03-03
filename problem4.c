#include <stdio.h>

int isPalindrome(int n)
{
    int n1;
    int n2;

    n1 = n / 1000;
    n2 = n % 1000;
    if ((n1 / 100 == n2 % 10) && (n1 / 10 % 10 == n2 / 10 % 10) && (n1 % 10 == n2 / 100))
        return (1);
    return (0);
}

int main()
{
    int i;
    int j;
    int palindrome;

    palindrome = 0;
    i = 100;
    while (i < 1000)
    {
        j = 100;
        while (j < 1000)
        {
            if (isPalindrome(i * j))
                if (i * j > palindrome)
                    palindrome = i * j;
            j++;
        }
        i++;
    }
    printf("largest palindrome product is : %d\n", palindrome);
    return (0);
}