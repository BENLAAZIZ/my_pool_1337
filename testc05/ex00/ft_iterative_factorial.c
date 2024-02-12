#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    i = 1;
    int res = 1;
    if (nb < 0)
        return (0);
    else
    {
        while (i <= nb)
        {
            res = res * i;
            i++;
        }
    }
    return (res);
}

int main()
{
    int n = 0;

    printf("!%d = %d", n, ft_iterative_factorial(n));
    return (0);
}