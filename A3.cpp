#include<stdio.h>
int main ()
{
	int n,i,a[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i+=2)
	{
		a[i]=a[i]+a[i+1];
		a[i+1]=a[i]-a[i+1];
		a[i]=a[i]-a[i+1];
	}
	for (i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
