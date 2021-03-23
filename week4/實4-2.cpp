#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	int b[6]={};
	for(int i=0;a[i]!=0;i++)
	{
		if(a[i]=='1') b[0]++;
		if(a[i]=='2') b[1]++;
		if(a[i]=='3') b[2]++;
		if(a[i]=='4') b[3]++;
		if(a[i]=='5') b[4]++;
		if(a[i]=='6') b[5]++;
	}
	for(int i=0;i<=5;i++)
	{
		printf("%d:%d\n",i+1,b[i]);
	}

}
