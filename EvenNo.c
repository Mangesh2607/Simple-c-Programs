///////////////////    Write a program which accept one number from user and print that number of even numbers on screen          ////////////

#include<stdio.h>

void EvenNum(int iValue)                  ///iValue=7
{
	int iCnt=0;
	
	if(iValue<0)
	{
		iValue=-iValue;                 //If you give negative value it convert into  positive
	}
	
	if(iValue==0)
	{
		printf("Invalid Input");      //If  you give 0 a input it prints invalid input
	}
	
	
	//         iCnt=(7*2)=14  
	for(iCnt=1;iCnt<=iValue*2;iCnt++)    ///iterate the loop from 1 to 14
	{
		
		
		if((iCnt%2)==0)                 /// (1%2)->false // 2%2->true //3%2->false // 4%2->true  and so on.
		{
			printf("%d\t",iCnt);        //print even no if above condition true
		}
	}
}


int main()
{
	int iNo=0;                        
	
	printf("Enter the number: \n");           //// for e.g. iNo=7
	scanf("%d",&iNo);
	
	EvenNum(iNo);                            ////EvenNum(7)
		
	
	return 0;
}
