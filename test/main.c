#include<stdio.h>
#include<assert.h>
#include<string.h>
#include "header.h"

int main()
{
	char name[]="movie.txt";
	Array my_arr;
	int n;
	assert(file_read("movie.txt")==READ_SUCCESS);
	//print_file(name);
	my_arr=init();
	my_arr=read_line(name,my_arr);
	assert(my_arr.c_size==41&&my_arr.t_size==41);
	assert(!(strcmp(my_arr.arr[my_arr.c_size-1].name,"Tumhari_Sulu")));
	
	count(my_arr);
	assert(my_arr.t_size==41);

	top5_imdb(my_arr);

	max_min(my_arr);

	popular(my_arr);

}
