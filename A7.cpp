#include<stdio.h>
int main ()
{
	int n,i,k,c=0,a[100];
	scanf("%d%d",&n,&k);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		if (a[i]==k)
		c=c+1;	
	}
	printf("the occurence of this number is %d",c);
	return 0;
}
