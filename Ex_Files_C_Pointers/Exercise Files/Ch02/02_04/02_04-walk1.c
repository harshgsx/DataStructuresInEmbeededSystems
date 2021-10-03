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
		*p = x * 100;
		/* reference the next integer location */
		p++;
	}
	puts("Memory allocated and filled");

	return(0);
}

