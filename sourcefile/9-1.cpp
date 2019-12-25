#include <stdio.h>
main()
{
	char alpha = 'A';
	char *cp = &alpha;
	printf("%c %c\n", alpha, *cp);
	printf("%d %d\n", sizeof(char), sizeof(char*));
	printf("%d %d\n", sizeof(alpha), sizeof(cp));


/*	int a =10;
	int *ptr = &a;
	printf("%d %d ", a, *ptr);	*/
}
