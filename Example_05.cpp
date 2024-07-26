#include <iostream>

//���ڿ��� ���õ� ���
// �� STL -> string -> �޸� ����̳� ���ڿ��� �ٷ� �� �ִ� �Լ����� �����Ѵ�.(�����Ҷ��� ������ ������� �� ��)
// �� char 
#include <string>


// w => worldwide(�����ڵ�?)
// �����ڵ�� 2����Ʈ ��Ƽ����Ʈ 1����Ʈ �Ǵ� 2����Ʈ ����� 1 �ѱ��� 2
#include <wchar.h>

using namespace std;
//(namespace Ȱ��ó ã�Ƽ� �� �Ẹ�� Ȱ��ó�� ���ָ���)

#pragma region �Լ�
/*

�� �Լ�

- ������ ���α׷��ֿ� ��ǥ ����
- �밭 ����� ���Ǳ� (����� ���Ǳ�� ���Ḧ �����ϴ� ���)


�� �Լ��� ����ϴ� ����

- �ߺ� ���� ����
- ���� ������
- ������ ���
- ����


ex) �Լ��� �����ϴ� ���
��ȯ �ڷ��� �Լ��̸�(�Է� �ڷ���) (���� or �μ���� �Ҹ���.)
void        main   ( )

{ <---- �Լ��� ����

        �Լ��� ����

} <---- �Լ��� ��

�� ����

�Լ� �̸� : �� �״�� �Լ��� �̸�(�Լ��� �����Ҷ� ����� �ȴ�.)
����(�μ�) : (�Լ��� �ؾ� �� ���� ���λ����� �����ϸ� �Լ��� �۾��Ÿ���� �� �� �ִ�.
��ȯ �ڷ��� : �Լ��� �����ϴ� ���� ������ ���̸� �Լ��� �۾� ���
�Լ� ���� : {} �ȿ� �Լ��� ���� �ڵ尡 ����

- �Լ��� �̸��� "�⺻��"���� �����ؾ� �Ѵ�.
 �� ������ �̸��� �Լ��� N�� �̻� �����ϴ� ���� �Ұ����ϴ�.


 �� void�� �Լ���?
  
  - ����(��ȯ)�� ���� ���� �Լ��� �ǽðڴ�.
  - �Լ��� �Է� �Ǵ� ����� ���� ��� void Ű���带 ���ؼ� �ش� ��/����� ���ٴ°��� ����ؾ� �Ѵ�.


  - �츮�� ����� �Լ�?
  �� rand(): �������� �̴� �Լ�
  �� sleep(1000) : 1�ʰ� ���߰� ����� �Լ�


  �ڡڡ� �Լ��� ������ �⺻������ �����Լ� ���ʿ� �Ѵ�.(�� ��ų ��)


  �� C / C++ ����� �Լ� ������ �ʿ��� ����

   -  C / C++ ����� �����Ϸ��� �⺻������ ������ ������ ������ �Ʒ��� �ؼ��Ѵ�.
   - �̶� �����Ϸ��� �̹� ����ģ ���ο��� ���ԵǾ� ���� ���� �Լ��� ȣ�� �� ��� �����Ϸ��� �̿� ���� ������ �𸣱� ������ ������ �߻��Ѵ�.
   - �׷��� ������ �Լ��� ������ ���ؼ� �����Ϸ����� �ش� �Լ��� ���� ��򰡿� �����Ѵٴ� ���θ� �˷���� �Ѵ�.
   - �� , �Լ��� ����� ���ǰ� �ݵ�� ������ ���Ͽ� �������� �ʾƵ� �ȴٴ� ���� �ǹ�
   - ���� �Լ��� ������ �ߺ����� ����ϴ� ���� ���������� �Լ��� ���Ǵ� �ݵ�� �����ؾ� �Ѵ�.

  - �Ծ�
  �� ����Ƽ�� -> ī���(�ҹ���) / ��� ���� -> �Ľ�Į ���̽�
  
*/
#pragma endregion

//�ڡڡڡڡ��Լ��� �鿩���� ��������

 
//�Լ� ����
void OutPutValueA();

//��Ʈ���� ������ ��ȯ�� ���� �ʴ´�.(void)
void OutPutValueB(int numA);
void OutPutValueC(int numA, int numB);

//���ڿ� (��ȯ o / ��ȯ x)
void OutPutString(string str);
string GetStringFunc(string strA, string strB);
int CheckingString(string strA, string strB);

// ��ȯ���� ����(int)
int GetAddValue(int numA, int numB);
int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
float GetDivideValue(int numA, int numB);





//namespace Ȱ������ �����Լ��� ��������
namespace NS_A
{
    void EnemyAttack()
    {
        cout << "���� �ٷ� NS_A �Լ�" << endl;
    }
}

namespace NS_B
{
    void EnemyAttack()
    {
        cout << "���� �ٷ� NS_B �Լ�" << endl;
    }
}


