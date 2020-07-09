#include<iostream>

using namespace std;

int main()
{
	int *arr=NULL;
	int size=0;
	cout<<"enter size of array: "<<endl;
	cin>>size;
	arr=new int[size];
	int i;
	
	cout<<"\nenter elements in array:";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nelements in array are:";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	return 0;
}
