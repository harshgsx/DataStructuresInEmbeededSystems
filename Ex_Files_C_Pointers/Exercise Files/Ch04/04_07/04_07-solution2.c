#include <stdio.h>
#include <stdlib.h>

/* allocate pointer and assign text */ 
void get_input(char **b)
{
	int x;

	/* allocate the buffer */
	*b = (char *)malloc( sizeof(char) * 16 );
	if( *b==NULL )
	{
		fprintf(stderr,"Unable to allocate buffer\n");
		exit(1);
	}

	/* read in text */
	fgets(*b,16,stdin);

	/* remove the newline */
	for( x=0; x<16; x++ )
	{
		/* search for newline */
		if( *(*b+x)=='\n' )
		{
			/* replace with null character */
			*(*b+x)='\0';
			/* exit loop */
			break;
		}
	}
}

/* create the array of pointers and output the results */
int main()
{
	char *names[5];
	int x;

	/* read the names */
	for( x=0; x<5;x++ )
	{
		printf("Name #%d: ",x+1);
		get_input( &names[x] );
	}

	/* output the results */
	for( x=0; x<5;x++ )
		printf("%s\n",names[x]);

	return(0);
}
