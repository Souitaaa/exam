/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:21:19 by csouita           #+#    #+#             */
/*   Updated: 2024/05/27 17:33:17 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int i = 2 ;
        int number = atoi(av[1]);
        if (number == 1)
        {
            printf("1\n");
            return 0 ;
        }
        while(number > 1)
        {
            if (number % i == 0)
            {
                printf("%d",i);
                number = number/i;
            
            if (number > 1)
                printf("*");
            i--;
            }
        i++;
        }
    }
    printf("\n");
    return 0;
}
