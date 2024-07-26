#include<iostream>

using namespace std;



int main()
{
    //char c = 'a'; //'' 단일문자 ""문자열
    //char h[4] = "ㅁ"; // 배열에 마지막에 자동으로 널문자 추가됨, ㅁ하고 \0이 들어가있어서 4바이트가 됨(c스타일)
    //cout << sizeof(h) << endl;

    ////문자 배열
    //char str[] = "Hello World";
    //    cout << str << endl;
    //cout << sizeof(str) << endl;


    //문자열을 배열에 복사하는 방법
    char str[50];

    strcpy_s(str, "Hello world");
        cout << str << endl;

        //문자열 길이 출력
        cout << strlen(str) << endl;

        char str1[] = "Hello";

        for (int i = 0; i< strlen(str1); ++i) //str1[i]!='\0';로 해도됨(널문자가 아닐때까지) i< strlen(str1)대신
        {
            cout << "문자" << i << " : " << str1[i] << endl;
        }


     //strcats(str3에 str4문자열을 붙이는 법)
 
        char str3[50] = "Hello, ";
        char str4[] = "world"; 

        strcat_s(str3, str4); 
        cout << str3 << endl;




     //strcmp 비교하는 것
        char str5[] = "Hello";
        char str6[] = "Hello";
        char str7[] = "world";

        int result1 = strcmp(str5, str6);
        int result2 = strcmp(str5, str7);

        cout << "str5, str6 결과 : " << result1 << endl;   //0 => 두 문자열이 동일할때
        cout << "str5, str7 결과 : " << result2 << endl;  //-1 =>첫번째 문자열이 두번째 문자열보다 작거나 뒤에 있다면 음수, +1 첫번째 문자열이 두번째 문자열보다 크거나 앞에 있다면 양수


}
