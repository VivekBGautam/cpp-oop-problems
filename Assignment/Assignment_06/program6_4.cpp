// Write A program which Accept the number from user and Perform its Multiplication

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Multiplication
//  Description     :   Used to Multiplay three number and it will handell all condition if any number is zero
//  Input           :   Integer,Integer,Integer
//  Output          :   It return multiplication value of numbers
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   21/10/2025
//
////////////////////////////////////////////////////////////////////////

int Multiplication(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 == 0) && (iNo2 == 0))
    {
        return iNo3;
    }
    else if((iNo2 == 0) && (iNo3 ==  0))
    {
        return iNo1;
    }
    else if((iNo3 == 0) && (iNo1 == 0))
    {
        return iNo2;
    }
    else if(iNo1 == 0)
    {
        return iNo2 * iNo3;
    }
    else if(iNo2 == 0)
    {
        return iNo1 * iNo3;
    }
    else if(iNo3 == 0)
    {
        return iNo2 * iNo1;
    }
    else
    {
        return iNo1 * iNo2 * iNo3;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;  
    
    cout<<"Enter the first number :\n";
    cin>>iValue1;

    cout<<"Enter the second number :\n";
    cin>>iValue2;

    cout<<"Enter the Third number :\n";
    cin>>iValue3;

    iRet = Multiplication(iValue1, iValue2, iValue3);

    printf("Multiplication of Three Number is : %d\n",iRet);

    return 0;
}