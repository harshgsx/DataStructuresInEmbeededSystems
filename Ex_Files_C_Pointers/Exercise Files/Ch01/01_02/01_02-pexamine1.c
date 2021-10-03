#include <stdio.h>

int main()
{
	char a;
	char *ptr;

	/* initialize variables! */
	a = 'A';
	ptr = &a;

	printf("Value of variable 'a': %c\n",*ptr);
	printf("Address of variable 'a': %p\n",ptr);

	return(0);
}
