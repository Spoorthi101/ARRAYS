#include<stdio.h>
int main ()
{
	int n,i,p,N,a[100];
	scanf("%d%d%d",&n,&p,&N);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=n;i>p-1;i--)
	{
		a[i]=a[i-1];
	}
	a[p-1]=N;
	n++;
	for (i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
