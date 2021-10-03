#include <stdio.h>

int main()
{
	int a[5] = { 11, 22, 33, 44, 55 };
	int x;

	for( x=0; x<5; x++ )
		printf("%p\n",&a[x]);

	return(0);
}
