#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int space1=a;
	int space2=b;
	int c=a%b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("%d %d\n",space1/b,space2/b);
}
