#include<iostream>

using namespace std;


//삼항 연산자
//?의 활용 : 앞에 num1 > num2가 맞냐? true 면 앞에꺼 false면 뒤에꺼
//코드의 가독성을 높이고 간결한 조건을 표현하는데 유용하게 쓰임. 복잡한 조건식에는 if로 하는게 젤좋음. 오히려 복잡할수도..

int main()
{
    int num1 = 2;
    int num2 = 3;

    int result;

    result = (num1 > num2) ? num1 : num2; 
    cout << result << endl;
    
    //3항연산자로 처리하기 어려운 경우의 예시
    int a = 5;
    int b = 10;
    int c = 15;
    int result2;
    if (a > b)
    {
        if (b < c)
        {
            result2 = a + b;
        }
        else
        {
            result2 = a - b;
        }
    }
    else
    {
        if(b>c)
        {
            result2 = a * b;
        }
        else
        {
            result2 = a / b;
        }
    }
    cout << "결과 : " << result2 << endl;


    //3항 연산자로 위 if문을 처리할 경우(쓰지말것)
    result2 = (a < b) ? ((b < c) ? a + b : a - b) : (b > c ? a * b : a / b);



}

