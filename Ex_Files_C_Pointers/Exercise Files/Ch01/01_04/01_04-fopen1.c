#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;

	fp = fopen("01_04-fopen1.c","r");
	/* always test the pointer returned from a function */
	if( fp==NULL )
	{
		/* exit upon function failure */
		fprintf(stderr,"Unable to open file\n");
		exit(1);
	}
	puts("File opened!");
	/* close the file */
	fclose(fp);

	return(0);
}
