#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i = 0 ;
    int j = 0 ;

    while (str[i] == 32 || str[i] == '\t')
        i++;
    while(str[i])
    {
        j = j * 10 + str[i] - 48 ;
        i++; 
    }
    return j;
}
void print_hex(int n)
{
    int i = 0 ;
    char str[16] = "0123456789abcdef";
    if (n >= 16)
        print_hex(n / 16);
    write(1,&str[n % 16],1);

}
int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int n = ft_atoi(av[1]);
        print_hex(n);
    }
    write(1,"\n",1);
    return 0;
}
