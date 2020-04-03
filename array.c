#include <stdio.h>

int main()
{
	int i=0,n=0;                     //initialize with zero beacuse we avoid garbage value in it.
	
	int arr[n];                     // it is integer type of array, means every one element require 4 bytes of memory. (character=1 byte, float=4 bytes, double=8 bytes).
	
	printf("Enter array size:");    // size of array means how many elements u want to store in array. if size=5 then whole array size is 5*4(type of array).
	
	
	scanf("%d",&n);                //value of size assign in "n" variable.
	
	
	printf("Enter array element:\n");       // \n means next line.
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);             // it assign element in array in sequence.
	}
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);         // it display array in sequence.
	}
	return 0;
}
