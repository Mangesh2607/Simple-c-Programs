 /////////////////////*********************************************///////////////////////////////////////
 //                                                                                                    //
 //          Write a program which accept number from user and print even factors of that number       //
 //                                                                                                    //
 //                                                                                                    //
 ////////////////////*********************************************///////////////////////////////////////
 
 #include<stdio.h>
 
 void EvenFact(int iValue)   ////EvenFact is a function which accept one integer as a parameter which returns nothing   EvenFact(24)
{
	int iCnt=0;
	
	if(iValue<0)
	{
		iValue=-iValue;
	}
	
	if(iValue==0)
	{
		printf("Invalid Input\n");
	}
	
//        1  iCnt<=(24/2)=12
	for(iCnt=1;iCnt<=iValue/2;iCnt++)   /////iterate the loop 1 to 12....we iterate loop till 12 because every number has its factor till its half number. e.g iValue=20 then its factor upto 10 only
	{
		if((iValue%iCnt)==0)            /////// check the condition for factor
		{
			if(iCnt%2==0)               ///////check the condition whether factor is even or not
			{
				printf("%d\t",iCnt);    /////////print even factor
			}
			
		}
	}
}
 
 
 int main()
 {
 	int iNo=0;                                   
 	printf("Enter  a Number: \n");       ///////for e.g iNo=24;
 	scanf("%d",&iNo);
 	
 	EvenFact(iNo);                                 /////Call for function with parameter EventFact(24)
 	
 	
 	return 0;
 }
