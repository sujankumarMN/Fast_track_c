#include<math.h>
#include<stdio.h>
void display(int n)
{
	printf("\n%d\n",n );
}

void displayF(float n)
{
	printf("\n%f\n",n );
}

//p1
int bin2dec(int bin)
{
	int dec=0,rem,count=0;
	while(bin)
	{
		rem=bin%10;
		dec=dec+pow(2,count)*rem;
		bin=bin/10;
		count++;
	}

	return dec;
}
int dec2bin(int dec)
{
	int bin=0,rem,i=1;
	while(dec)
	{
		rem=dec%2;
		bin=bin+(i*rem);
		i=i*10;
		dec=dec/2;

	}
	return bin;
}

//p2
void seq_sum(int n)
{
	int a[n],i;
	a[0]=0;
	a[1]=0;
	a[2]=1;
	for(i=3;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2]+a[i-3];

	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

}

//p3
void sketch(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n-i;j++)
		{
			printf("*");
		}
		
	}
}

//p4
void sum7()
{
	int sum=0,count=0,rem,i;
	for(i=10;i<100;i++)
	{
		int temp=i;
		while(temp)
		{
			
			rem=temp%10;
			sum=sum+rem;
			temp=temp/10;

		}
		if(sum%7==0)
		
			printf("%d ",i);
	}

}

//p5
int power(int base,int pow)
{
	int j;
	if(1==pow)
	{
		return base;
	}
	else

		return  base*power(base,pow-1);
	
}

//p6
int fac(int n)
{
	int i;
	if(1==n)
		return n;
	else
		return n*fac(n-1);

}

//p7 -- clarify with faculty
int func(int x,int n)
{
	int sum=0;
	//if(n%2==0)
	//	n=n-1;
	if(n==1)
		return x;
	else
		sum=x+func(pow(x,n-2)/fac(n-2),n-2);
	//sum=sum-2+pow(x,n)/fac(n);

	return sum;
}
	
//p8//p9 maco
//p10
void maths()
{
	int ch,n;
	printf("\nChoose a math function to br operated\n\\
		1.square root\n\\
		2.natural log\n\\
		3.log10x\n\\
		4.power\n\\
		5.cosine\n");
	scanf("%d",&ch);
	printf("enter num:");
	scanf("%d",&n);
	switch(ch)
	{
		case 1: printf("\nsqrt:%lf",sqrt(n));
				break;
		case 2: printf("\nnLog:%lf",log(n));
				break;
		case 3: printf("\nlog10:%lf",log10(n));
				break;
		case 4: printf("\npower:%d",power(n,2));
				break;
		case 5: printf("\ncos:%lf",cos(n));
				break;
		default: printf("waaa");
												

	}
}
