#include <stdio.h>
char line[20]="233233233233233233";
int main()
{
    char *p=line;
    ///scanf("%s,line");
    for(int i=0;line[i]!=0;i++)///line[i]!=0 ���a�� (  0  ���N�O '\0' )
    {
        p = &line[i];
        char c = line[i];
        if(c!='2') printf("%c",c);

    }
    printf("\n");

}
