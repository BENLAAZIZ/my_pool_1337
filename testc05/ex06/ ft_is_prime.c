#include <stdio.h>

int ft_is_prime(int nb)
{
    int i = 2;
    if (nb <= 1)
        return 0;
    else
    {
        while (i <= nb / 2)
        {
            if (nb % i == 0)
                return 0;
            i++;
        }
        return 1;
    }
}

int main()
{
    int nb = 7;

    printf("%d", ft_is_prime(nb));
    return 0;
}