#include<stdio.h>
int main ()
{
	int n,i,a[100],b[100],c[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i+=2)
	{
		b[i]=a[i];
		printf("%d ",b[i]);
	}
	printf("\n");
	for (i=1;i<n;i+=2)
	{
		c[i]=a[i];
		printf("%d ",c[i]);
	}
	return 0;
}
