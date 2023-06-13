#include <unistd.h>

void put_char (char d)
{
	write (1, &d, 1);
}

void filter(int hund, int dec, int uni)
{
	if( hund == dec - 1 && hund == uni -2 )
	{
	put_char(48+hund);
	put_char(48+dec);
	put_char(48+uni);
	put_char(' ');
	put_char(',');
	}
}

void sep_digits()
{
	int number;
	int hund;
	int dec;
	int uni;

	number = 000;
	while (number++ <= 999)
	{
	hund = (number/100)%10;
	dec = (number/10)%10;
	uni = number%10;
	filter(hund, dec, uni);
	}
}


int main ()
{
	filter();
	return (0);
}
