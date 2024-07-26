#include<iostream>
#include <stdio.h>
using namespace std;

void main()
{
    //과제4.반복문 숙달(제일 적합한 구문 사용)
    //- 정수 하나를 입력 받아 -5씩 반복적으로 연산이 되는 식을 만든다.
    //ㄴ 종료 조건 : -15을 넘어가면 탈출
    //ㄴ 조건 : 입력 받는 값은 - 10 ~10 사이의 숫자여야 하고 이외의 값을 입력시 프로그램을 종료를 시킨다.
    //
    //※ 조건식과 논리 연산자를 잘 보고 조건식을 만들어 반복문이 돌아가게 만드는게 포인트
    
    int i;
    cout << "정수를 입력하세요" << endl;
    cin >> i;
    int j = 5;
    while (-10 < i&&i < 10)
    {
        i -= j;
        cout << i << endl;
        while (i < -15)
        {
        }
    }
   




}