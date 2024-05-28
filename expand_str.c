#include <stdio.h>
#include <unistd.h>

int main(int ac, char *av[])
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;
        while (av[1][i] == ' ' || av[1][i] == '\t' && i >= 0)
            i--;
        int awakher = i;
        i = 0;
        while (i <= awakher)
        {
            while ((av[1][i] == 32 || av[1][i] == '\t') && av[1][i])
                i++;
            int start = i;
            while ((av[1][i] != 32 && av[1][i] != '\t') && av[1][i])
                i++;
            int end = i - 1;
            while (start <= end)
            {
                write(1, &av[1][start], 1);
                start++;
            }
            if (i < awakher)
            {
                write(1,"   ",3);
                // write(1," ",1);
                // write(1," ",1);
            }

        }
    }
    write(1, "\n", 1);
    return 0;
}