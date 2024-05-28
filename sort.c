/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:23:31 by csouita           #+#    #+#             */
/*   Updated: 2024/05/28 19:28:49 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0 ;
    int tmp ;
    while(i < size -1)
    {
        if (tab[i] > tab[i +1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp ;
            i  = 0;
        }
        i++;
    }
}
int main() {
    int array[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    unsigned int size = sizeof(array) / sizeof(array[0]);

    sort_int_tab(array, size);

    printf("Sorted array:\n");
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
