#include <stdio.h>
void swap(int *x, int * y);
main()
{
	int a = 10, b = 20;
	printf("ȣ�� ��  a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("ȣ�� �� a = %d, b = %d\n", a, b);
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("�Լ� �� x = %d, y = %d\n", *x, *y);
}
