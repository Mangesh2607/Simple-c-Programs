#include<stdio.h>

int main()
{
	int arr[10];  // initialize array of 10 elements of type integer, means arr=40 bytes.
	int i,s;      // initialize 2 variables of type integer.
	int sum=0;   
	int avg=0;
	
	printf("enter no of elements for array: ");   
	scanf("%d",&s);
	
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<s;i++)
	{
		sum=sum+arr[i];    
		
	}
	printf("summation is %d\n",sum);
	
	for(i=0;i<s;i++)
	{
		avg=sum/s;
	}
	
		printf("average is %d",avg);
	
	return 0;
}
