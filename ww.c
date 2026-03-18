#include<stdio.h>
int main(){
	int n=8,i,sum=0,count=0;
	int arr[n];
	printf("Enter arr :");
	for(i=0;i<n;i++){
	  scanf("%d",&arr[i]);

	}
	printf("Even no. are :\n");
	for(i=0;i<n;i++) 
	if(arr[i]%2==0){
       printf("%d\t",arr[i]);

		count++;
		}
	printf("\n total :%d",count);

	printf("Odd number are :");
	for(i=0;i<n;i++)
		if(arr[i]%2!=0){
			printf("%d\t",arr[i]);
			count++
			printf("\n total  :%d",count);
		}
	
	return 0;
	}