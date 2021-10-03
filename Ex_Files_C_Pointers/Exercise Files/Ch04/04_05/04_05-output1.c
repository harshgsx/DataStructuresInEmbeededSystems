#include <stdio.h>

void output(int a[])
{
	int x;

	for(x=0; x<5; x++)
		printf("%d\n",a[x]);
}

int main()
{
	int numbers[] = { 3, 5, 7, 9, 11 };

	output(numbers);

	return(0);
}
