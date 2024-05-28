#include <stdio.h>
#include <unistd.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    if (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i]-s2[i]);
}

int main ()
{
        printf("%d",ft_strcmp("321","321"));
}