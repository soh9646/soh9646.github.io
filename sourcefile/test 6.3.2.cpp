#include <stdio.h>
int recu(int);

main()
{
	
	int result;
	result = recu(10);
	
	printf("%d", result);
	
}

int recu(int x)
{
	if(x < 1)
		return  - 1;
	else
		return (1 + recu(x-4));
}
