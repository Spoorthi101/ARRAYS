#include<stdio.h>
int main ()
{
	int n,i,s1=0,s2=0,k,a[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n/2;i++)
	{
		s1=s1+a[i];
	}
	for (i=n/2;i<n;i++)
	{
		s2=s2+a[i];
	}
	k=s2-s1;
	printf("The number to be added to an element in order to make the array balanced is %d",k);
	return 0;
}
