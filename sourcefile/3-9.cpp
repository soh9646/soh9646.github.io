#include <stdio.h>
main()
{
	char addr[100];
	printf("input address\n");
	gets(addr);
	printf("%s\n", addr);
	printf("다시 한번 입력하세요.\n");
	scanf("%s", addr);
	printf("%s\n", addr); 
}
