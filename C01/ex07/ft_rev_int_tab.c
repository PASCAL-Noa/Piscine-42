#include <stdio.h>

void	ft8rev8int8tab(int *tab, int size);

int	main(void)
{
	int tab[] = {1, 2, 3 ,4, 5};
	int size = 5;
	int i;

	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 -i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

/*/////////////////////////////////////////////////// */

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {3, 5, 4, 1, 2};
	int	size = 5;
	int	i;

	printf("Avant tri : ");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("Avant tri : ");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
