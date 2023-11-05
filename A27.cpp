#include<stdio.h>
int main ()
{
	int a[3][3],b[3][3],i,j,c=0,d=0;
	printf("Enter the array elements");
	printf("\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
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
		if (i==j)
		{
			if (a[i][j]!=1)
			c++;
		}
		break;
		
	}
		if (i!=j)
		{
			if (a[i]!=0)
			d++;
		}
		break;
	}
			if (c==0&&d==0)
			printf("The matrix is an identity matrix");
			else
			printf("The matrix is not an identity matrix");
		
	
	return 0;
}
