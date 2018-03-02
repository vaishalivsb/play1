#include <stdio.h>
int main(void) 
{
	int l,b,h,surface,volume;
	scanf("%d%d%d",&l,&b,&h);
	volume=l*b*h;
	surface=l*b;
	printf("%d\n%d",surface,volume);
	return 0;
}
