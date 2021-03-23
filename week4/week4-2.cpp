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

