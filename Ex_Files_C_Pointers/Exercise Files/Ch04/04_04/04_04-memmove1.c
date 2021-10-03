#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a[] = { 100, 101, 102, 103, 104 };
	int x;

	memmove(&a[1],a, sizeof(int) * 4);

	for(x=0; x<5; x++)
		printf("%d\n",a[x]);

	return(0);
}
