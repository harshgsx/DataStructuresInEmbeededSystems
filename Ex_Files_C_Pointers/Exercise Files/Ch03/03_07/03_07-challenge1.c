#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16
enum { FALSE, TRUE };
struct family {
	char name[SIZE];
	char relationship[SIZE];
	int age;
	struct family *next;
};

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
	struct family *first,*current;
	int done;
	char command[SIZE];

	/* initialize first record to NULL */
	first = NULL;

	/* main menu and input loop */
	done = FALSE;
	puts("Family Database");
	while(!done)
	{
		/* initialize the current pointer to
		   the start of the list */
		current = first;
		/* output menu */
		puts("Menu:");
		puts("A - Add record");
		puts("D - Delete record");
		puts("L - List all records");
		puts("O - Open");
		puts("S - Save");
		puts("Q - Quit");
		printf("Choice: ");
		/* read input */
		strcpy(command,input() );
		/* process selection */
		switch(command[0])
		{
			/* add a record */
			case 'A':
			case 'a':
				break;
			/* delete a record */
			case 'D':
			case 'd':
				break;
			/* list all records */
			case 'L':
			case 'l':
				break;
			/* open/retrieve existing records */
			case 'O':
			case 'o':
				break;
			/* save all records */
			case 'S':
			case 's':
				break;
			/* quit the program */
			case 'Q':
			case 'q':
				done = TRUE;
				puts("Bye!");
				break;
			/* something weird typed */
			default:
				puts("Unrecognized command");
		}
	}

	return(0);
}
