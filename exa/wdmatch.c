#include <unistd.h>

int	iter(char *str, char c, int i)
{
	while( i>=0)
    {
        if(str[i] == c)
          return 0;
          i--;
    }
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i,j;

	if (argc == 3)
	{
        i = 0;
        j = 0;
        while(argv[1][i] && argv[2][j])
        {
            if(argv[1][i] == argv[2][j])
               {i++;}
            j++;   
        }
        if(argv[1][i] == '\0')
        {
            i =0;
            while(argv[1][i]){
             write(1,&argv[1][i++], 1);  
            
            }
        }

	}
	write(1, "\n", 1);
	return (0);
}