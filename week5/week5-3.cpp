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



