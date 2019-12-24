#include <stdio.h>
main()
{
	int x = 10, y = 20, z;
	printf("x = %d, y = %d\n", x , y);
	z = (x + y, x - y);
	printf("z = (x + y, x - y) 값은 %d\n", z);
	z = x + y, x - y;
	printf("z = x + y, x - y 값은 %d\n", z);
	printf("hello\n"), printf("C world\n");	
} 
