#include <stdio.h>
#define MAX 20
void subprintf(int);
main()
{
	int i;
	for(i = 1; i <= MAX; i++)
	{
		subprintf(i);
	}
}
void subprintf(int i)
{
	printf("%d\n", i);
}
