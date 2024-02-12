#include <stdio.h>

int ft_sqrt(int nb)
{
    int i = 0;
    if (nb < 0)
        return 0;
    else
    {
        while (i * i <= nb && i < 46341)
        {
            if (i * i == nb)
                return (i);
            i++;
        }
    }
    return (0);
}

int main()
{
    int nb = -1;

printf("%d", ft_sqrt(nb));
return 0;
}