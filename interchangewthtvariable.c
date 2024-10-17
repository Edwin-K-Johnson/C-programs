#include <stdio.h>
int main()
{
	int a,b;
	printf ("enter two numbers :");
	scanf ("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf ("the interchanged values are %d\t%d",a,b);
	return 0;
}

