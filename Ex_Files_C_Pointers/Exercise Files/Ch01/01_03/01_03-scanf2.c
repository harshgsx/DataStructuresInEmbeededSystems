#include <stdio.h>

int main()
{
	int age;
	int *aptr;

	/* must always initialize a pointer */
	aptr = &age;

	printf("Your age: ");
	/* as an address, the pointer is passed directly */
	scanf("%d",aptr);
	/* the asterisk operator is used to obtain the
	   value referenced by the pointer, the value
	   of variable 'age' */
	printf("You claim to be %d years old\n",*aptr);

	return(0);
}
