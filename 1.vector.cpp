//#include<iostream>
//#include<vector>
//int main()
//{
//#pragma region ���� ����
//    std::vector<int> v1;//�� ���� ����
//    std::vector<int>v2(10); //10���� �⺻��(0)���� �ʱ�ȭ�� ���� ����
//    std::vector<int>v3(10, 5); //10���� ��Ҹ� 5�� �ʱ�ȭ�� ���� ����
//    std::vector<int>v4 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };// �ʱ�ȭ ����Ʈ�� Ȱ���� ���ͻ���
//
//    //size()������ ������ ������
//    std::cout << "������ ������ v1 : " << v1.size() << std::endl;
//    std::cout << "������ ������ v2 : " << v2.size() << std::endl;
//    std::cout << "������ ������ v3 : " << v3.size() << std::endl;
//    std::cout << "������ ������ v4 : " << v4.size() << std::endl;
//
//    std::cout << "========================================" << std::endl;
//
//    //capacity() : ���� �޸𸮳����� �ִ� ������ �� �ִ� ����� ����
//    std::cout << "������ capacity v1 : " << v1.capacity() << std::endl;
//    std::cout << "������ capacity v2 : " << v2.capacity() << std::endl;
//    std::cout << "������ capacity v3 : " << v3.capacity() << std::endl;
//    std::cout << "������ capacity v4 : " << v4.capacity() << std::endl;
//
//    v4.push_back(11); //psuh_back() : �� �ڿ��ٰ� ()�� ��Ҹ� �ְڽ��ϴ�. ��������� �޸��� 1/2��ŭ �÷���(�ִ� ������ �� �ִ� ����� ������ �ݸ�ŭ �÷���)
//    std::cout << "������ capacity v4(Ǫ�ú� ��): " << v4.capacity() << std::endl;
//    std::cout << "========================================" << std::endl;
//
//    std::vector<int>v5;
//    v5.push_back(1); // �ǵڿ� 1�ְ� ���Ϳ� �� �� �ִ� ����� ������ ������ŭ �þ�ٴ¶�
//    v5.push_back(2);
//    v5.push_back(3);
//    v5.push_back(4);
//    v5.push_back(5);
//
//    for (int i = 0; i < v5.size(); i++) //������ �����ŭ 5�ϵ�
//    {
//        std::cout << "for������ ���� v5 ��� : " << v5[i] << std::endl; //index�� ������ �Ǵ°� Ȯ��
//        std::cout << "for������ ���� v5 ��� : " << v5.at(i) << std::endl; //����Լ��� at���� ������ �Ǵ°� Ȯ��
//    }
//
//    for (int& i : v5) //������ ���¸� ���� ����
//    {
//        std::cout << "for������ ������� ���� v5 ��� : " << i << std::endl;
//        //������� for���� �迭�̳� ����Լ�at���� ���� x, �����̳��� ����Ҹ� ��ȸ�Ѵ�.(�Ϻκи� for���� ��ƴ�), �ݺ��� ������ ���� �˾Ƽ� ����
//    }
//    for (auto& i : v5) //�����Ϸ��� �ڵ����� Ÿ���� ��������, ȣ��ȣ ������ ������ Ÿ���϶� ����ϸ� ����.
//    {
//
//    }
//    for (const auto& i : v5)
//    {
//        //i += 1; �ܽ�Ʈ�� �ִ°� ������ ���⼱ i�� ���� ����ǹǷ� ���� �ȵ�..��
//        std::cout << "for������ ������� ���� v5 ��� : " << i << std::endl;
//    }
//
//#pragma endregion 
//
//#pragma region ������ ����Լ�
//
//    /*
//    empty() : �ش� ���Ͱ� ����ִ��� Ȯ��
//    clear() : ������ ��� ��Ҹ� ����
//    at() : ������ ��� ����
//    front() : ������ ù��° ��� ��ȯ
//    back() : ������ ������ ��� ��ȯ
//    pop_back() : ������ ������ ��Ҹ� ����
//    push_back() : ������ ���� ��� �߰�
//    insert() : ������ ��ġ�� ��Ҹ� ����
//    erase() : ������ ��ġ�� ��Ҹ� ����
//    reserve() : ������ �뷮�� ����
//    swap() : �� ���͸� ��ȯ
//    */
//    std::cout << "========================================" << std::endl;
//    std::vector<int> v6;
//    v6.push_back(1);
//    v6.push_back(2);
//    v6.push_back(3);
//    v6.push_back(4);
//    v6.push_back(5);
//    v6.insert(v6.begin() + 1, 10);  //�ε��� 1�� 10����(���� �ε���1�� �����)
//    
//       for (int i = 0; i < v6.size(); i++)
//       {
//           std::cout << v6[i] << std::endl;
//       }
//    v6.erase(v6.begin() + 3); //�ε��� 3�� �������
//    for (auto& i : v6) //�̷��� ����ϸ� i�� ������ ����Ҹ� �����ϱ� ������ v6.at(i)�� v6[i]���·δ� ����� �� ����.
//    {
//        std::cout << i << std::endl;
//    }
//    v6.pop_back();//������ ��� ����
//    //1,2,3,4
//    //1,10,2,3,4
//    //1,10,2,4
//    //1,10,2
//    //��� 1,10,2
//    std::cout << "========================================" << std::endl;
//#pragma endregion
//#pragma region iterator
//    /*
//    �����Ϳ� ����� �༮. �����̳��� ����� ���Ҹ� ��ȸ�ϰ� �����ϴ� ���
//    begin()-> ������ ��Ÿ��(���� ���Ұ� �ִ� ��ġ)
//    //end()->���� ���Ұ� �ƴ� ���� ��Ÿ��(������ ������ ��Ұ� �ƴ� �״��� ������ ����Ŵ)
//    */
//    std::vector<int> v7;
//    v7.push_back(1);
//    v7.push_back(2);
//    v7.push_back(3);
//    v7.push_back(4);
//    v7.push_back(5);
//    std::cout << "==�ݺ��ڷ� ���" << std::endl;
//    for (std::vector<int>::iterator it = v7.begin(); it != v7.end(); ++it) //it�� v7�ǹ����� ���尡 �ƴҶ����� ���ƶ�
//    {
//        std::cout << *it << std::endl;
//    }
//
//    std::vector<int> v8;
//    v8.push_back(1);
//    v8.push_back(2);
//    v8.push_back(3);
//    v8.push_back(4);
//    v8.push_back(5);
//    std::cout << "=========================================" << std::endl;
//    std::vector<int>::iterator iter = v8.begin();//���ۿ��Ҹ� ����Ű�� �ݺ���
//    std::cout << iter[0] << std::endl;// ��� 1
//    std::cout << iter[1] << std::endl;// ��� 2
//    std::cout << iter[2] << std::endl;// ��� 3
//    std::cout << iter[3] << std::endl;// ��� 4
//    std::cout << iter[4] << std::endl;// ��� 5
//    
//
//
//    iter += 2; //iter�� �ּ��̹Ƿ� +2�� �ε����� �̵����� �� �� �ִ�. iter[2] �� 3��° ���Ұ� ��µɰ�
//    std::cout << *iter << std::endl;
//    //for(std::vector<int>::reverse_iterator rit = v8.rbegin();rit!=v8.rend(); ++rit) //������ �ݺ���
//    //{
//
//    //}
//    std::cout << "=========================================" << std::endl;
//
//    std::vector<int>vec = { 10, 20, 30, 40, 50 }; //���� ��� ���� (�˾Ƽ� �ݺ��ڶ�� �� �߷��� ��)
//    for (auto it = vec.begin(); it!=vec.end();++it)
//    {
//        std::cout << *it << std::endl;
//    }
//    std::cout << "��Ƣ��" << std::endl;
//    for (auto& i : vec)
//    {
//        i *= 2;
//    }
//    for (auto it = vec.begin(); it != vec.end(); ++it)
//    {
//        std::cout << *it << std::endl;
//    }
//   
//}    
//
//
////for ~
////�����϶� i, ��������� vec6[i] ,���ͷ�����*it 