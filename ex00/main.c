#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int control;
	int *ptr_ctrl;

	control = 10;
	ptr_ctrl = &control;
	printf("%d \n", *ptr_ctrl);
	ft_ft(ptr_ctrl);
	printf("%d \n", *ptr_ctrl);
}
