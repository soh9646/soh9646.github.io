#include <stdio.h>
int GCM(int, int);
void BO(int*, int*);

main()
{
	
	int a, b;
	int result;
	scanf("%d %d", &a, &b);
		result = GCM(a, b);
	
	printf("%d", result);
	
}


int GCM(int a, int b)
{
	if(b == 0)
	{
		return a;
	}
	else
		return GCM(b, a%b);
}
