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
## 實3-1

```c
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

```

## 實3-2

```c
#include <stdio.h>
int main()
{
	int n , ans=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		ans=ans+(i-1)*i;
	}
	printf("%d\n",ans);
}

```
## 實3-3
```c
#include <stdio.h>
int a[10]={};
int main()
{
	int n ,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		ans=a[i]*a[i];
		printf("%d,",ans);
	}
	printf("\n");

}

```

## 實3-4
```c
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

```

## 實3-5
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d %d\n",n/7,n%7);
}

```

## 實3-6
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x=n-2000;
	if(x%500!=0)
	{
		printf("%d\n",(100)+(x/500)*5+5);
	}
	else
	{
		printf("%d\n",(100)+(x/500)*5);
	}
}

```

## 實3-7
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		for(int i=a;i<=b;i++)
		{
			if(i%5==0)
			{
				printf("%d\n",i);
			}
		}
	}
	else if(a>b)
	{
		for(int k=b;k<=a;k++)
		{
			if(k%5==0)
			{
				printf("%d\n",k);
			}
		}
	}
}


```

## 實3-8
```c
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


```
# 第四周

## 4-1
```c
#include <stdio.h>
struct DATA//資料結構宣告
{
    float x,y,z;
};
int main()
{


}

```

## 4-2
```c
#include <stdio.h>
struct DATA///資料結構宣告
{
    float x,y,z;
} point1;
///point1是變數,長得像DATA
///DATA裡面有x,y,z
int main()
{
    point1.x=3;///使用
    point1.y=5;///使用
    point1.z=7;///使用
    printf("%f %f %f\n",point1.x,point1.y,point1.z);
}


```

## 4-3
```c
#include <stdio.h>
struct DATA///資料結構宣告
{
    float x,y,z;
} point1;
struct DATA points[5];
///point1是變數,長得像DATA
///DATA裡面有x,y,z
int main()
{
    ///int b;
    ///int a[5];有五個
    for(int i=0;i<5;i++)
    {
        points[i].x = i*10;
        points[i].y = 20;
        points[i].z = 0;
        printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }

}


```

## 4-4
```c
#include <stdio.h>
struct DATA///資料結構宣告
{
    float x,y,z;
} a,b,c;                           ///外面global全域變數
struct DATA points[5];

int main()
{
    struct DATA d,e,f;            ///裡面local區域變數(沒有給值,是亂碼)     
    
    for(int i=0;i<5;i++)
    {
        points[i].x = i*10;
        points[i].y = 20;
        points[i].z = 0;
        printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }

}


```
## 4-5
```c
#include <stdio.h>
struct DATA///資料結構宣告
{
    float x,y,z;
} a,b;
struct DATA c,d;

int main()
{
    struct DATA e;
    struct DATA f={1,2,3};///宣告的同時,可以初始值

    printf("%f %f %f\n",a.x,a.y,a.z);
    printf("%f %f %f\n",b.x,b.y,b.z);
    printf("%f %f %f\n",c.x,c.y,c.z);
    printf("%f %f %f\n",d.x,a.y,d.z);
    printf("%f %f %f\n",e.x,e.y,e.z);
    printf("%f %f %f\n",f.x,f.y,f.z);


}



```
## 實4-1
```c
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	for(int i=0;a[i]!=0;i++)
	{
		if(a[i]!=50)
		{
			printf("%c",a[i]);
		}
	}
	printf("\n");
}



```
## 實4-2
```c
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

```
## 實4-3
```c
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

```
## 實4-4
```c
#include <stdio.h>
void many(char c,int n)
{
	for(int k=1;k<=n;k++)
	{
		printf("%c",c);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int star=i*2-1;
		int space=n-i;
		many(' ',space);
		many('*',star);
		printf("\n");
	}
}

```
# 第五週

## 5-1

```c
#include <stdio.h>
char line[20]="233233233233233233";
int main()
{
    char *p=line;
    ///scanf("%s,line");
    for(int i=0;line[i]!=0;i++)///line[i]!=0 的地方 (  0  其實就是 '\0' )
    {
        p = &line[i];
        char c = line[i];
        if(c!='2') printf("%c",c);

    }
    printf("\n");

}

```

## 5-2
```c
#include <stdio.h>
int main()
{
    char line[10] = "decline";
    char line2[10]= {'p', 'r', 'o', 'p', 'e', 'r', '\0'};///"proper";
    printf("%s\n", line);
    printf("%s\n", line2);
}


```
## 5-3這是錯的
```c
#include <stdio.h>
int main()
{
    char line[10] = "decline";
    char line2[10]= {'p', 'r', 'o', 'p', 'e', 'r', '\0'};///"proper";
    printf("%s\n", line);
    printf("%s\n", line2);

    ///了解字串結尾是'\0'
    char line3[]="majority這是好的,沒問題,要多長有多長";
    char line4[]={'m','a','j','o','r','i','t','y'};///這是錯誤的,結尾要寫'\0'
    printf("%s\n",line3);
    printf("你相信嗎? 這是line4:==%s==\n",line4);
}



