#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct person {
		char name[8];
		int age;
	} man = { "Paul", 64 };
	unsigned char *buffer;
	int x;

	/* output the structure */
	printf("%s is %d years old\n",man.name,man.age);

	/* allocate the unsigned char buffer */
	buffer = (unsigned char *)malloc( sizeof(struct person) );
	if( buffer==NULL )
	{
		fprintf(stderr,"Unable to allocate memory\n");
		exit(1);
	}

	/* copy memory */
	memcpy(buffer,&man,sizeof(struct person));
	
	/* dump the buffer */
	puts("Buffer dump:");
	for( x=0; x<(int)sizeof(struct person); x++ )
	{
		printf(" %02X",*(buffer+x));
	}
	putchar('\n');

	return(0);
}
