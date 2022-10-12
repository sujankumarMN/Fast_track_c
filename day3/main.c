
#include "header.h"
void main()
{
	int dec,bin;
	dec=bin2dec(10100);
	display(dec);
	bin=dec2bin(13);
	display(bin);

	seq_sum(N);

	sketch(N);

	sum7();

	dec=power(6,2);
	display(dec);

	dec=fac(6);
	display(dec);

	/*float sum;
	sum=func(2,5);
	displayF(sum);*/

	dec=CONCAT(757,76);
	display(dec);

	dec=SQUARE(5);
	display(dec);

	maths();


}