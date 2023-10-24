#include<stdio.h>
int main ()
{
	int a[10],n,s=0,i,max,min;
	float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
		for (i=0;i<n;i++)
		{
			if (a[i]>max)
		    max=a[i];			
		}
	printf("maximum value of array is %d",max);
	printf("\n");
	
	min=a[0];
	for (i=0;i<n;i++)
	{
		if (a[i]<min)
		min=a[i];	
	}
	printf("minimum value of array is %d",min);
	printf("\n");
	
	for (i=0;i<n;i++)
	s=s+a[i];
	printf("the average value of the array is %f",avg=s/n);
	return 0;	
}
