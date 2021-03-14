#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int ctrl_1;
	int ctrl_2;
	int *ptr_ctrl_1;
	int *ptr_ctrl_2;

	ctrl_1 = 10;
	ctrl_2 = 6;
	ptr_ctrl_1 = &ctrl_1;
	ptr_ctrl_2 = &ctrl_2;
	printf("Avant swap :\n");
	printf("nb1 = %d\n", *ptr_ctrl_1);
	printf("nb2 = %d\n", *ptr_ctrl_2);
	ft_swap(ptr_ctrl_1, ptr_ctrl_2);
	printf("Après swap :\n");
	printf("nb1 = %d\n", *ptr_ctrl_1);
	printf("nb2 = %d\n", *ptr_ctrl_2);
}
