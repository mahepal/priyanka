#include<stdio.h>
int main()
{
	int a,b,ans;
	printf("enter number of a and b:");
	scanf("%d %d",&a,&b);
	ans=findgcd(a,b);
	printf("gcd is:%d",ans);
}
int findgcd(int a,int b)
{
	if(a=0)
		return b;
	if(b=0)
		return a;
	if(a=b)
		return b;
	if(a>b)
		return findgcd(a-b,b);
	else
		return findgcd(a,b-a);
}
/*
int findgcd(int a,int b)
{
	if(a==0)
		return b;
	else
		return gcd(b%a,a);
}
*/
