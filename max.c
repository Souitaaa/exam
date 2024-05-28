#include <stdio.h>
#include <unistd.h>

int		max(int* tab, unsigned int len)
{
    int res ;
    unsigned int i = 0;

    if (len == 0 )
        return 0;
    res = tab[i] ;
    while(i < len)
    {
        if (res < tab[i])
            res = tab[i];
        i++;
    }
    return res ;
}

int main ()
{
    int tab[] = {1,1,3,-3,535,566,46,7};
    printf("%d",max(tab,7));
}