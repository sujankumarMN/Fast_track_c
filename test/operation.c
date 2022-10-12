#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "header.h"


//function to read the file
int file_read(char doc[])
{
	FILE *fp;
	fp=fopen(doc,"r");
	char ch;

	
	return READ_SUCCESS;
	
	fclose(fp);
}

//function to display the content of file
void print_file(char doc[])
{
	FILE *fp;
	fp=fopen(doc,"r");
	char ch;

	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		putchar(ch);
	}
		
	fclose(fp);
}

Array init()
{
	Array array;
	array.c_size=0;
	array.t_size=num_of_line("movie.txt");
	return array;
}
int num_of_line(char doc[])
{
	FILE *fp;
	fp=fopen(doc,"r");
	int count=0;
	char c;
	for(c=fgetc(fp);c!=EOF;c=fgetc(fp))
	{
		if(c=='\n')
			count++;
	}
	return count;
}

Array insert_data(Array array,char name[],int year,int duration,float imdb,int votes)
{
	//if(array.c_size==array.t_size) return NULL;
	strcpy(array.arr[array.c_size].name,name);
	array.arr[array.c_size].year=year;
	array.arr[array.c_size].duration=duration;
	array.arr[array.c_size].imdb=imdb;
	array.arr[array.c_size].votes=votes;
	array.c_size++;
	return array;
}
Array read_line(char doc[],Array array)
{
	FILE *fp;
	fp=fopen(doc,"r");
	char name[15],head1[15],head2[15],head3[15],head4[15],head5[15];
	int i,year,duration,votes;
	float imdb;
	int count=0;
	fscanf(fp,"%s %s %s %s %s",head1,head2,head3,head4,head5);
	while(!feof(fp))
	{
		fscanf(fp,"%s %d %d %f %d",name,&year,&duration,&imdb,&votes);
		array=insert_data(array,name,year,duration,imdb,votes);
		
	}

	
	fclose(fp);
	return array;

}

void count(Array array)
{
	int i,count16=0,count17=0,count18=0,count19=0,count20=0,count21=0;
	for(i=0;i<array.c_size;i++)
	{
		if(array.arr[i].year==2016)
			count16++;
		if(array.arr[i].year==2017)
			count17++;
		if(array.arr[i].year==2018)
			count18++;
		if(array.arr[i].year==2019)
			count19++;
		if(array.arr[i].year==2020)
			count20++;
		if(array.arr[i].year==2021)
			count21++;
	}
	printf("movies released in 2016:%d\n",count16);
	printf("movies released in 2017:%d\n",count17);
	printf("movies released in 2018:%d\n",count18);
	printf("movies released in 2019:%d\n",count19);
	printf("movies released in 2020:%d\n",count20);
	printf("movies released in 2021:%d\n",count21);
}

void top5_imdb(Array array)
{
	int i,j;
	Movie temp;
	printf("\nTOP 5 IMDB RATED MOVIES\n");
	for(i=0;i<array.c_size-1;i++)
	{
		for(j=i+1;j<array.c_size;j++)
		{
			if(array.arr[i].imdb<array.arr[j].imdb)
			{
				temp=array.arr[i];
				array.arr[i]=array.arr[j];
				array.arr[j]=temp;
			}	


		}
	}
	for(i=0;i<5;i++)
		printf("%s\n",array.arr[i].name);

}

void max_min(Array array)
{
	int i,j;
	Movie temp;
	printf("\n");
	for(i=0;i<array.c_size-1;i++)
	{
		for(j=i+1;j<array.c_size;j++)
		{
			if(array.arr[i].duration>array.arr[j].duration)
			{
				temp=array.arr[i];
				array.arr[i]=array.arr[j];
				array.arr[j]=temp;
			}	


		}
	}
	printf("Longest duration movie : %s",array.arr[array.c_size-1].name);
	printf("\nShortest duration movie : %s",array.arr[0].name);


}

void popular(Array array)
{
	int i,j;
	Movie temp;
	FILE *fp;
	fp=fopen("popular_movies.txt","w");
	for(i=0;i<array.c_size-1;i++)
	{
		if(array.arr[i].votes>10000)
		
			fprintf(fp,"%s\t%d\t%d\t%0.1f\t%d\n",array.arr[i].name,array.arr[i].year,array.arr[i].duration,array.arr[i].imdb,array.arr[i].votes);
	}
	fclose(fp);
}

