#include<stdio.h>
int main ()
{
	int n,i,j,k,s,a[100],c=0;
	scanf ("%d%d",&s,&n);
	for (i=0;i<n;i++)
	scanf ("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			for (k=j+1;k<n;k++)
			{
				if (s==a[i]+a[j]+a[k])
				printf("%d %d %d\n",a[i],a[j],a[k]);
				printf("True");
				printf("\n");
				c++;
				break;
			}
			if (c==0)
				{printf("False");}
				break;
		}
	}
	return 0;
}
