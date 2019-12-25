#include <stdio.h>
main()
{
	int i = 3, j = 5;
	int *ip, *jp;
	ip = &i;
	jp = &j;
	*ip += 5;
	*jp = *ip - *jp;
	jp = ip;
	*ip *= *jp;
	printf("i = %d, j = %d\n", i, j);
	printf("*ip = %d, *jp = %d \n", *ip, *jp);
}
