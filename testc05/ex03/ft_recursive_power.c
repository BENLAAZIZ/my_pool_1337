#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    // add || nb == 0 in next line
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else
        return (nb * ft_recursive_power(nb, power - 1));
}

int main()
{
    int nb = 0;
    int power = 0;
    printf("%d power %d = %d", nb, power, ft_recursive_power(nb, power));
    return (0);
}