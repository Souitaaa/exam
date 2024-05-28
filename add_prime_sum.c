#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int res = 0;
    int i = 0;

    while (str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int num)
{
    if (num >= 0 && num <= 9)
        ft_putchar(num + 48);
    else
    {
        ft_putnbr(num / 10);
        ft_putnbr(num % 10);
    }
}
int is_prime(int n)
{
    int i = 2;
    while (n > i)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}
int main(int ac, char *av[])
{
    int i = 0;
    if (ac == 2 && av[1][i] > 2)
    {
        int n = ft_atoi(av[1]);
        int prime = n;
        if (is_prime(n))
        {
            while (--n > 2)
            {
                if (is_prime(n))
                    prime += n;
            }
            ft_putnbr(prime);
            write(1, "\n", 1);
        }
        else
            write(1, "0\n", 2);
    }
    else
        write(1, "\n", 2);
    return 0;
}
