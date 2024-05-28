#include<stdio.h>
#include<stdlib.h>
int is_valid(char str,int basenum)
{
    char base[16] = "0123456789abcdef";
    char base2[16] = "0123456789ABCDEF";
    int i = 0;
    while (i < basenum)
    {
        if (base[i] == str || base2[i] == str) 
            return 1;
        i++;
    }
    return 0;
}
int value_of(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;  
    return 0;
}

int        ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int  j = 0;
    int sign = 1;

    while (str[i] <= 32 || str[i] == '\t')
        i++;
    if(str[i] == '+')
        i++;
    else if(str[i] == '-')
    {
        i++;
        sign = -1;
    }
    while (is_valid(str[i],str_base))
    {
        j = j * str_base + value_of(str[i]);
        i++;
    }
    return j * sign;
}

int main(int a , char ** f)
{
    printf("%d\n",ft_atoi_base(f[1],atoi(f[2])));
    return 0;
}