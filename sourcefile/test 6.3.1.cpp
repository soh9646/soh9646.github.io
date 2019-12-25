#include <stdio.h>
int sum(int);

main()
{
	
	int result;
	result = sum(5);
	
	printf("%d", result);
	
}

int sum(int x)
{
	if(x < 1)
		return 1;
	else
		return (x + sum(x - 1));
}
