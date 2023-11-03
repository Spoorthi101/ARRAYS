#include<stdio.h>
int main ()
{
	int n,i,j,a[100],c,k;
	c=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[i]==a[j])
			{
				
				k=a[i];
				c++;
					
			}
		}
		if(c>0)
		{
			printf("%d",k);
			break;
			
	}
			
		}
		
	return 0;
}
