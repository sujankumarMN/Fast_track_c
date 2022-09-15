#include<stdlib.h>
#include<stdio.h>
#include "header.h"
#include "Operation.c"
#include<math.h>
#include<assert.h>
#include<string.h>
void main()
 {
 	char lower;
 	lower= upper_to_lower('Z');
 	display_upper(lower);
    assert(upper_to_lower('A')=='a');

    float area;
    area=area_circle(5);
    display_area(area);
    assert(area_circle(5)==78.5);

    float p,r,si,ci;
    int t;
    si = simple_interest(10,2,8.782);
    display_si(si);
    //assert(simple_interest(10,2,8.782)==1.756400);
    ci = compound_interest(5000,3,6.5);
    display_si(ci);

    float fah,cel;
    fah=cel_to_fahr(32);
    display_si(fah);
    cel=fahr_to_cel(89);
    display_si(cel);

    int n;
    n=odd_even(10);
    assert(odd_even(117)==0);
    assert(odd_even(118)==1);
    display_si(n);

    n=is_leap(1960);
    assert(is_leap(1200)==1);
    assert(is_leap(1800)==0);
    display_si(n);

    n=powerN(3);
    display_si(n);
    assert(powerN(3)==8);
    assert(powerN(4)==16);  



 }