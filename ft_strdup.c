#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> 

char *ft_strdup(char *str)
{
    int i = 0;
    if (!str)
    return NULL;
    char *s = malloc(sizeof(char *) + 1);
    if (!s)
    return NULL;
    while (str[i])
    {
        s[i] = str[i] ;
        i++;
    }
    s[i +1] = '\0';
    return s;
}

int main ()
{
    printf("%s",ft_strdup("Souita"));
}