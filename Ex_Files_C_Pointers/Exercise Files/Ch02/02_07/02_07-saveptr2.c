#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct human {
		char *name;
		int age;
	} *towrite;
	const char filename[] = "saved.dat";
	char *r;
	FILE *fp;

	/* allocate structure */
	towrite = (struct human *)malloc( sizeof(struct human) * 1);
	if( towrite==NULL )
	{
		fprintf(stderr,"Unable to allocate structure memory\n");
		exit(1);
	}
	/* now that structure is allocated, allocate storage
	   for the name pointer */
	towrite->name = (char *)malloc( sizeof(char) * 32);
	if( towrite->name==NULL )
	{
		fprintf(stderr,"Unable to allocate string memory\n");
		exit(1);
	}

	/* fill the towrite structure; prompt the user */
	printf("Enter your name: ");
	r = fgets(towrite->name,32,stdin);
	/* check for input error */
	if( r==NULL )
	{
		fprintf(stderr,"Input error\n");
		exit(1);
	}
	printf("How old are you: ");
	/* towrite->age is an integer, not a pointer, so
	   the ampersand is required */
	scanf("%d",&towrite->age);

	/* write the structure to a file */
	/* open the file */
	fp = fopen(filename,"w");
	if( fp==NULL )
	{
		fprintf(stderr,"Unable to create %s\n",filename);
		exit(1);
	}
	/* write the structure */
	fwrite(towrite,sizeof(struct human),1,fp);
	/* close the file */
	fclose(fp);
	printf("Data written to %s\n",filename);
	
	return(0);
}
