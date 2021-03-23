#include <stdio.h>
int a[10]={};
int main()
{
	int n ,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		ans=a[i]*a[i];
		printf("%d,",ans);
	}
	printf("\n");

}
