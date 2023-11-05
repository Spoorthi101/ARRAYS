#include<stdio.h>
int main ()
{
	int n,i,a[100],x;
	scanf("%d%d",&x,&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		if (a[i]>=x&&a[i-1]<x)
		printf("The ceiling of %d is %d",x,a[i]);
	}
	return 0;
}
