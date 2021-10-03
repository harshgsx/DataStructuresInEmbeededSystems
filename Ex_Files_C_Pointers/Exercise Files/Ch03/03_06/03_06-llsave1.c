#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16

/* define structure externally to ensure
   that it's available to all functions */
struct item {
	int id;
	char name[SIZE];
	float price;
	struct item *next;
};

/* allocate a new structure */
struct item *allocate(void)
{
	struct item *p;

	p = (struct item *)malloc( sizeof(struct item) * 1);
	if( p==NULL )
	{
		fprintf(stderr,"Unable to allocate memory\n");
		exit(1);
	}

	return(p);
}

/* fill the structure */
void fill(struct item *s, int i)
{
	char *fruit[] = { "apples", "bananas", "grapes", "strawberries", "watermelon" };
	float prices[] = { 1.20, 2.58, 2.09, 2.40, 0.51 };

	s->id = i;
	strcpy(s->name,fruit[i]);
	s->price = prices[i];
}

/* output the list */
void output(struct item *s)
{
	while( s!=NULL )
	{
		printf("%d: %s for $%.2f/pound\n",
				s->id+1,
				s->name,
				s->price
			  );
		s = s->next;
	}
}

int main()
{
	struct item *first,*current;
	int x;
	FILE *fp;

	for(x=0; x<5; x++)
	{
		if( x==0 )
		{
			first = allocate();
			current = first;
		}
		else
		{
			current->next = allocate();
			current = current->next;
		}
		fill(current,x);
	}
	current->next = NULL;

	output(first);

	/* save the data */
	printf("Saving...");
	fp = fopen("lldata.dat","w");
	if( fp==NULL )
	{
		fprintf(stderr,"Unable to create file\n");
		exit(1);
	}

	/* write the five structures */
	fwrite(first,sizeof(struct item),5,fp);

	/* close the file */
	fclose(fp);
	puts("saved!");

	return(0);
}
