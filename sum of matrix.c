#include<stdio.h>
void main(){
	int a[2][2],b[2][2],sum[2][2],i,j;
	printf("enter values in array1:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		
		}
		printf("\n");
	}		
			
	printf("enter values in array2:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
			
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){	
		sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("sum of matrix:\n");	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}





