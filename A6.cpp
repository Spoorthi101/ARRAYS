#include<stdio.h>
int main ()
{
	int n,i,j,k,a[100];
	scanf("%d%d",&n,&k);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
	{
		if (a[i]>a[j])
		{
		a[i]=a[i]+a[j];
		a[j]=a[i]-a[j];
		a[i]=a[i]-a[j];
	    }
	}
    } 
	for (i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
	printf("the kth largest element is %d",a[n-k]);
	printf("the kth smallest element is %d",a[k-1]);
	return 0;
}
