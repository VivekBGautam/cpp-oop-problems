// Write A program which Accept the Total mark and Obtain mark And calcute percentage 

////////////////////////////////////////////////////////////////////////
//
//  Required header file 
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CalculatePercent
//  Description     :   Used to calculate percentage by taking total mark and obtain mark
//  Input           :   Total Mark and obtain mark 
//  Output          :   It will return percentage 
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   21/10/2025
//
////////////////////////////////////////////////////////////////////////

float CalculatePercent(int iTotal, int iObtain)
{
    float iPercent = 0.0;

    iPercent = (((float)iObtain / (float)iTotal) * 100);
    return iPercent;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float iRet = 0.0;  
    
    cout<<"Enter Total Mark :\n";
    cin>>iValue1;

    cout<<"Enter Obtain mark :\n";
    cin>>iValue2;

    iRet = CalculatePercent(iValue1, iValue2);

    cout<<"Your Percentage is is : "<<iRet<<"\n";

    return 0;
}