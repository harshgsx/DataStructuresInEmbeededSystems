#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16

/* read standard input, discard newline */
char *input(void)
{
	static char buffer[SIZE];
	char *r;
	int x;

	/* initialize the buffer */
	buffer[0]='\0';

	/* gather input */
	r = fgets(buffer,SIZE,stdin);
	if( r==NULL )
	{
		fprintf(stderr,"Input error\n");
		exit(1);
	}
	
	/* remove the newline */
	for(x=0; x<SIZE; x++)
	{
		/* remove newline */
		if( buffer[x]=='\n' )
		{
			buffer[x]='\0';
			break;
		}
	}

	return(buffer);
}

int main()
{
	struct item {
		int id;
		char name[SIZE];
		float price;
		struct item *next;
	};
	struct item *first,*current;
	char temp[SIZE];

	/* allocate initial structure */
	first = (struct item *)malloc( sizeof(struct item) * 1);
	if( first==NULL )
	{
		fprintf(stderr,"Unable to allocate memory\n");
		exit(1);
	}

	/* the first structure is now the current structure */
	current = first;

	/* fill structure */
	current->id = 1;
	printf("Record %d Fruit: ",current->id);
	strcpy(current->name,input() );
	printf("Price: ");
	strcpy(temp,input() );
	current->price = strtof(temp,NULL);
	/* don't forget to initialize the pointer! */
	current->next = NULL;

	/* output the contents */
	printf("%d: %s for %.2f/pound\n",
			current->id,
			current->name,
			current->price
		  );

	return(0);
}
