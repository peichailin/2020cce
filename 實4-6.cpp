#include <stdio.h>
int main()
{
	 char n;
	 scanf("%c",&n);
	 if(n>64 && n<91)
	 {
	 	printf("U");
	 }
	 else if(n>96 && n<123)
	 {
	 	printf("L");
	 }
	 else if(n>=48 && n<=57)
	 {
	 	printf("D");
	 }
	 else
	 {
	 	printf("O");
	 }
}
