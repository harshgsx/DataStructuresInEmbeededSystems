#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *base,*p,x;

	/* allocate storage */
	base = (int *)malloc( sizeof(int) * 10 );
	if( base==NULL )
	{
		fprintf(stderr,"Allocation failure\n");
		exit(1);
	}

	/* retain the base */
	p = base;
	/* fill storage */
	for( x=0; x<10; x++ )
	{
		*p = x * 100;
		/* reference the next integer location */
		p++;
	}
	puts("Memory allocated and filled");

	/* output the buffer's contents */
	p = base;
	for( x=0; x<10; x++ )
	{
		printf("%d\n",*p);
		p++;
	}

	return(0);
}

