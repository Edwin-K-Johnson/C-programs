#include <stdio.h>
int main()
{
	float marks;
	char grade;
	printf("enter the mark (0-100)");
	scanf("%f",&marks);
	if(marks>=90&&marks<=100)
	{
		grade ='A';
	}
	else if (marks>=80)
	{
		grade ='B';
	}
	else if (marks>=70)
	{
	    grade ='C';	
	}
	else if (marks>=60)
	{
		grade ='D';
	}
	else if (marks>=50)
	{
		grade ='E';
	}
	else if (marks>=40)
	{
		grade ='F';
	}
	else
	{
		printf ("invalid numbers entered");
	}
	printf("grade = %c",grade);
	return 0;
}
   