void main()
{

   

    NS_A::EnemyAttack();
    NS_B::EnemyAttack();

    cout << '\n';

    OutPutValueA();
    OutPutValueB(5);
    OutPutValueC(1, 9);

    OutPutString("������ �ʹ� ��մ�.");

    int nResultA = GetAddValue(18, 25);

    //���� ���·�
    OutPutValueB(nResultA);

    string sResultB = GetStringFunc("����", "����");
    OutPutString(sResultB);

    nResultA = CheckingString("������ �ʹ� ��մ�.", "������ �ʹ� ��մ�.");
    OutPutValueB(nResultA);

    cout << '\n';

    int numL = 0;
    int numR = 0;

    cout << "���� (2��) �Է�" << endl;

    cin >> numL >> numR;

    printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
    printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
    printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
    printf("%d / %d = %d\n", numL, numR, GetDivideValue(numL, numR));

    /*
    - ��ó�� �Լ��� �پ��� ������ ���� �� �ִ�.
    
    C / C++ ����� �Լ� ����
     - �Է� o, ���o
     - �Է� o, ���x
     - �Է� x, ���o
     - �Է� x, ���x
     
     ex)
     //�Է� o, ��� x
     void ShoWinfo(int nAge, char psName);
     //�Է� x, ��� o
     int GetRandomValue(void);
     //

     
     */

    

}







    /*
     - �̹���
     ���� ����1. ���ڿ� ���� �׽�Ʈ

     - �޾��

     <���� ����>
     C++ ���� Ǯ��� �ϰ� ��ĭ�� �˸°� ä�� �����ÿ�.
     C ��Ÿ�� ���̺귯�� / STL�� ��Ÿ ���̺귯�� �Լ��� ����ϸ� �ȵ˴ϴ�.
     Ư�� STL string�� ���� �ٷ� Ż�� ó���Ǵ� ���� �ٶ��ϴ�.
     �׸��� �ش� ����� ���� �� �׷��� �ۼ��� �ߴ��� ª�� �ּ��� �־��ּ���.

     ����. �־��� ���ڿ��� �ܾ� ������ ������ ������ ����Ͻÿ�.
     <��>
     �Է� ��: "Hellow World this is Pearl Abyss"
     ��ȯ ��: "Pearl Abyss is this World Hellow"

     <����>
     �Է� ���ڿ��� �յڿ� ������ ���ٰ� ����
     ��� �ܾ�� ���� �� ĭ���� ���еȴٰ� ����

     void ReverseWords(char* output, int outptArraySize, const char* input)
     {

          // �̰��� ä�� �����ÿ�.

     }

     �ۼ��� ������ �ð� ���⵵�� ����ϴ� ������ ������ �Լ��� �����ϰ� ���۹�İ� �� �׷��� �ۼ��ߴ��� ����Ͻÿ�.

     */

     //������ �Է� �����Ϳ� ��� �����Ͱ� ������ �ش� ������ �Լ���� ��Ī�� �� �ִ�.
     //���� C / C++���� �Լ� ������ �����ϱ� ������ ��ǻ���� ��ɹ��� �ۼ��ϱ� ���ؼ��� �ݵ�� �ش� ������ �Լ��ȿ� �ۼ������ �Ѵ�.


    void OutPutValueA()
    {
        cout << "���� �ٷ� �Լ���." << endl;
    }

    void OutPutValueB(int numA)
    {
        cout << numA << endl;
    }

    void OutPutValueC(int numA, int numB)
    {
        cout << numA << numB << endl;
    }

    void OutPutString(string str)
    {
        cout << str << endl;
    }

    string GetStringFunc(string strA, string strB)
    {
        // �Լ��� return Ű���带 ���ؼ� �Լ��� ���� �Ǵ� ��� ���� ��ȯ�ϴ°��� �����ϴ�.
        // �Լ��� ��� ���� �Է°��� �޸� �ϳ��� ������� ��ȯ�� �� �ִ�.(�Լ� ����)

        // ?
        // string ���ڿ��� �ٷ� �� �ִ� �پ��� ����� �����ϰ� �ִ�.(+ ����ó��)
        return strA + strB;
        //return strA.append(strB);
    }

    int CheckingString(string strA, string strB)
    {
        // ������ 1 / �ٸ��� 0 ��ȯ
        return strA == strB;
    }

    int GetAddValue(int numA, int numB)
    {
        return numA;
    }

    int GetSubValue(int numA, int numB)
    {
        return numA - numB;
    }

    int GetMultipleValue(int numA, int numB)
    {
        return numA * numB;
    }

    float GetDivideValue(int numA, int numB)
    {
        return numA / (float)numB;
    }



    /*
    
    ����1. ���� ����

    - ���ݱ��� ��� ������ ������ �Ѵ�.

    - ��� ������ �ߴ��� ��üȭ ���ѿ´�.
     �� ������ ����� ����� �̾߱�



    ����2. ����������

    - ����ġ���� ����ؼ� �����.

    - ġƮ ��ɰ� ���� ����� �߰��Ѵ�.

    �� �ʱ� ������ : 10,000��
    �� �ּ� ������ 1,000�� ����
    
    - 5���� �ϰų� ���� ���� ���� ���� ������ ������ �����Ѵ�.

    - �̱�� �ǵ��� x3�� ��� ���� �ǵ��� x7�踦 �Ҵ´�.

    - ��� ��� �ǵ��� x5�踦 ��´�.

    - �Լ��� ����غ����� ��õ
    �� ���뿡 ������� �Լ��� ������ 7�� �̻�
    - ���ǹ� �Ⱦ����ϴ°� ��õ

    
    ���� ����. �迭

    - ��Ʈ�� ����´�.

    - �����Ұ� ������ �´�.

     
    */