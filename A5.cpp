#include<stdio.h>
int main ()
{
	int n,i,a[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n/2;i++)
	{
		a[i]=a[i]+a[n-i-1];
		a[n-i-1]=a[i]-a[n-i-1];
		a[i]=a[i]-a[n-i-1];
	}
	for (i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
