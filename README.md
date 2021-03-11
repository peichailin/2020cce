# 2020cce

# 第01週的實習課程式

## 第一題 進階題 : 分式化簡
```c
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
```

## 第二題 進階題 : 讀入整數反序列印
```c
#include <stdio.h>
int a[10]={};
int main()
{
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			break;
		}
	
	}
	for(int i=9;i>=0;i--)
	{
		if(a[i]!=0)
		{
			printf("%d ",a[i]);
		}
	}
	
	printf("\n");
}
```

## 第三題 進階題 : A的B次方函數
```c
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
	{
		ans=ans*a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```

## 第四題 進階題 : 漸增數列相加
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=2;i<=n;i++)
	{
		ans=ans+(i-1)*i;
	}
	printf("%d\n",ans);
}
```

## 第五題 基礎題：找零錢 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,n%50/5,n%50%5/1);
}
```

## 第六題 基礎題：因數個數 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int space=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			space++;
		}
	}
	printf("%d\n",space);
}
```

## 第七題 基礎題：找倍數 
```c
#include <stdio.h>
int a[10]={};
int main()
{
	int space=0;
	int n;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%3==0)
		{
			space++;
		}
	}

	printf("%d\n",space);
	
}
```

## 第八題 基礎題：整數轉換為等級 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90)
	{
		printf("A\n");
	}
	else if(n>=80)
	{
		printf("B\n");
	}
	else if(n>=60)
	{
		printf("C\n");
	}
	else
	{
		printf("F\n");
	}
}
```
#第二週
## 指標1

```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

}

```

## 指標2
```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);



}




```

## 指標3
```c

#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    p2=p;
    *p2=400;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);


}
```

# 第三週

## 3-1

```c
///陣列 v.s 指標
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfAll()
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
   int *p = &a[2];
   *p = 222;
            printfAll();

   p = p+2;
   *p=666;
            printfAll();

}


```
## 3-2
```c
///陣列 v.s 指標
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfAll()
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
   int *p = &a[2];
   *p = 222;
            printfAll();
   p = p+2;
   *p=666;
            printfAll();
   p--;
   *p=555;
            printfAll();
}



```
## 3-3
```c
///陣列 v.s 指標
#include <stdio.h>
int a[10]={0,10,20,30,40,50,60,70,80,90};
void printfAll()
{
    for(int i=0;i<10;i++)
    {
        printf("%3d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int *p = &a[2];
    *p = 222;
            printfAll();
    int *p2=p+4;
    *p2=666;
            printfAll();
    p2--;
    *p=555;
            printfAll();
}




```

## 3-4

```c
#include <stdio.h>
#include <stdio.h>

    int a[10];
    int main()
    {
        int b[10];

        int *p=(int*) malloc( suzeof(int)*10);
        return 0;

    }

```
