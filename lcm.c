#include <unistd.h>
#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n = 2 ;
    if (!a || !b)
        return 0 ;
    while(n)
    {
        if ((n % a == 0 )&& (n % b == 0))
            return n ;
        n++;
    }
    return 0 ;
}
int main()
{
    printf("%u",lcm(23,324));
}