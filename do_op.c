#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
    int i = 0;
    if (ac == 4)
    {
        if (av[2][i] == '*')
            printf("%d",atoi(&av[1][i]) * atoi(&av[3][i]));
        if (av[2][i] == '+')
            printf("%d",atoi(&av[1][i]) + atoi(&av[3][i]));
        if (av[2][i] == '-')
            printf("%d",atoi(&av[1][i]) - atoi(&av[3][i]));
        if (av[2][i] == '/')
            printf("%d",atoi(&av[1][i]) / atoi(&av[3][i]));
        if (av[2][i] == '%')
            printf("%d",atoi(&av[1][i]) % atoi(&av[3][i])); 
    }
    write(1,"\n",1);
    return 0;
}
