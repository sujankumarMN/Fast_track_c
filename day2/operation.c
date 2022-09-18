#include "header.h"
#include<stdio.h>

void display(int n)
{
	printf("\n%d\n",n );
}

//p1
int sum_of_digits(int n)
{
	int rem,sum=0;
	while(n)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	return sum;
}

//p2
int reverse(int n)
{
	int rem,temp=0;
	while(n)
	{
		rem=n%10;
		temp=temp*10+rem;
		n=n/10;
	}
	return temp;	
}

//p3
int occurence(int num,int dig)
{
	int rem,count=0;
	while(num)
	{
		rem=num%10;
		if(dig==rem)
			count++;
		num=num/10;
	}
	return count;
}

//p4
int palindrome(int n)
{
	if(reverse(n)==n)
		return 1;
	else
		return 0;
}

//p5
int is_prime(int n)
{
	int i,flag=0;
	if(n==1||n==0)
		flag =1;
	for(i=2;i<=n/2;i++)
	{
		if(0==n%i)
			flag=1;
	}
	if(0==flag)
		return 1;
	else
		return 0;
}
void prime_list(int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if(is_prime(i))
			printf("%d ",i);
	}
	
}
/*void display_arr(int a[])
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

}*/

//p6
int sum_of_series_1(int n)
{
	int temp=0,count=0,sum=0;
	while(count<n)
	{
		temp=temp*10+1;
		sum=sum+temp;
		count++;
	}
	return sum;

}

//p7
int is_armstrong(int n)
{
	int temp,rem=0,sum=0;
	temp=n;
	while(n)
	{
		rem=n%10;
		sum= sum +(rem*rem*rem);
		n=n/10;
	}
	//printf("sum=%d",sum);
	if(sum==temp)
		return 1;
	else
		return 0;
}

//p8
int sum_of_divisors(int n)
{
	int i,rem,sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(0==n%i)
			sum=sum+i;

	}
	return sum;
}
int amicable(int n1, int n2)
{
	if(sum_of_divisors(n1)&&sum_of_divisors(n2)==n1)
		return 1;
	else
		return 0;
}

//p9
void menu()
{
	int a,b,choice;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	printf("\n Enter the choice\n \\
		1.Sum of numbers \n \\
		2.Difference of numbers \n \\
		3.Multiplication of numbers \n");
	scanf("%d",&choice);



	//int result;
	switch(choice)
	{
		case 1: 
		{
			printf("%d\n", a+b);
			break;
		}
		case 2:
		{
			printf("%d\n",a-b);
			break;
		}
		case 3:
		{
			printf("%d\n",a*b);
			break;
		}
		default: printf("Ohh bhai bahi bhai!!");

	}
}

//p10
void cube()
{
	int a;
	printf("Enter the side:");
	scanf("%d",&a);
	printf("volume:%d",a*a*a);
}
void cuboid()
{
	int a,b,c;
	printf("Enter the length,breadth,height (sapearated by space):");
	scanf("%d%d%d",&a,&b,&c);
	printf("volume:%d",a*b*c);
	
}
void sphere()
{
	int r,h;
	printf("Enter the radius,height (sapearated by space):");
	scanf("%d%d",&r,&h);
	printf("volume:%f",4/3*PI*r*r*r);
}
void cylinder()
{
	int r,h;
	printf("Enter the radius,height (sapearated by space):");
	scanf("%d%d",&r,&h);
	printf("volume:%f",PI*r*r*h);

}
void cone()
{
	int r,h;
	printf("Enter the radius,height (sapearated by space):");
	scanf("%d%d",&r,&h);
	printf("volume:%f",PI*r*r*h/3);
	
}

//p11
void bill(int units)
{
	if(units>=0&&units<=200)
		printf("Bill:%d",units);
	else if(units>200&&units<=300)
		printf("Bill:%d",200+(units-200)*1.5);
	else
		printf("Bill:%d",350+(units-300)*2);
}
