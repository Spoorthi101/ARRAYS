#include<stdio.h>
int main ()
{
	int n,i,j,a[100];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	scanf ("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[i]==a[j])
			{
				a[j]=a[j+1];
				j--;
				n--;
			}
		}
	}
	for (i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
