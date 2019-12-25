#include <stdio.h>
void plus_ref(int *a);
main()
{
	int x;
	x = 10;
	printf("함수 호출 전 x = %d\n", x);
	plus_ref(&x);
	printf("함수 호출 후 x = %d\n", x); 
 } 
 
 void plus_ref(int *a)
 {
 	*a = *a + 1; 
 }
