#include<stdio.h>
#include<time.h>

int main(void)
{
	int i;
	for(i = 100; i <= 999; i++)
	{
		if(i == (i / 100) * (i / 100) * (i / 100) + (i / 10 % 10) * (i / 10 % 10) * (i / 10 % 10) + (i % 10) * (i % 10) * (i % 10) )
			printf("%d\n", i);
	}
	printf("The Runtime = %.9f\n", (double)clock()/CLOCKS_PER_SEC);
	return 0;
}
