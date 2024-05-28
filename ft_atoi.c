#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int signe = 1 ;
    int i = 0;
    int res = 0;
    while (str[i] == 32 || str[i] == '\t')
    i++;
    if(str[i] == '-')
    signe = -1;
    if (str[i] == '+')
    i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0' ;
        i++;
    }
    return res * signe ;
}
int main ()
{
    printf("%d",ft_atoi("24"));
}