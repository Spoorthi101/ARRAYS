#include<stdio.h>
int main ()
{
	int n,i,j,a[100],s=0,avg;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<=i+1;j++)
		{
			s=s+a[i];
			avg=s/(i+1);
			printf("%d ",avg);
		}
	}
	return 0;
}
