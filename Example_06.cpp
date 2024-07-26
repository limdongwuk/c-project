#include <iostream>
#include <algorithm>
#include <random>
using namespace std;
//
//
///*
//배열
//- 같은 자료형을 가진 연속된 메모리 공간으로 이루어진 자료구조
//- 이런 배열은 같은 자료형을 가진 변수들이 여러개 필요할때 사용
//- 많은 양의 데이터를 처리할때 유용
//
//배열 선언방법
//
//자료형 / 배열 이름[10];
//                 [  ]안에 들어가는 건 배열 길이(크기)
//
//*/
int main()
{
    //    int num;
    //    int num1;
    //    int num2;
    //    int num3;
    //    int num4;
    //    int num5;
    //
    //
    //#pragma region 초기화 방법
    //    /*
    //    1. 크기를 명시하고 초기화
    //    int arr[4] = { 1, 2, 3, 4 };
    //
    //    2. 배열의 크기를 생략하고 초기화
    //    int arr[] = {1, 2, 3};
    //
    //    3. 크기를 명시적으로 지정하고 일부 요소만 초기화(나머지 요소들은 0으로 초기화)
    //    int arr[5] = {1, 2, 3};
    //
    //    4. 모든 요소를 초기화하지 않음
    //    int arr[5] = {};
    //
    //    */
    //#pragma endregion
    //
    //#pragma region array01
    //    int arr[4] = { 1,2,3,4 };
    //    cout << "arr[0]번째의 데이터 : " << arr[0] << endl;
    //    cout << "arr[1]번째의 데이터 : " << arr[1] << endl;
    //    cout << "arr[2]번째의 데이터 : " << arr[2] << endl;
    //    cout << "arr[3]번째의 데이터 : " << arr[3] << endl;
    //
    //    cout << "================================" << endl;
    //
    //    //메모리 주소값(메모리 주소체계는 16진수)
    //    cout << &arr[0] << endl;
    //    cout << &arr[1] << endl;
    //    cout << &arr[2] << endl;
    //    cout << &arr[3] << endl;
    //
    //    cout << arr << endl;
    //    //인덱스0의 주소는 배열의 시작주소와 같다.
    //
    //    cout << "for문을 이용한 배열 출력" << endl;
    //    for (size_t i = 0; i < 4; i++)
    //    {
    //        cout << arr[i] << endl; //i는 인덱스
    //    }
    //
    //    int number[5];
    //
    //    for (size_t i = 0; i < 5; i++)
    //    {
    //        number[i] = i + 1;
    //    }
    //    /*
    //    number[0] = 0+1;
    //    number[1] = 1+1;
    //    number[2] = 2+1;
    //
    //    */
    //
    //    //만약 10명의 학생성적을 입력 -> 배열에 저장하고 총점과 평균을 구하려면?
    //
    //
    //
    //    //입력 처리 결과 순서로
    //
    //    int jumsu[10]; // 점수를 입력받을 배열 10개를 선언
    //
    //    int sum = 0; // 점수 합계용
    //    for (size_t i = 0; i < 10; i++)  //입력
    //
    //    {
    //        cout << "내가 입력한 학생의 점수는 : " << endl;
    //        cout << i + 1 << "번째 학생 : ";
    //        cin >> jumsu[i];
    //
    //    }
    //    for (size_t i = 0; i < 10; i++)
    //    {
    //        sum += jumsu[i];
    //    }
    //    //결과(출력)
    //    cout << "총점 : " << sum << " " << "평균 : " << sum / 10;
    //#pragma endregion
    //
    //    int arr1[4][3];
    //
    //    arr1[0][0] = 1;
    //    arr1[0][1] = 2;
    //    arr1[0][2] = 3;
    //
    //    arr1[1][0] = 4;
    //    arr1[1][1] = 5;
    //    arr1[1][2] = 6;
    //
    //    arr1[2][0] = 7;
    //    arr1[2][1] = 8;
    //    arr1[2][2] = 9;
    //
    //    arr1[3][0] = 10;
    //    arr1[3][1] = 11;
    //    arr1[3][2] = 12;
    //
    //    cout << endl << endl;
    //    cout << "0행 출력 결과" << &arr1[0][0] << " , " << &arr1[0][1] << " , " << &arr1[0][2] << endl;
    //    cout << "1행 출력 결과" << &arr1[1][0] << " , " << &arr1[1][1] << " , " << &arr1[1][2] << endl;
    //    cout << "2행 출력 결과" << arr1[2][0] << " , " << arr1[2][1] << " , " << arr1[2][2] << endl;
    //    cout << "3행 출력 결과" << arr1[3][0] << " , " << arr1[3][1] << " , " << arr1[3][2] << endl;
    //
    //
    //    for (size_t i = 0; i < 4; i++)
    //    {
    //        for (size_t k = 0; k < 3; k++)
    //        {
    //            cout << arr1[i][k] << endl;
    //        }
    //    }
    //
    //    
    ////    1. 지금부터 4교시 종료까지
    ////    배열 활용하기
    ////     인풋을 받아서 입력받은 숫자의 구구단 계산 결과를 배열에 저장하고 출력하기
    ////
    //    int p;
    //    int ary[10];
    //    int result;
    //
    //    cin >> p;
    //       
    //    if (0 < p && p < 10)
    //    {
    //        for (int forth = 1; forth < 10; forth++)
    //        {
    //            ary[forth] = (p * forth);
    //            cout << ary[forth] << " ";
    //        }
    //    }
    //    else
    //    {
    //        cout << " 1~9의 숫자만 입력해주세요." << endl;
    //    }
    //    
    //
    //        
    //           
    //
    ////
    ////
    ////    //2. 다음 표에서 가로 합과 세로합, 모든수의 합을 구해라.
    ////    /*
    ////    90 78 77 66 55
    ////    90 78 77 66 55
    ////    90 78 77 66 55
    ////    90 78 77 66 55
    ////    
    ////    */
    //

    int x = 0;
    int y = 0;
    int Wsum = 0;
    int Vsum = 0;
    int Tsum = 0;
    int sum = 0;
    srand(time(NULL));
    
    int ar1[4][5];
    for (int x = 0; x < 4; ++x)
    {
        int Tsum = 0;
        for (int y = 0; y < 5; ++y)
        {
            int q = rand() % 100;
            ar1[x][y] = q;
            Tsum += ar1[x][y];  //전체합

            cout << ar1[x][y] << endl;
        }
    }
    cout << "전체의 합 = " << Tsum << endl;



    for (int x = 0; x < 4; ++x)
    {
        int Wsum = 0;
        if (x == 0)
        {
            for (y = 0; y < 5; ++y)
            {
                Wsum += ar1[x][y];
            }
            cout << x + 1 << "행의 가로합 = " << Wsum << endl;

        }
        if (x == 1)
        {
            for (y = 0; y < 5; ++y)
            {
                Wsum += ar1[x][y];
            }
            cout << x + 1 << "행의 가로합 = " << Wsum << endl;

        }
        if (x == 2)
        {
            for (y = 0; y < 5; ++y)
            {
                Wsum += ar1[x][y];
            }
            cout << x + 1 << "행의 가로합 = " << Wsum << endl;

        }
        if (x == 3)
        {
            for (y = 0; y < 5; ++y)
            {
                Wsum += ar1[x][y];
            }
            cout << x + 1 << "행의 가로합 = " << Wsum << endl;

        }
    }
  
            
          
        
    


    
    for (int x = 0; x < 4; ++x)
    {
        Vsum += ar1[x][y]; //세로합
    }
    cout << y << "열의 세로합 = " << Vsum << endl;

    
//
//
//
//    //메르센 트위스터(난수)
//    random_device rd;
//    mt19937 gen(rd());
//    uniform_int_distribution <> dist(1, 6); //범위지정 : 1부터 6까지 균등하게 분포
//
//
//        srand(time(NULL));
//    int number[10];
//    int dest, sour, temp;
//
//    for (size_t i = 0; i < 10; i++)
//    {
//        number[i] = i;
//    }
//    for (size_t i = 0; i < 10; i++)
//    {
//        cout << "number[" << i << "]인덱스:" << number[i] << endl;
//    }
//
//    // 섞어보자
//    for (int i = 0; i < 1000; i++)
//    {
//        dest = dist(gen);
//        sour = dist(gen);
//
//        temp = number[dest];
//        number[dest] = number[sour];
//        number[sour] = temp;
//
//    }
//
//    cout << "=====================" << endl;
//
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "number[" << i << "]인덱스:" << number[i] << endl;
//    }
//
//    int i;
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << gen() << "  ";
//    }
//
//
//    for (int i = 0; i < 10; i++)
//    {
//        cout << dist(gen) << " ";
//    }
//
//
//
//  
//        
//
//  
//
//    /*오늘의 과제.
//    1. plyer Vs Computer
//        1. C는 임의의 숫자 3개를 뽑습니다.(난수발생범위 1~10)(1~10입력안하면 재입력하라는 문구뜰 것)
//        2. P는 차례대로 숫자 3개를 입력합니다.
//        3. 비교
//
//        1번에서 5, 3, 1 나왔고
//        2번에서 1, 2, 3 입력했으면
//
//        자리는 다른데 숫자가 동일하면 볼
//        자리도 같고 숫자도 같으면 스트라이크
//
//        배열로 비교하세요.(눈속임이 힌트)
//        볼하고 스트라이크 출력
//
//        종료조건
//        3out(1out =3strike)
//
//
//
//
//
//
//    */
}