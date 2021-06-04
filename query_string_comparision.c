#include<stdio.h>
#include<math.h>

void main()
{	
	int i,t,j,s,r,n;
	char a[50][50],b[50];
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	fflush(stdin);
	for(i=0;i<n;i++)
	{	
		printf("enter string %d=",i+1);
		gets(a[i]);
	}
	printf("\nenter query string");
	gets(b);
	r=0;
	j=0;
	while(b[j]!='\0')
	{
		r++;
		j++;
	}
	
	for(i=0;i<n;i++)
	{
		j=0;t=0;			
		for(s=0;s<r;s++)
		{
			if(b[s]==a[i][j])
			{	
				t++;j++;
			}
			else
			{
				break;
			}
		}
		if(t==r)
		{
			puts(a[i]);
		}
	}
	getch();
	
}	
