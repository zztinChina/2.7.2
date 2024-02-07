#include<stdio.h>
int main()
{
	int i = 0;

	int n = 0;
	scanf_s("%d", &n);
	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			printf("%d\n",i);
			n = n / i;
		}
	}
	return 0;
}