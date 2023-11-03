#include<stdio.h>
int main ()
{
	int n,i,N,k,a[100];
	scanf("%d%d",&N,&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		if (a[i]>N&&a[i-1]<N)
		{
			for (k=n-1;k>=i+1;k--)
		{
			a[k+1]=a[k];
		}
		a[i+1]=a[i];
		a[i]=N;
		
		}
	}
	n++;
	for (i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
