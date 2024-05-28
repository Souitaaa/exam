#include <stdio.h>
#include <unistd.h>

int main(int ac, char const *av[])
{
    int i = 0 ;
    if (ac == 2)
    {
        while(av[1][i]) 
        i += 1;
        while(i)
        {
            write(1,&av[1][i--],1);
            if (i == 0)
                write(1,&av[1][i],1);
        }
    }
    write(1,"\n",1);
    return 0;
}
