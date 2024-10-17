#include <stdio.h>
int main()
{
	int hours,minutes,totalminutes;
	printf("enter the hour");
	scanf("%d",&hours);
	printf("enter the minutes");
	scanf("%d",&minutes);
	totalminutes=(hours*60)+minutes;
	printf("%d is the total minutes",totalminutes);
	return 0;
}
   

