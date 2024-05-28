void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int	temp;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i+ 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
#include <stdio.h>

int main() {
    int array[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    // unsigned int size = sizeof(array) / sizeof(array[0]);

    sort_int_tab(array,11);

    printf("Sorted array:\n");
    for (unsigned int i = 0; i < 15; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
