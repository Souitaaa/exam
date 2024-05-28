#include <stdio.h>
#include <unistd.h>

int ft_atpi_base(const char *str, int str_base)
{
    int s = 1;
    char *base = "0123456789abcdef";
    char *base2 = "0123456789ABCDEF";
    int i = 0;
    int j = 0;
    int res = 0;
    if (str[0] == '-')
    {
        s = -1;
        j++;
    }
    while (str[j])
    {
        while (i <= str_base)
        {
            if (str[j] == base[i] || str[i] == base2[i])
                break;
            i++;
        }
        if (i > str_base)
            break;
        j++;
        res = (res * str_base) + i;
        i = 0;
    }
    return (res * s);
}



int main(int argc, char const *argv[])
{
    printf("%d\n",ft_atpi_base("1212",2));
    return 0;
}
