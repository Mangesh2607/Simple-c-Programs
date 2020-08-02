/////////////////////*********************************************///////////////////////////////////////
 //                                                                                                    //
 //          Write a program which accept number from user and display its factors in decreasing order //
 //                                                                                                    //
 //                                                                                                    //
 ////////////////////*********************************************///////////////////////////////////////
 
 #include<stdio.h>
 
 void DescOrd(int iValue)                                //////function accept one parrameter which return nothing
 { 
  	int iCnt=0;                                    
///     iCnt=6       iCnt>0  decreament by1
 	for(iCnt=iValue/2;iCnt>0;iCnt--)                        ///iterate loop in descresing order  
 	{
 		if((iValue%iCnt)==0)                               ////check  the condition for factor
 		{
 			printf("%d\t",iCnt);                        /////print factor as 6 4 3 2 1
		}
	}
 	
 }
 
 int main()
 {
 	int iNo=0;
 	printf("Enter a number: \n");    ////for e.g iNo=12
 	scanf("%d",&iNo);
 	
 	DescOrd(iNo);        ////call the function with parameter DescOrd(12)
 	
 	
 	return 0;
 }
