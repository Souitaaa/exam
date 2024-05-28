#include <unistd.h>

int ft_atoi(const char str)
{
    int i = 0;
    int s = 1;
    int res = 0;
    while (str[i] == ' ' str[i] == '\t')
    {
        i++;
    }

    if (str[i] == '+' str[i] == '-')
    {
        if (str[i] == '-')
            s = -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res 10 + (str[i] - '0');
        i++;
    }
    return (res * s);
}

int is_prime(int n)
{
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void put_nb(int n)
{
    if (n >= 0 && n <= 9)
        ft_putchar(n + 48);
    else
    {
        put_nb(n / 10);
        put_nb(n % 10);
    }
}

int main(int ac, char *av[])
{
    if (ac == 2 && ft_atoi(av[1]) > 2)
    {
        int n = ft_atoi(av[1]);
        int prime = n;
        if (is_prime(n))
        {
            while (--n >= 2)
            {
                if (is_prime(n))
                    prime += n;
            }

            put_nb(prime);
            write(1, "\n", 1);
        }
        else
            write(1, "0\n", 2);
    }
    else
        write(1, "0\n", 2);
}