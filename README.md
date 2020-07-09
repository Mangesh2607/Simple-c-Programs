# Simple-c-Programs
internal representation of PointerArray.cpp program

int main()
{
	int *arr=NULL;                          -> This is pointer with name arr which points to null.it means arr=0.
	int size=0;                             -> size is variable of type integer which is initialize to 0.
	cout<<"enter size of array: "<<endl;    -> ask user to enter size of array that we want to. ex size=5
	cin>>size;                              -> value assign to this Size variable
	arr=new int[size];                      -> it indicate that arr is now become array using dynamic memory allocation. means it is size of 5.
	int i;                                  -> we create an integer of i.
	
	cout<<"\nenter elements in array:";     -> ask user to enter elements in array.
	for(i=0;i<size;i++)                     -> loop perform fro 0 to 4 because start from i=0 and stop until 5=size.
	{
		cin>>arr[i];                          ->elements assign to the array
	}
	cout<<"\nelements in array are:";       
	for(i=0;i<size;i++)                  
	{
		cout<<arr[i]<<endl;                    -> dislay the array
	}
	
	
	return 0;
}
