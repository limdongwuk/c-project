#include<iostream>

using namespace std;



int main()
{
    //char c = 'a'; //'' ���Ϲ��� ""���ڿ�
    //char h[4] = "��"; // �迭�� �������� �ڵ����� �ι��� �߰���, ���ϰ� \0�� ���־ 4����Ʈ�� ��(c��Ÿ��)
    //cout << sizeof(h) << endl;

    ////���� �迭
    //char str[] = "Hello World";
    //    cout << str << endl;
    //cout << sizeof(str) << endl;


    //���ڿ��� �迭�� �����ϴ� ���
    char str[50];

    strcpy_s(str, "Hello world");
        cout << str << endl;

        //���ڿ� ���� ���
        cout << strlen(str) << endl;

        char str1[] = "Hello";

        for (int i = 0; i< strlen(str1); ++i) //str1[i]!='\0';�� �ص���(�ι��ڰ� �ƴҶ�����) i< strlen(str1)���
        {
            cout << "����" << i << " : " << str1[i] << endl;
        }


     //strcats(str3�� str4���ڿ��� ���̴� ��)
 
        char str3[50] = "Hello, ";
        char str4[] = "world"; 

        strcat_s(str3, str4); 
        cout << str3 << endl;




     //strcmp ���ϴ� ��
        char str5[] = "Hello";
        char str6[] = "Hello";
        char str7[] = "world";

        int result1 = strcmp(str5, str6);
        int result2 = strcmp(str5, str7);

        cout << "str5, str6 ��� : " << result1 << endl;   //0 => �� ���ڿ��� �����Ҷ�
        cout << "str5, str7 ��� : " << result2 << endl;  //-1 =>ù��° ���ڿ��� �ι�° ���ڿ����� �۰ų� �ڿ� �ִٸ� ����, +1 ù��° ���ڿ��� �ι�° ���ڿ����� ũ�ų� �տ� �ִٸ� ���


}
