#include<stdio.h>
int main ()
{
	int i,j,a[3][3],s=0;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if(i==j)
			{
				s=s+a[i][j];
			}
		}
	}
	printf("%d",s);
	return 0;
}
