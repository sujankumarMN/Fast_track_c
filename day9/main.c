#include<stdio.h>
#include "header.h"

int main()
{
	FILE *ptr;
	FILE *cpy;
	//file_r(ptr);
	//file_rp(ptr);
	//file_a(ptr);
	file_r(ptr);

	file_copy(ptr,cpy);
	odd_even();

	
}