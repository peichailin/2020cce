#include <stdio.h>\

int main()
{
	int n;
	int a[5]={};
	scanf("%d",&n);
	int ans=1,ans2,ans3;
	for(int i=1;i<=5;i++)
	{


		ans=n/10;
		ans2=n%10;
		n=ans;
		a[i]=ans2;


	}
	for(int i=5;i>=2;i--)
	{
		printf("%d   ",a[i]);
	}
	printf("%d",a[1]);



}

