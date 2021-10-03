#include <stdio.h>
#include <stdlib.h>

void fill(int **n)
{
	int x;

	*n = (int *)malloc( sizeof(int) * 4);
	if( *n==NULL )
	{
		fprintf(stderr,"Unable to allocate memory\n");
		exit(1);
	}

	for(x=0; x<4; x++)
	{
		*(*n+x) = (x+1)*11;
		printf("%d ",*(*n+x) );
	}
	putchar('\n');
}

int main()
{
	int *numbers;
	int x;

	fill(&numbers);
	for(x=0; x<4; x++)
	{
		printf("%d ",*(numbers+x) );
	}
	putchar('\n');

	return(0);
}
