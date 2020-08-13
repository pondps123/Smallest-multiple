#include <stdio.h>
int main()
{
	int a=1, b, c = 1;
	printf("smallest number that can be divided by each of the numbers from 1 to ");
	scanf("%d",&b);
	while (a<=b)
	{
		while (c % a != 0)
		{
			c++;
			a--;
		}
		a++;
	}
	printf("is %d", c);
	return 0;
}