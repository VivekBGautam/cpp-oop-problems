// Write A program which Accept the number from user and acheck wether that number is greater than 100 or Not

////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckGraterOrNot
//  Description     :   Used to check given number is greater than 100 or not
//  Input           :   Integer
//  Output          :   It will return true if number is greater than 100 
//                      else return false
//  Author          :   Vivek Bhauraj Gautam
//  Date            :   21/10/2025
//
////////////////////////////////////////////////////////////////////////

bool CheckGraterOrNot(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    cout<<"Enter the number :\n";
    cin>>iValue;

    bRet = CheckGraterOrNot(iValue);

    if(bRet == true)
    {
        cout<<iValue<< "is greater than 100 ";
    }
    else
    {
        cout<<iValue<<"is Less than 100 ";
    }

    return 0;
}