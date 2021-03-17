#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int num;
	int den;
	int nb1;
	int nb2;

	nb1 = 10;
	nb2 = 5;
	num = 10;
	den = 5;
	ft_ultimate_div_mod(&num, &den);
	printf("%d / %d = %d\n", nb1, nb2, num);
	printf("%d mod %d = %d\n", nb1, nb2, den);
}
