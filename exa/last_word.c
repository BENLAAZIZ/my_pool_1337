#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int i = 0;
    int end;
    if (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;
        while ((av[1][i] == ' ' || av[1][i] == '\t') && i >= 0)
            i--; 
            
        end = i + 1;
        while ((av[1][i] != ' ' && av[1][i] != '\t') && i >= 0)
            i--;
        i++;
        while (i < end)
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}