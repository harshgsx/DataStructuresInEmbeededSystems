#include <stdio.h>

int main()
{
	int a;

	/* initialize variables! */
	a = 12345;

	printf("Value of variable 'a': %d\n",a);
	/* the address may be different from system to system */
	printf("Address of variable 'a': %p\n",&a);
	/* integers typically occupy 4 bytes in modern systems */
	printf("Size of variable 'a': %lu\n",sizeof(a));
	/* try modifying this code to change 'int' to a 'long'
	   see how the sizeof value changes */

	return(0);
}
