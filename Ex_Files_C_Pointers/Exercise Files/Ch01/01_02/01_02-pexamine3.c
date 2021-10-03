#include <stdio.h>

int main()
{
	double a;
	/* must declare a double pointer to match
	   the double data type of 'a' */
	double *ptr;

	/* initialize variables! */
	a = 6.0221409e23;
	ptr = &a;

	printf("Value of variable 'a': %e\n",*ptr);
	printf("Address of variable 'a': %p\n",ptr);

	return(0);
}
