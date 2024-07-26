
#include <iostream>

using namespace std;

void main()
{
    //과제5.별찍기
    //- 본인이 판단한 효율적인 반복문 1종을 선정해서 사용할 것
    //
    //* ****
    //****
    //***
    //**
    //*
    //
    //*
    //**
    //***
    //****
    //*****

    
   
     for (int i = 1; i <=5; i++)
     {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
     }
    
        
        for (int i = 5; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    

 
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 3; j >= i; j--)
        {
            cout << "　";
        }
        {
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "＊";
            }
        }
        cout << endl;
    }
   

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1;  j <= 2*i - 1; j++)
        {
            cout << "＊";
        }
        cout << endl;
        for (int j = 4; j >= i; j--)
        {
            cout << "　";
        }
    }
            


       
   





}