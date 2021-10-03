#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *storage;
	int x;

	storage = (int *)malloc( sizeof(int) * 5);
	if( storage==NULL )
	{
		fprintf(stderr,"Allocation failed\n");
		exit(1);
	}
	puts("Memory allocated");
	/* the memory is allocated, but uninitialized
	   values output are garbage */
	for( x=0; x<5; x++ )
		printf("%d\n",*(storage+x) );

	return(0);
}
