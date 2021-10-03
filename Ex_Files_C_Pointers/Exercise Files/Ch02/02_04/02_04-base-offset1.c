#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p,x;

	/* allocate storage */
	p = (int *)malloc( sizeof(int) * 10 );
	if( p==NULL )
	{
		fprintf(stderr,"Allocation failure\n");
		exit(1);
	}

	/* fill storage */
	for( x=0; x<10; x++ )
	{
		/* use offset; retain p */
		*(p+x) = x * 100;
	}
	puts("Memory allocated and filled");

	/* output the buffer's contents */
	for( x=0; x<10; x++ )
	{
		printf("%d\n",*(p+x) );
	}

	return(0);
}

