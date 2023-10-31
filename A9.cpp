#include<stdio.h>
#include<math.h>
int main ()
{
	int n,i,k,a[100],s1,s2=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	s1=n*(n+1)/2;
	printf("%d",s1);
	printf("\n");
	for (i=0;i<n;i++)
		s2=s2+a[i];
	k=s2-s1;
	printf("%d",s2);
	printf("\n");
	printf("The missing number is %d",k);
	return 0;
}
