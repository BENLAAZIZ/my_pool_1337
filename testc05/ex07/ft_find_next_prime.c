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

int ft_find_next_prime(int nb)
{
   if (nb <= 2)
        return 2;
    else
        while (ft_is_prime(nb) != 1)
            nb++;
        return nb;

}

int main()
{
    int nb = -7;

    printf("%d", ft_find_next_prime(nb));
    return 0;
}