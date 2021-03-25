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
