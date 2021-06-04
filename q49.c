#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x,t;
	//clrscr();
	printf("Welcome\nEnter a value=\n");
	scanf("%d" ,&n);
	t=1;
	
	x=1;
	while(x<=n)
	{
		i=1;
		while(i<=n-x)
		{
			printf(" ");
			i=i+1;
		}
		printf("%d\n",t);
		t=t*11;
		x=x+1;
	}
	getch();

}
