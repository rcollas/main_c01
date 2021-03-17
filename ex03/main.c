#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int div;
	int mod;
	int num;
	int den;
	int *ptr_div;
	int *ptr_mod;

	num = 10;
	den = 5;
	ptr_div = &div;
	ptr_mod = &mod;
	ft_div_mod(num, den, ptr_div, ptr_mod);
	printf("%d / %d = %d\n", num, den, *ptr_div);
	printf("%d mod %d = %d\n", num, den, *ptr_mod);
}
