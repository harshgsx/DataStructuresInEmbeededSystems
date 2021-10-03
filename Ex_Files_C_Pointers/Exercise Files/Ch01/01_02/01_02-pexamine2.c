#include <stdio.h>

int main()
{
	int a;
	/* must declare an int pointer to match
	   the int variable data type of 'a' */
	int *ptr;

	/* initialize variables! */
	a = 12345;
	ptr = &a;

	printf("Value of variable 'a': %d\n",*ptr);
	printf("Address of variable 'a': %p\n",ptr);

	return(0);
}
