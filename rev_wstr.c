/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:10:25 by csouita           #+#    #+#             */
/*   Updated: 2024/05/28 21:40:13 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>
 #include <stdio.h>

 int main(int ac, char *av[])
 {
    int flag ;
    int i = 0 ;
    int end ;
    int start;
    
    if (ac == 2)
    {
        while(av[1][i])
            i++;
        while(i >= 0)
        {
            while(!av[1][i] || av[1][i] == 32 || av[1][i] == '\t')
              i--;
            end = i ;
            while(av[1][i] && av[1][i] != 32 && av[1][i] != '\t')
                i--;
            start = i + 1;
            flag = start ;
            while(start <= end)
            {
                write(1,&av[1][start],1);
                start++;
            }
            if (flag)
                write(1," ",1);
        }
    }
    write(1,"\n",1);
    return 0;
 }
 