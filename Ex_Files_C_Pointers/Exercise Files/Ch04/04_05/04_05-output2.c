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
	void (*fp)(int a[]);

	fp = output;
	fp(numbers);

	return(0);
}
