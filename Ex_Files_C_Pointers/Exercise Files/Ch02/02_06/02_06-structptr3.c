#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	struct person {
		char *name;
		int *age;
	} *first;

	/* allocate the structure's memory */
	first = (struct person *)malloc( sizeof(struct person) * 1);
	if( first==NULL )
	{
		fprintf(stderr,"Unable to allocate storage\n");
		exit(1);
	}
	/* allocate structure members */
	first->name = (char *)malloc( sizeof(char) * 32);
	first->age = (int *)malloc( sizeof(int) * 1);
	if( first->name==NULL || first->age==NULL )
	{
		fprintf(stderr,"Unable to allocate storage\n");
		exit(1);
	}

	/* assign structure members */
	strcpy(first->name,"George Washington");
	printf("How old was %s? ",first->name);
	/* first->age is still an integer variable */
	scanf("%d",first->age);

	/* output results */
	printf("%s was %d years old\n",
			first->name,
			*first->age
		 );

	return(0);
}
