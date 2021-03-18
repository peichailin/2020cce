#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=1;n>10;i++)
	{
		ans=n/10;
		n=ans;

	}
	printf("%d",ans);
}

