#include<stdio.h>
int main(){
	int r,c,i,j,a[10][10],b[10][10],sum[20][20];
	printf("Enter the number of rows(1 to 10): \n");
	scanf("%d",&r);
	printf("Enter the number of coloumn(1 to 10): \n");
	scanf("%d",&c);
	
	printf("Enter the element of first matrix: \n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter the element  A%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the element of second matrix: \n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter the element B%d%d:",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	//adding two matrix
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	//print the sum
	printf("The sum of two matrix:\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d ",sum[i][j]);
			if(j==c-1){
				printf("\n\n");
			}
		}
	}
	return 0;
}
