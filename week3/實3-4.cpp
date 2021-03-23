#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=n/1000;
	int b=n%1000/100;
	int c=n%1000%100/10;
	int d=n%1000%100%10;
	printf("%d\n",a*8+b*4+c*2+d*1);

}
