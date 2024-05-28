#include <unistd.h>
#include <stdio.h>

int valid(char c , int str_base)
{
    int i = 0 ;
    char s1[16]= "0123456789abcdef";
    char s2[16]= "0123456789ABCDEF";
    while(i < str_base)
    {
        if (c == s1[i] || c == s2[i])
        return 1;
        i++;
    }
    return 0;
}
int value(char n)
{
    if (n >= '0' && n <= '9')
        return n - '0';
    if (n >= 'a' && n <='f')
        return n - 'a' + 10 ;
    if (n >= 'A' && n <= 'Z')
        return n - 'A' + 10 ;
    return 0 ;
}
int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int j = 0 ;
    int signe = 1;

    while (str[i] == 32 || str[i] == '\t')
    {
        i++;
    }
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        signe = -1 ;
        i++;
    }
    while(valid(str[i],str_base))
    {
        j = j * str_base + value(str[i]);
        i++;
    }
    return j * signe ;
}
int main()
{
    printf("%d",ft_atoi_base("101",2));
}
