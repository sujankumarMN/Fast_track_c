#include<stdlib.h>
#include<stdio.h>
#include "header.h"
#include<math.h>
//P1
char upper_to_lower(char ch)
{
	if(ch<64&&ch>96) 
		return 'C';
	else
	return ch+32;
}
void display_upper(char ch)
{
	printf("%c\n",ch );
}

//P2
float area_circle(float radius)
{
	return PI*radius*radius;
}

void display_area(float area)
{
	printf("%0.2f\n",area );
}

//P3
float simple_interest(float p,int t,float r)
{
	return (p*t*r)/100;
	float s;
	}
void display_si(float si)
{
	printf("%f\n",si);
}
float compound_interest(float p,int t,float r)
{
	float CI=(p*(pow((1+r/100),t)));	
	return CI;
}

//P4
float cel_to_fahr(float cel)
{
	
	return (cel*9/5+32);
}

float fahr_to_cel(float fah)
{
	
	return (fah-32)*5/9;
}

//p5
int odd_even(int n)
{
	if(0==n%2)
		return 1;
	else
		return 0;
}

//P6
int is_leap(int year)
{
	if((year%4==0&&year%100!=0)||year%400==0)
		return 1;
	else
		return 0;
}

//P7
int powerN(int n)
{
	return 2<<n-1;
}
