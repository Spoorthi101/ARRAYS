#include<stdio.h>
int main ()
{
	int n,i,j,s,a[100];
	scanf("%d%d",&s,&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (s==a[i]+a[j])
			{
				printf("%d %d\n",a[i],a[j]);
				printf("True");
				printf("\n\n");
				break;
			}
			else
			{
				printf("False");
				printf("\n\n");
			}
		}
	}
	return 0;
}
