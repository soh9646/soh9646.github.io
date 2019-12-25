#include <stdio.h>
int factorial(int);
main()
{
	int result, n;
	printf("n팩토리얼을 구합니다.\n");
	printf("n을 입력하세요:");
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
