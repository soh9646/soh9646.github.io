#include <stdio.h>
int factorial(int);
main()
{
	int result, n;
	printf("n���丮���� ���մϴ�.\n");
	printf("n�� �Է��ϼ���:");
	scanf("%d", &n);
	result = factorial(n);
	printf("%d! = %d\n", n, result);
}

int factorial(int n)
{
	printf("factorial(%d)\n", n);
	if(n <= 1)
		return(1);
	else
		return(n * factorial(n - 1));
}
