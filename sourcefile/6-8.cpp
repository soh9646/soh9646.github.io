#include <stdio.h>
void plus_ref(int *a);
main()
{
	int x;
	x = 10;
	printf("�Լ� ȣ�� �� x = %d\n", x);
	plus_ref(&x);
	printf("�Լ� ȣ�� �� x = %d\n", x); 
 } 
 
 void plus_ref(int *a)
 {
 	*a = *a + 1; 
 }
