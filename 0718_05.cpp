
#include <iostream>

using namespace std;

void main()
{
    //����5.�����
    //- ������ �Ǵ��� ȿ������ �ݺ��� 1���� �����ؼ� ����� ��
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
            cout << "��";
        }
        {
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "��";
            }
        }
        cout << endl;
    }
   

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1;  j <= 2*i - 1; j++)
        {
            cout << "��";
        }
        cout << endl;
        for (int j = 4; j >= i; j--)
        {
            cout << "��";
        }
    }
            


       
   





}