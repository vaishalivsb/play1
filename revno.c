#include<stdio.h>
int main()
{
	int a,v;
	scanf("%d",&a);
	while(a>0)
	{
		v=a%10;
		a=a/10;printf("%d",v);
	}
	return 0;
}
