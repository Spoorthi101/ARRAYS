#include<stdio.h>
int main ()
{
	int n,i,a[100],b[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The first array is : ");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("The second array is : ");
	for (i=0;i<n;i++)
	{
		b[i]=a[i];
		printf("%d ",b[i]);
	}
	return 0;
}
