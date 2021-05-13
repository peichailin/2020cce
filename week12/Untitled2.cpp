#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++)
	{
		int ans[256]={};
		char ascii[256];
		for(int i=0;i<256;i++) ascii[i]=i;//ascii 是字母(左邊那一排)

		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			ans[c]++;
		}
		for(int i=0;i<256;i++)
		{
			for(int j=i+1;j<256;j++)
			{
				if( ans[i]>ans[j] )
				{
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
				if( ans[i]==ans[j] && ascii[i]<ascii[j])
				{
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
			}
		}
		if(t>0) printf("\n");
		for(int i=0;i<256;i++)
		{
			if(ans[i]>0) printf("%d %d\n",ascii[i],ans[i]);
		}
	}
}
## 12-3
```c
#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++)
	{
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		}
		int ans=0;
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```

