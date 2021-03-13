#include <stdio.h>
int main()
{
	int a,b,c,temp,max,min;
	scanf("%d%d%d",&a,&b,&c);
	for(int i=1;i<=3;i++)
	{
		if(c>a && c>b)
		{
			max=c;

		}
		else if(b>a &&b>c)
		{
			max=b;

		}
		else if(a>b &&a>c)
		{
		   max=a;
		}
	}

		if(a<b && a<c)
		{
			min=a;
		}
		else if(b<a && b<c)
		{
			min=b;
		}
		else if(c<a && c<b)
		{
			min=c;
		}

	printf("%d\n",max-min);



}

