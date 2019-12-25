#include <stdio.h>

int odd_sum(int);
 
main()
{
	int a, result;
	
	scanf("%d", &a);
	result = odd_sum(a);
	printf("%d\n", result);
	
}

int odd_sum(int a)
{
	if(a == 1)
	return 1;
	else if((a%2) == 0)
	return odd_sum(a-1);
	else
	return a + odd_sum(a-1);
}
