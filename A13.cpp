#include<stdio.h>
int main ()
{
	int n,i,j,s,a[100];
	int c=0;
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
				c++;
				break;	
			}
		}
		if(c==0)
		{
			printf("False");
		}
		break;
	}
	return 0;
}
