#include <stdio.h>
struct DATA///��Ƶ��c�ŧi
{
    float x,y,z;
} point1;
struct DATA points[5];
///point1�O�ܼ�,���o��DATA
///DATA�̭���x,y,z
int main()
{
    ///int b;
    ///int a[5];������
    for(int i=0;i<5;i++)
    {
        points[i].x = i*10;
        points[i].y = 20;
        points[i].z = 0;
        printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }

}