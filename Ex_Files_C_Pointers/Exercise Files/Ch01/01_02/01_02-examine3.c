#include <stdio.h>

int main()
{
	double a;

	/* initialize variables! */
	a = 6.0221409e23;

	printf("Value of variable 'a': %e\n",a);
	/* addresses differ from system to system */
	printf("Address of variable 'a': %p\n",&a);
	/* consider changing 'double' to 'float' to see
	   whether the sizeof value changes */
	printf("Size of variable 'a': %lu\n",sizeof(a));

	return(0);
}
