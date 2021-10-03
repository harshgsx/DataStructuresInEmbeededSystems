#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *day0 = "Sunday";
	char *day1 = "Monday";
	char *day2 = "Tuesday";
	char *day3 = "Wednesday";
	char *day4 = "Thursday";
	char *day5 = "Friday";
	char *day6 = "Saturday";
	char **week;
	int x;

	week = (char **)malloc( sizeof(char *) * 7);
	if( week==NULL )
	{
		fprintf(stderr,"Unable to allocate array\n");
		exit(1);
	}

	*(week+0) = day0;
	*(week+1) = day1;
	*(week+2) = day2;
	*(week+3) = day3;
	*(week+4) = day4;
	*(week+5) = day5;
	*(week+6) = day6;

	for( x=0; x<7; x++)
		printf("%s\n",*(week+x) );

	return(0);
}
