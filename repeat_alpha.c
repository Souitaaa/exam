#include <stdio.h>
#include <unistd.h>

void repeat(char s , int i )
{
    while (i > 0)
    {
        write(1,&s,1);
        i--;
    }
}

int main(int ac, char *av[])
{
    int i = 0 ;
    if (ac == 2)
    {
        while(av[1][i])
        {
        if(av[1][i] >= 'a' && av[1][i] <='z')
        {
            // while(av[1][i])
            // {
            repeat(av[1][i] ,av[1][i] + 1 - 'a');
            // write(1,&av[1][i],1);
            // i++;
            // }
        }
        else if(av[1][i] >= 'A' && av[1][i] <='Z')
        {
            // while(av[1][i])
            // {
                repeat(av[1][i] ,av[1][i] + 1 - 'A');

                // write(1,&av[1][i],1);
                // i++;
            // }
        }
        else 
            write(1,&av[1][i],1);
        i++;
        }
    }
    write(1,"\n",1);
    return 0;
}
