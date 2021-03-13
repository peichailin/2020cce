#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s", &a);
	for(int i=0; a[i]!=0;i++)
	{
		if(a[i]>64 && a[i]<91)
		{

			printf("%c",a[i]+32);
		}
		else if(a[i]>96 && a[i]<123)
		{
			printf("%c",a[i]-32);
		}
		else
		{
			printf("%c",a[i]);
		}
	}
	printf("\n");
}
