/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:03:57 by csouita           #+#    #+#             */
/*   Updated: 2024/05/28 18:23:07 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_counts_digits(int number)
{
    int i = 1;

    while(number)
    {
        i++;
        number /= 10;
    }
    return i ;
}

char	*ft_itoa(int nbr)
{
    size_t len = 0;
    char  *str ;
    long number;
    
    number = nbr ;
    
    // if(!number)
    //     return "0";
    if (nbr < 0)
    {
        len++;
        number = -nbr ; 
    }
    len =+ ft_counts_digits(nbr);

    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return NULL;
    str[len--] = '\0';
    str[len--] = (number % 10) + '0' ;
    number /= 10;
    while(number)
    {
        str[len--] = (number % 10) + '0' ;
        
        number /= 10;
    }
    // printf("%d\n", len);
    if (nbr < 0)
        str[0] = '-';
    return str;
}

int main(int argc, char const *argv[])
{
    printf("%s\n",ft_itoa(0));
    return 0;
}


