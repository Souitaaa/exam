/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 22:10:33 by csouita           #+#    #+#             */
/*   Updated: 2024/05/28 22:52:17 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *s1 ,char *s2 , int size)
{
    int i = 0 ;
    while(i <= size && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    return s1;
}
char **ft_split(char *str)
{
    int i = 0 ;
    int words = 0 ;
    int j = 0 ;
    while(str[i])
    {
        while(str[i] && (str[i] == 32 || str[i] == '\n' || str[i] == '\t'))
            i++;
        if (str[i])
            words++;
        i++;
        while(str[i] && (str[i] != 32 && str[i] != '\t'))
            i++;
    }
    i = 0 ;
    char **strs = malloc(sizeof(char *) * (words + 1));
    char *s;
    int end = 0 ;
    int start = 0;
    while(str[i])
    {
        while(str[i] == 32 || str[i] == '\t' || str[i] == '\n')
            i++;
        start = i ;
        while(str[i] != 32 && str[i] != '\t' && str[i] != '\n' )
            i++;
        end = i ;
        while(i >= start)
        {
            s = malloc(sizeof(char) * (end - start) + 1);
            ft_strncpy(s,&str[i],end - start);
            i++;
        }
   }
   return strs;
}
int main()
{
    char str[] = "This is a\ttest\nstring";
    char **result = ft_split(str);

    if (result)
    {
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("Word %d: %s\n", i, result[i]);
            free(result[i]);
        }
        free(result);
    }

    return 0;
}
