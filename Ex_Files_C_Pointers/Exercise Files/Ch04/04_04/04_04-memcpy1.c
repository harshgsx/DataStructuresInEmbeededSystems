#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a[] = { 100, 101, 102, 103 };
	int b[4];
	int x;

	memcpy(b,a, sizeof(int) * 4);

	for(x=0; x<4; x++)
		printf("%d = %d\n",a[x],b[x]);

	return(0);
}
