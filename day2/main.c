#include<stdio.h>
#include "header.h"


void main()
{
	int result;

	result=sum_of_digits(1834002);
	display(result);

	result=reverse(19874);
	display(result);

	result=occurence(1102822, 2);
	display(result);

	result=palindrome(101011);
	display(result);

	result=is_prime(0);
	display(result);
	prime_list(15);
	//display_arr(array);

	result=sum_of_series_1(3);
	display(result);

	result=is_armstrong(372);
	display(result);

	result=sum_of_divisors(220);
	display(result);
	result=amicable(220,284);
	display(result);

	//menu();
	/*

	int c;
	printf("***select the solid*** \n\\
	1.cube\n\\
	2.cuboid\n\\
	3.sphere\n\\
	4.cylider\n\\
	5.cone\n ");
	scanf("%d",&c);
	switch(c)
	{
		case 1: cube();break;
		case 2: cuboid();break;
		case 3: sphere();break;
		case 4: cylinder();break;
		case 5: cone();break;
		default: printf("bhai bahi bhaiii!!");
	}*/

	bill(302);
	



	


}