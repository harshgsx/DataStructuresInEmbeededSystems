#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct person {
		char name[32];
		int age;
	} president = {
		"George Washington",
		59
	};
	struct person *first;

	/* output regular structure */
	printf("%s is %d years old\n",
			president.name,
			president.age
		 );

	/* assign structure pointer */
	first = &president;

	/* output pointer reference */
	printf("%s is %d years old\n",
			first->name,
			first->age
		 );

	return(0);
}
