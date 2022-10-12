#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#include "header.h"

void file_r(FILE *fp)
{
	char ch;
	fp=fopen("readme.txt","r");
	char c;
	
	while(1)
		{
			ch=fgetc(fp);
			if(ch==EOF)
				break;
			printf("%c",ch );
		}
	
	fclose(fp);

}

void file_rp(FILE *fp)
{
	char ch;
	fp=fopen("readme.txt","r+");
	char *c="DUMMY dummy";
	fputs(c,fp);
	fclose(fp);
}

void file_a(FILE *fp)
{
	char ch;
	fp=fopen("readme.txt","a");
	char *c="DUMMY dummy";
	fputs(c,fp);
	fclose(fp);
}

void file_copy(FILE *fp,FILE *cp)
{
	char ch;
	fp=fopen("readme.txt","r");
	cp=fopen("copy.txt","w");
	while(1)
		{
			ch=fgetc(fp);
			if(ch==EOF)
				break;
			fputc(ch,cp);
		}
	
	fclose(fp);
	fclose(cp);


}

void odd_even()
{
	FILE *num,*odd,*even;
	char ch;
	//int ch;
	num=fopen("number.txt","r");
	odd=fopen("odd.txt","w");
	even=fopen("even.txt","w");
/*
	while(!feof(num))
	{
		fscanf(num,"%d",&ch);
		if(ch%2==0)
			fprintf(even, "%d\n",ch );
		if(ch%2!=0)
			fprintf(odd, "%d\n",ch );
	}*/
	while(1)
		{
			ch=fgetc(num);
			if(ch==EOF)
				break;
			if(isdigit(ch))
				{
					int n;
					n=(int)ch-'0';
					printf("%d\n",n );
					}
		}
	fclose(num);
	fclose(odd);
	fclose(even);


}