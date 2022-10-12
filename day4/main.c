#include<assert.h>
#include<stdio.h>
#include "header.h"

int main()
{
	/*int a[MAX_SIZE],sum;
	array_insert(a,MAX_SIZE);
	display_array(a);
	array_ascending(a);
	display_array(a);
	array_descending(a);
	display_array(a);
	remove_duplicate(a);
	sum=soop(a);
	printf("\n%d\n",sum );*/

	char str[]="sujan";
	lower_upper(str);

	int a[ROW_SIZE][COL_SIZE];
	array_insert_2d(a,ROW_SIZE,COL_SIZE);
	display_array_2d(a,ROW_SIZE,COL_SIZE);

	int b[ROW_SIZE][COL_SIZE];
	array_insert_2d(b,ROW_SIZE,COL_SIZE);
	display_array_2d(b,ROW_SIZE,COL_SIZE);

	int s[ROW_SIZE][COL_SIZE];
	sum(a,b,s);
	display_array_2d(s,ROW_SIZE,COL_SIZE);


}