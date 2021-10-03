#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct human {
		char name[32];
		int age;
	} *toread;
	const char filename[] = "saved.dat";
	FILE *fp;

	/* allocate structure */
	toread = (struct human *)malloc( sizeof(struct human) * 1);
	if( toread==NULL )
	{
		fprintf(stderr,"Unable to allocate structure memory\n");
		exit(1);
	}

	/* read the structure into memory */
	/* open the file */
	fp = fopen(filename,"r");
	if( fp==NULL )
	{
		fprintf(stderr,"Unable to read from %s\n",filename);
		exit(1);
	}
	/* read in the structure */
	fread(toread,sizeof(struct human),1,fp);
	/* close the file */
	fclose(fp);

	/* output results */
	puts("Data read:");
	/* The 'name' member probably ends in a newline */
	printf("Name: %sAge: %d\n",
			toread->name,
			toread->age
		  );
	
	return(0);
}
