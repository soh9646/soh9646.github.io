#include <stdio.h>

int fns(int);

main()
{
	int a;
	
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++)
	{
		printf("%d ", fns(i));
	}
	

	
}

int fns(int a)
{
	if(a == 1)
		return 1; 
	else if(a == 0)
		return 0;
	else
		return fns(a-1) + fns(a-2);
}


//f0 = 0, f1 = 1, f2 = 1, f3 = 2
