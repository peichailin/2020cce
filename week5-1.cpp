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
