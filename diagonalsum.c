#include <stdio.h>
int main() 
{
    int m, n,a[10][10],t[10][10],i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    printf("Enter the elements :\n");
    for (i = 0; i < m; i++) 
	{
        for ( j = 0; j < n; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }
    for ( i = 0; i < m; i++) 
	{
        for ( j = 0; j < n; j++) 
		{
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose  is:\n");
    for ( i = 0; i < n; i++) 
	{
        for ( j = 0; j < m; j++) 
		{
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}


