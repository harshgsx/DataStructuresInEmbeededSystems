#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10],x;

	/* fill storage */
	for( x=0; x<10; x++ )
	{
		a[x] = x * 100;
		/* a[x] ~ *(p+x) */
	}

	/* output the buffer's contents */
	for( x=0; x<10; x++ )
	{
		printf("%d\n",a[x] );
		/* a[x] ~ *(p+x) */
	}

	return(0);
}

