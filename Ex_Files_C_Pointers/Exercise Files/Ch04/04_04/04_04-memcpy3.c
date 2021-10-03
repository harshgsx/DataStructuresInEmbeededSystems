#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct person {
		char name[8];
		int age;
	} man = { "Paul", 64 };
	void *buffer;
	int *bufint;
	char *bufchar;

	/* allocate the void buffer */
	buffer = malloc( sizeof(struct person) );
	if( buffer==NULL )
	{
		fprintf(stderr,"Unable to allocate memory\n");
		exit(1);
	}

	/* copy memory */
	memcpy(buffer,&man,sizeof(struct person));
	
	/* initialize the data type pointers */
	bufchar = (char *)buffer;
	bufint = (int *)(buffer+8);

	/* the string referenced by bufchar is a
	   pointer, but the contents of bufint
	   are required, so it's prefixed with
	   the asterisk operator */
	printf("%s is %d years old\n",bufchar,*bufint);

	return(0);
}
