#include <stdio.h>
#include<stdlib.h>
#include "header.h"
#include<string.h>
#include<ctype.h>

int array_insert(int arr[],int size)
{
	int i,j,k,temp;
	//int arr[MAX_SIZE];
	printf("Enter the array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}

void array_ascending(int arr[])
{
	int i,j,temp;
	
	for(i=0;i<MAX_SIZE-1;i++)
	{
		for(j=i+1;j<MAX_SIZE;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("ASCENDING...\n");
}

void array_descending(int arr[])
{
	int i,j,temp,size;
	size=MAX_SIZE;
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("DESCENDING...\n");
}

void remove_duplicate(int arr[])
{
	int i,j,k,temp,size;
	size=MAX_SIZE;
	//printf("size=%d",size);
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{

				for(k=j;k<size;k++)
				 arr[k]=arr[k+1];
				size--;
				j--;
			}
			
		}
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);

}}


void display_array(int arr[])
{
	int i;

	for(i=0;i<MAX_SIZE;i++)
	{
		printf("num=%d\n",arr[i] );
	}
}

//p8
int soop(int arr[])
{
	int i,sum=0;
	for(i=0;i<MAX_SIZE-1;i++)
	{
		sum=sum+(arr[i]*arr[i+1]);
	}
	return sum;
}

//p9
void lower_upper(char st[])
{
	int i;
	for(i=0;st[i]!='\0';i++)
		{
			//printf("%c ",st[1]);

			st[i]=toupper(st[i]);
		}
	puts(st);
}

//p13
void array_insert_2d(int arr[][COL_SIZE],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			arr[i][j]=rand()%10;
	}
}
void display_array_2d(int arr[][COL_SIZE],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	printf("\n");
}
void sum(int a[ROW_SIZE][COL_SIZE],int b[ROW_SIZE][COL_SIZE],int s[ROW_SIZE][COL_SIZE])
{
	int i,j;
	for(i=0;i<ROW_SIZE;i++)
	{
		for(j=0;j<COL_SIZE;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
}