#include <stdio.h>

int main()
{
	int age;

	printf("Your age: ");
	/* the second argument is a memory location,
	   the address of variable 'age' */
	scanf("%d",&age);
	printf("You claim to be %d years old\n",age);

	return(0);
}
