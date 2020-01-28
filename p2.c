#include<stdio.h>
void str1(char s)
{
	printf("string is:%c",s);
}
void main()
{
	char str;	
	printf("enter the string:");
	scanf("%s",&str);
	str1();
}

