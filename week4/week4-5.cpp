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


