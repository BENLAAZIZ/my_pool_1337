#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i = 1;
    int res = 1;
    if (power < 0)
        return (0);
    else if (nb == 0 && power == 0)
        return (1);
    else
    {
        while (i <= power)
        {
            res = res * nb;
            i++;
        }
    }
    return (res);
}

int main()
{
    int nb = 0;
    int power = 0;
    printf("%d puissance %d = %d", nb, power, ft_iterative_power(nb, power));
}