 /////////////////////*********************************************///////////////////////////////////////
 //                                                                                                    //
 //          Write a program which accept number from user and display its multiplication of factors   //
 //                                                                                                    //
 //                                                                                                    //
 ////////////////////*********************************************///////////////////////////////////////
 
 #include<stdio.h>
 
 int MultFact(int iValue)    ///function which accept one parameter returns integer   multfact(12)
 {
 	int iCnt=1;
 	int iFact=1;           //// it initialize with 1 because multiplication with 0 always 0. so we  cant initialize it with 0;
 	
 	for(iCnt=1;iCnt<=iValue/2;iCnt++)       //////iterate loop till its half of number i.e 6
 	{
 		if((iValue%iCnt)==0)              /////check whether no is its factor or not
 		{
 			
 			iFact=iFact*iCnt;       //// iFact=1*1=1  // ifact=1*2=2  // ifact=2*3=6  //ifact=6*4=24  // ifact=24*6=144
			
		}
	}
	return iFact;    ///it return 144 to main function
 	
 }
 
 int main()
 {
 	int iNo;
 	printf("Enter a number: \n");     /////////for e.g iNo=12
 	scanf("%d",&iNo);
 	int iRet=0;                      /////creating local variable to store function return value
 	
 	iRet=MultFact(iNo);             ////// Call a function with parameter
 	
 	printf("%d",iRet);          //////it prints 144.
 	return 0; 
 }
