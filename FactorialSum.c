#include <stdio.h>
#include<time.h>

int main(void)
{
	int n, s, Fac;
	int i,j;

	const int MOD = 1000000;

	s=0;

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		Fac=1;
		for(j=1; j<=i; j++)
		{
			Fac=Fac*j%MOD;
		}

		s=(s+Fac)%MOD;
	}
	
	printf("%d\n",s);
	printf("Time used = %.2f\n",(double)clock() / CLOCKS_PER_SEC);


	return 0;
}
