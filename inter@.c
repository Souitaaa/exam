#include <stdio.h>
#include <unistd.h>

int main(int ac, char *av[])
{
    int i = 0 ;
    int j = 0 ;
    int tab[256] = {0};

    if(ac == 3)
    {
        while(av[1][i])
        {
            j = 0;
            while(av[2][j])
            {
                if(av[1][i] == av[2][j])
                {
                    if((tab[(int)av[1][j]]) == 0)
                    {
                        write(1,&av[1][j],1);
                        tab[(int)av[1][j]] = 1;
                    }
                }
                j++;
            }
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}
