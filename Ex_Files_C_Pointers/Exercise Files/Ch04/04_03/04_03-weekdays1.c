#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char weekdays[7][10] = {
		"Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday", "Friday", "Saturday"
	};
	char temp[10];
	int x,y;

	/* output original array */
	puts("Unsorted:");
	for( x=0; x<7; x++ )
		printf(" %s\n",weekdays[x]);

	/* sort the array, bubble sort */
	for( x=0; x<6; x++ )
	{
		for( y=x+1; y<7; y++ )
		{
			/* Sort alphabetically, A to Z */
			if( strcmp(weekdays[x],weekdays[y]) > 0 )
			{
				strcpy(temp,weekdays[x]);
				strcpy(weekdays[x],weekdays[y]);
				strcpy(weekdays[y],temp);
			}
		}
	}

	/* output the sorted result */
	puts("Sorted:");
	for( x=0; x<7; x++ )
		printf(" %s\n",weekdays[x]);

	return(0);
}
