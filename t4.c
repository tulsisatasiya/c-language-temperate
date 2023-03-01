#include<stdio.h>

int main()
{
	int n,fd,ld,sum=0;

	printf("Enter any number :- ");
	scanf("%d",&n);

	ld=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	sum=fd+ld;

	printf("sum of frist and last digit=%d",sum);
	return 0;

}
