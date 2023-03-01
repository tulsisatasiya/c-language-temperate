#include<stdio.h>

int main()
{
	int i,n,c=0;

	printf("Enter any number :-");
	
	scanf("%d",&n);
	while(n>0)
	{
		c++;
		n=n/10;
	}

	printf("no of digit=%d",c);
	return 0;

}
