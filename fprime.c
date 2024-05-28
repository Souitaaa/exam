/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:04:03 by csouita           #+#    #+#             */
/*   Updated: 2024/05/27 16:17:50 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
    if (ac == 2)
    {
        int number = atoi(av[1]);
        int i = 2;
        if (number == 1)
        {
            printf("1\n");
            return 0;
        }
        while (number > 1)
        {
            if (number % i == 0)
            {
                printf("%d",i);
                number = number/i;
                if (number > 1)
                {
                    printf("*");
                }
                i--;
            }
            i++;
        }
        
    }
    printf("\n");
    return 0;
}
