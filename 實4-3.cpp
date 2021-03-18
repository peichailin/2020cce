#include <stdio.h>
int  max_digit(int n)
{
	int ans=0,ans2=0,a=0;
	for(int i=1;n!=0;i++)
	{
		ans2=n%10;
		if(ans2>a)
		{
			a=ans2;
		}
		n=n/10;

	}
	return a;
}

int main(void){
  int n ;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
