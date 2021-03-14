#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int ctrl;
	int *ptr_ctrl;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	ctrl = 10;
	ptr_ctrl = &ctrl;
	ptr2 = &ptr_ctrl;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	printf("%d \n", *********ptr9);
	ft_ultimate_ft(ptr9);
	printf("%d \n", *********ptr9);
}
