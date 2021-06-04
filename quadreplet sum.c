#include<stdio.h>

void main()
{
	
	int i,a[100],k,n,s,j,t,p;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter value%d=",i+1);						//quadreplet sum
		scanf("%d",&a[i]);
		i++;
	}
	printf("enter value for sum=");
	scanf("%d",&t);

	i=0;
	while(i<n-3)
	{
		j=i+1;
		while(j<n-2)
		{
			k=j+1;
			while(k<n-1)
			{
				s=k+1;
				while(s<n)
				{
					if((a[i]+a[j]+a[k]+a[s])==t)
					{
						printf("yes");
						goto abc;
					}
					s++;
				}
			}
			j++;		
		}		
		i++;
	}	
	abc:
	if(i==n-3)
	{
		printf("false");
	}
	
	
	getch();
	
}	
