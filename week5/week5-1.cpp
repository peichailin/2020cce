#include <stdio.h>
char line[20]="233233233233233233";
int main()
{
    char *p=line;
    ///scanf("%s,line");
    for(int i=0;line[i]!=0;i++)///line[i]!=0 ªº¦a¤è (  0  ¨ä¹ê´N¬O '\0' )
    {
        p = &line[i];
        char c = line[i];
        if(c!='2') printf("%c",c);

    }
    printf("\n");

}
