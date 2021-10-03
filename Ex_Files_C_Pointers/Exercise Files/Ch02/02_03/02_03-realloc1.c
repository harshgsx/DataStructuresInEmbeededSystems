#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *storage;
	int x;

	/* use malloc to set the buffer size to
	   store five integers */
	storage = (int *)malloc( sizeof(int) * 5);
	if( storage==NULL )
	{
		fprintf(stderr,"Allocation failed\n");
		exit(1);
	}
	puts("Memory allocated");
	/* initialize and output the values */
	for( x=0; x<5; x++ )
	{
		*(storage+x) = (x+1) * 11;
		printf("%d\n",*(storage+x) );
	}

	/* now increase the buffer size by two
	   integer values */
	storage = (int *)realloc(storage, sizeof(int) * 7 );
	if( storage==NULL )
	{
		fprintf(stderr,"Reallocation failed\n");
		exit(1);
	}
	puts("Buffer re-sized");
	/* add the final two values */
	*(storage+5) = 66; 
	*(storage+6) = 77; 
	/* output the results */
	for( x=0; x<7; x++ )
	{
		printf("%d\n",*(storage+x) );
	}

	return(0);
}
