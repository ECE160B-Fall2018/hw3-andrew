#include <stdio.h>
#include <math.h>
void itob(int n, char str[], int b);

void main()
{
	itob(37,"anything",16);
	printf("\n");
	itob(88,"anything",2);
	printf("\n");
	itob(46, "anything",8);
	printf("\n");
	return;
}

void itob(int n, char str[], int b)
{
	
	int power, nou;

	power = log(b)/log(2);
	if(8%power ==0)
	{
		nou = 8/power;
	}else
	{
		nou = 8/power +1;
	}

	for (int i = 0; i<nou; i++)
	{
		int maxn = nou - 1 - i;
		int pob = pow (b, maxn);
		int number = n/ pob;
		if (number>=0 && number<b && number<10)
		{
			putchar (number+'0');

		}else
		{
			putchar (number-b+'A'-1);
		}

		 
		n = n - number * pob;
	}
	return;

}
