#include <stdio.h>
main()
{
	double a,b;
	char c;
	
	scanf("%lf", &a);
	getchar();
	scanf("%lf", &b);
	getchar();
	scanf("%c", &c);
	getchar();

	printf("%.2f\n", a);
	printf("%.2f\n", b);
	printf("%c", c);
	}
