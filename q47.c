#include<stdio.h>

int main()
{
	int i,n,x;
	
	printf("Welcome\nEnter a value=\n");
	scanf("%d" ,&n);

	i=1;
	while(i<=n)
	{
		printf("%c",64+i);
		i=i+1;
	}

	i=i-2;
	while(i>=1)
	{
		printf("%c",64+i);
		i=i-1;
	}
	printf("\n");

	x=n-1;
	while(x>=1)
	{
		i=1;
		while(i<=x)
		{
			printf("%c",64+i);
			i=i+1;
		}
		i=n-x;
		while(i>=1)
		{
			printf(" ");
			i=i-1;
		}
	    i=1;
		while(i<=n-x-1)
		{
			printf(" ");
			i=i+1;
		}
		i=x;
		while(i>=1)
		{
			printf("%c",64+i);
			i=i-1;
		}
		printf("\n");
		x=x-1;
	}
	
	getch();
}
