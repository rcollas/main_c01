#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int tab[5] = {10, -5, 7, 0, 12637};
	int size = 5;
	int i;

	printf("Tableau original : ");
	for(i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);	
	}
	ft_rev_int_tab(tab, size);
	printf("\nTableau inverse : ");
	for(i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
}
