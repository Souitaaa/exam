#include <stdio.h>

char *ft_strrev(char *str)
{
    char c ;
    int i = 0 ;
    int j = -1 ;

    while(str[i])
    i++;
    while(++j < i/2)
    {
        // printf("Ddddddd");
        c = str[j]; 
        str[j] = str[i - 1 -j];
        str[i - 1 -j] = c ;
    }
    // printf("%d",i);
    return str;
}

int main()
{
    char str[] ="charaf";
    printf("%s",ft_strrev(str));
}