#include <stdio.h>

int main()
{
	int a[5] = { 11, 22, 33, 44, 55 };
	int x,*p;

	/* initialize the pointer to the array
	   without the & (address-of) operator */
	p = a;
	/* loop throuh all five elements */
	for( x=0; x<5; x++ )
	{
		/* &a[x] is the address of element 'x' in array 'a' */
		/* p+x is the address of element offset 'x' from
		   base 'p' */
		printf("Address of element %d: %p = %p\n",
				x,
				&a[x],
				p+x
			  );
		/* a[x] is the value of element 'x' in array 'a' */
		/* *(p+x) is the value of element offset 'x' relative
		   to the base address stored in variable 'p' */
		printf("Value of element %d: %d = %d\n",
				x,
				a[x],
				*(p+x)
			  );
	}

	return(0);
}
/* Pointer notation isn't a substitute for array notation and
   vice-versa. Each has a different purpose and identity in
   the C language, though it's possible to represent array
   notation by using pointers, as shown in this example
   and in the movie. */
