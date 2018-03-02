#include<stdio.h>
int main()
{
	int a,b[10],v,d=1,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	scanf("%d",&b[i]);
	}
	for(i=1;i<=a;i++)
	{
		v=b[i]%10;
	b[i]=b[i]/10;
	d=v*d;
	}
	printf("%d",d);
	return 0;
}
