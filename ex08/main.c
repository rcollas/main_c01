#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int my_tab[5] = {234, 0, -234, 2436, 0};
	int size = 5;
	int i;

	printf("Tableau original : ");
	for(i = 0; i < size; i++)
	{
		printf("%d ", my_tab[i]);
	}
	ft_sort_int_tab(my_tab, size);
	printf("\nTableau ordonne : ");
	for(i = 0; i < size; i++)
	{
		printf("%d ", my_tab[i]);
	}
}
