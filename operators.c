#include <stdio.h>

int main() 
{
    float num1, num2, result;
    char o;
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &o);
    
    printf("Enter second number: ");
    scanf("%f", &num2);

     
    if (o== '+')
	{
        result = num1 + num2;
        printf("%f + %f = %f\n", num1, num2, result);
    } 
	else if (o == '-') 
	{
        result = num1 - num2;
        printf("%f - %f = %f\n", num1, num2, result);
    } 
	else if (o == '*') {
        result = num1 * num2;
        printf("%f * %f = %f\n", num1, num2, result);
    } 
	else if (o == '/') 
	{
        if (num2 != 0) 
		{
            result = num1 / num2;
            printf("%f / %f = %f\n", num1, num2, result);
        } else 
		{
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
	else
	 {
        printf("Error: Invalid operator.\n");
     }

    return 0;
}
