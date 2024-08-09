#include <iostream>
#include <list>
#include <map> 
using namespace std;

/*
���Ϳ� ����Ʈ�� �������� �ݵ�� �˾Ƶμ���.
vector�� �ε����� iter�� ���� ���ϴ� ���� ���� ����
-�۾��� �־� Ž���� �󵵼��� ���⶧���� �� ���� �����

list�� ������·� ���ϴ� ���� �����ϱ� �����
-�߰� ���Ի����� ������
-�����͵� ��ƾ��ϱ⿡ �޸� ��뷮�� �� ����.
-Ž���ӵ��� ������..
*/

/*
push_back : ����Ʈ ���� �߰�
psuh_front : ����Ʈ �տ� �߰�
pop_back : ����Ʈ �� ��� ����
pop_front : ����Ʈ �� ��� ����
insert : ������ ��ġ�� ��� ����
erase : ������ ��ġ�� ��� ����
clear : ��� ��� ����
size : ����Ʈ ��� ���� ��ȯ
front : ù��° ��� ��ȯ
back : ������ ��� ��ȯ
remove : ������ ���� ������ ��� ��� ����
reverse : ����Ʈ ���� ������
sort : ����
*/

/*
Map
-���������̳� �߿� ���� ����ϴ� �����̳�.
- key, value�� ������ ����(pair) 
- key���� �����̳ʿ� �ߺ������� �� �� ����.
- �����˻�Ʈ�� �����Ʈ���� ���� �ߺ��� ������� ���� �ߺ��Ǿ��ִ°����� ������ ��Ƽ�� 

*/
void main()
{	
	//list
 //   std::list<int>lst = { 3,1,45,7,10 };
 //   lst.push_back(9); //����Ʈ ���� 9 �߰�

	//for (auto& i : lst)
	//{
	//	std::cout << i << std::endl;
	//}
	//lst.push_front(6); //����Ʈ �տ�6 �߰�

	//std::list<int>::iterator iter = lst.begin();

	
	
	
	
	
	//map
	std::map<std::string, int>data;
	//�ݺ���
	std::map<std::string, int>::iterator iter1;



	//pair
	// Ű �� �ΰ��� ��� �ϳ��� ��ü�� ����ϴ� ���ø� Ŭ����
	// �ΰ��� ���� �ٸ� Ÿ���� ���� �Բ� ���尡��
	//���� �ΰ��� ����� ������ �ִ�
	//first, second


	//1.value_type�� �̿��� ���
	//�⺻���� Ű-�� ������ Ÿ���� ��Ÿ����. pair ��ü�� ������ ������ insert�� ����.
	//�������� ������.
	data.insert(std::map<std::string, int>::value_type("�ٺ�", 1)); //Ű :�ٺ� , ��:1


	//2.make_pair
	//��� ��ü�� �����ϴ� �Լ� ���ø�
	//make_pair("����", 5)->std::pair(string, int) 
	data.insert(std::make_pair("����", 5)); //�ٷ����� ������ ���ø� ���ڸ� �ڱⰡ �ڵ����� �߷��ؼ� ����(Ÿ���̸�Ȯ���� �ʾ����ٴ� ������ �ִ�)


	//3. pair�� �̿��� ���
	data.insert(std::pair<std::string, int>("BTS", 10));
	data.insert(std::pair<std::string, int>("����", 30));
	data.insert(std::pair<std::string, int>("������", 170));
	data.insert(std::pair<std::string, int>("���켺", 400));
	data.insert(std::pair<std::string, int>("�𸮾�", 20));


	//4. ��ü�� ���� �����ϴ� ���
	std::pair<std::string, int>pt1("���ѹα�", 10);
	data.insert(pt1);

	data.erase("���켺");

	for (auto& pair : data)
	{
		std::cout << "Ű�� : " << pair.first << " , ������ : " << pair.second << std::endl;
	}

	std::map<std::string, int>m;
	m.insert(std::pair<std::string, int>("Apple", 1));
	m.insert(std::pair<std::string, int>("Banana", 2));
	m.insert(std::make_pair("grape", 3));

	auto res = m.insert(std::make_pair("Banana", 10));
	
	if (!res.second)
	{
		std::cout << "�ٳ����� ������? : " << res.first->second << std::endl;
	}


	//find
	auto iter = m.find("Apple"); //�־��� Ű���� ã�Ƽ� ���ͷ����� ��ȯ , Ű�������� ���� ��ȯ
	if (iter != m.end())
	{
		std::cout << "ã��!" << iter->second << std::endl;
	}
	else
	{
		std::cout << "����" << std::endl;
	}

	//count : �־��� Ű�� ������ ��ȯ //Ű�� �����ϱ⶧���� ���ϰ��� 0�̰ų� 1��
	std::cout << "Apple : " << m.count("Apple") << std::endl;

	//clear : ��� ��Ҹ� ������
	//empty : ����ֳ�?
	//size : 
	for (auto it = m.begin(); it != m.end(); ++it)
	{
	}
	for (auto it = m.rbegin(); it != m.rend(); ++it) //����
	{
	}

}