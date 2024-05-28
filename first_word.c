#include <stdio.h>
#include <unistd.h>

int main(int ac, char const *av[])
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i] == 32 || av[1][i] == '\t' )
            i++;
        while(av[1][i] != 32 && av[1][i] != '\t' && av[1][i])
        {  
            write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}