```
## 5-4
```c
#include <stdio.h>
int main()
{
    ///解甚麼是 "很多"字串
    char line [5][10]={"decline","proper","majority","bullet","shop"};
    char *p;
    for(int i=0;i<5;i++)
    {
        p = line[i];
        printf("%s\n",line[i]);
    }

}

```
## 5-5
```c
#include <stdio.h>
int a[3][3]={ {1,2,3},{4,5,6},{7,8,9}};
int main()
{
    ///左i右j
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

```
## 5-6
```c
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%s",line[i]);
	}
	char temp[10];
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(strcmp(line[i],line[j])>0)
			{
				strcpy(temp ,line[i]);
				strcpy(line[i],line[j]);
				strcpy(line[j],temp);
			}
		}
	}
	for(int i=0;i<N;i++)
	{
		printf("%s\n",line[i]);
	}
}

```
# 第7周
## 7-1

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
int compare(const void *p1,const void *p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",line[i]);
	}
	char temp[10];
	qsort( line, n, 10, compare);
	for(int i=0;i<n;i++)
	{
		printf("%s\n",line[i]);
	}
	
}

```
# 第8週
## 8-1
```c
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
```
# week10
## 10-1
```c
#include <stdio.h>
char line[10000];
int main()
{	
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		printf("%s\n",line);
	}
}
```
## 10-2
```c
#include <stdio.h>
char line[10000];
int main()
{	
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			if(c>='A' && c<='Z')
			{
				printf("大");
			}
			else if(c>='a' && c<='z')
			{
				printf("小");
			}
			else 
			{
				printf("他");
			}
		}
	
	}
}
```
## 10-3
```c
#include <stdio.h>
char line[10000];
char ans[26];
int main()
{	
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			if(c>='A' && c<='Z')
			{
				ans[c-'A']++;
			}
			else if(c>='a' && c<='z')
			{
				ans[c-'a']++;
			}
		
		}
	
	}
	for(int i=0;i<26;i++)
	{
		printf("%c %d\n",'A'+i,ans[i]);
	}
}
```
## 10-4
```c
#include <stdio.h>
char line[10000];
char ans[26];
char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{	
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			if(c>='A' && c<='Z')
			{
				ans[c-'A']++;
			}
			else if(c>='a' && c<='z')
			{
				ans[c-'a']++;
			}
		
		}
		
	}
	for(int i=0;i<26;i++)
		{
			for(int j=i+1;j<26;j++)
			{
				if(ans[i]<ans[j] ||(ans[i]==ans[j] && alphabet[i]>alphabet[j]))
				{
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=alphabet[i];
					alphabet[i]=alphabet[j];
					alphabet[j]=c;
				}
			}
			
		}
	for(int i=0;i<26;i++)
	{
		if(ans[i]>0) printf("%c %d\n",alphabet[i],ans[i]);
	}
}
```
## 10-5
```c
#include <stdio.h>
#include <stdlib.h>
char line[10000];
char ans[26];
typedef struct
{
	int ans;
	char c;
}BOX;
BOX array[26];
int compare(const void *p1,const void *p2)
{
	if(((BOX*)p1)->ans > ((BOX*)p2)->ans) return -1;
	else if(((BOX*)p1)->ans < ((BOX*)p2)->ans) return +1;
	else return 0;
}
int main()
{	
	for(int i=0;i<26;i++) array[i].c='A'+i;
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			if(c>='A' && c<='Z')
			{
				array[c-'A'].ans++;
			}
			else if(c>='a' && c<='z')
			{
				array[c-'a'].ans++;
			}
		
		}
		
	}
	qsort(array,26,sizeof(BOX),compare);

	for(int i=0;i<26;i++)
	{
		if(array[i].ans>0) printf("%c %d\n",array[i].c,array[i].ans);
	}
}
```
# 11
```c
#include <stdio.h>
unsigned char c;
typedef unsigned char uchar;
uchar d;
int main()
{
    c='A';
    d=c;
    printf("%c",d);
}
```
##11-2
```c
#include <stdio.h>
typedef struct data
{
        char c;
        int ans;
}DATA;
DATA listA;
int main()
{
    listA.c='A';
    listA.ans=1;
    printf("%c %d\n",listA.c,listA.ans);
}
```
## 11-3
```c
#include <stdio.h>
#include <stdlib.h>
int compare(const void*p1,const void*p2)
{
    int d1=*((int*)p1);
    int d2=*((int*)p2);
    if(d1>d2) return 1;
    if(d1==d2) return 0;
    if(d1<d2) return -1;
}
int a[10]={4,8,3,7,5,2,9,1,6,10};
int main()
{
    qsort( a, 10,sizeof(int),compare);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
        printf("%d ",a[i]);
    }
}
```
