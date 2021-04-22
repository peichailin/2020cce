#include <stdio.h>
#include <string.h>
char a[2000][80];
char others[80];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		gets (others);
	}
	char temp[80];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	int ans=1;
	for(int i=0;i<n-1;i++)
	{
		printf("%s ",a[i]);
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(a[i],a[j])==0)
			{
				ans++;
				i=j;
			}
			else
			{
				i=j-1;
				break;
			}
		}
		printf("%d\n",ans);
		ans=1;
	}
}
