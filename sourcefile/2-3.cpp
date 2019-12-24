#include <stdio.h>
main()
{
	char c[10] = {'a', 'b', 'c', '\r', 'b', '\0'};
	printf("%s\n",c);
}
