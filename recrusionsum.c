#include <stdio.h>

int main() {
    int n,a[10][10],sum=0,i,j;

    printf("Enter size : ");
    scanf("%d", &n);

    sum = 0;

    printf("Enter the elements :\t");
    for (i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

  
    for ( i = 0; i < n; i++) {
        sum += a[i][i];  
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}

