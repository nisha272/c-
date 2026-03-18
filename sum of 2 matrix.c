#include<stdio.h>
int main(){
	int a[5][5],b[5][5],sum[5][5];

	printf("enter the elements of a matrix");{
	for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
    scanf("%d",&a[i][j]);}

	printf("enter the elements of b matrix");
	
	for(int i=0;i<5;i++)
	   for(int j=0;j<5;j++)
	scanf("%d",&b[i][j]);

for(int i=0;i<5;i++)
	   for(int j=0;j<5;j++)
	   sum[i][j]=a[i][j]+b[i][j];

	   printf("sum is :");
	   for(int i=0;i<5;i++)
	   for(int j=0;j<5;j++)
	   printf("%d",sum[i][j]);
	return 0;

}