#include<stdio.h>
int main ()
{
	int i,j,a[2][2],b[2][2],c[2][2],d[2][2];
	printf("Enter the first matrix elements \n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
		printf("Enter the second matrix elements \n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
		c[i][j]=a[i][j]-b[i][j];
		d[i][j]=a[i][j]+b[i][j];
		}
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
