#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int size;
    char *tab;
    int i;

    i = 0;
    size = ft_strlen(src);
    tab = malloc(sizeof(char) * size + 1);
    if (*tab)
        return (0);
    else
    {
        while (src[i])
        {
            tab[i] = src[i];
            i++;
        }
    }
    return (tab);
}
/*  
int main()
{
    char str[] = "hamza ben";
    printf("%s", ft_strdup(str));
    return (0);
}*/