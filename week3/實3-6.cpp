#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x=n-2000;
	if(x%500!=0)
	{
		printf("%d\n",(100)+(x/500)*5+5);
	}
	else
	{
		printf("%d\n",(100)+(x/500)*5);
	}
}
