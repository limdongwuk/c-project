#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;



/*

과제2. 간단한 아이템 만들기

 - 종류와 대미지, 그리고 가격이 다른 무기 및 방어구 5종을 만들고 화면에 출력한다.

 - 출력된 화면에는 아이템 종류에 따른 가격 + 특성이 함께 나열되야 한다.

 - 무기 1종 + 방어구 1종에는 반드시 도트를 적용해야 한다.
 ㄴ 총 2종

*/
void TextColor(int font, int backGround);

void main()
{

	srand(time(NULL));

	int twohand;
	twohand = rand() % 7;
	int cane;
	cane = rand() % 7;
	int axe;
	axe = rand() % 7;
	int knife;
	knife = rand() % 7;

	cout << "								<무기>" << endl << endl;
	cout << " 분류				공격력			판매가격			    	 특성	" << endl << endl;
	cout << "양손검" << "				  " << twohand + 42 << "		    	  " << "4200" << "			     " << "공격속도:보통, 공격사거리 : 100" << endl << endl;
	cout << "스태프" << "				  " << cane + 38 << "		    	  " << "4000" << "			     " << "공격속도:느림, 공격사거리 : 600" << endl << endl;
	cout << " 단검" << "				  " << knife + 36 << "		    	  " << "3800" << "			     " << "공격속도:빠름, 공격사거리 : 80" << endl << endl;
	cout << " 도끼" << "				  " << axe + 46 << "		    	  " << "4300" << "			     " << "공격속도:매우느림, 공격사거리 : 150" << endl << endl << endl;


	int 투구;
	투구 = rand() % 21;
	int 견갑;
	견갑 = rand() % 21;
	int 상의;
	상의 = rand() % 21;
	int 하의;
	하의 = rand() % 21;
	cout << "							      <방어구>" << endl << endl;
	cout << " 분류				방어력			추가 공격력                판매가격				 특성	" << endl << endl;
	cout << " 투구" << "				  " << 투구 + 700 << "		     	   " << "1.4%" << "			     " << "2800" << "          " << "구매 시 방어력의 수치가 700~720 내에서 임의 조정됩니다. " << endl << endl;
	cout << " 견갑" << "				  " << 투구 + 670 << "		      	   " << "2.1%" << "			     " << "2800" << "          " << "구매 시 방어력의 수치가 670~690 내에서 임의 조정됩니다." << endl << endl;
	cout << " 상의" << "				  " << 투구 + 800 << "		    	   " << "0.7%" << "			     " << "2800" << "          " << "구매 시 방어력의 수치가 800~820 내에서 임의 조정됩니다." << endl << endl;
	cout << " 하의" << "				  " << 투구 + 730 << "		    	   " << "1.1%" << "			     " << "2800" << "          " << "구매 시 방어력의 수치가 730~750 내에서 임의 조정됩니다." << endl << endl;
	cout << " 장갑" << "				  " << 투구 + 670 << "		    	   " << "2.1%" << "			     " << "2800" << "          " << "구매 시 방어력의 수치가 670~690 내에서 임의 조정됩니다." << endl << endl;


	cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" << endl;
	cout << "　　■　　　　　　　　　　　　　　　　　　　　　　　　　■　　" << endl;
	cout << "　■■　　　　　　　　　　　　　　　　　　　　　　　　　■■　" << endl;
	cout << "　■■　　　　　　　　　　　　　　　　　　　　　　　　　■■　" << endl;
	cout << "　■■■　　　　　　　　　■■■■■　　　　　　　　　■■■　" << endl;
	cout << "　■■■■　　　　　　　■■■■■■■　　　　　　　■■■■　" << endl;
	cout << "　■■■■　　　　　■■■■■■■■■■■　　　　　■■■■　" << endl;
	cout << "　　■■■■　　■■■■■■■■■■■■■■■　　■■■■　　" << endl;
	cout << "　　■■■■■■■■■■■■■■■■■■■■■■■■■■■　　" << endl;
	cout << "　　　■■■■■■■■■■■■■■■■■■■■■■■■　　　　" << endl;
	cout << "　　　　■■■■■■■■■■■■■■■■■■■■■■　　　　　" << endl;
	cout << "　　　　　■■■■■■■■■■■■■■■■■■■■■　　　　　" << endl;
	cout << "　　　　　■■■■■■■■■■■■■■■■■■■■■　　　　　" << endl;
	cout << "　　　　　■　　　　　　　　　■　　　　　　　　　■　　　　　" << endl;
	cout << "　　　　　■　　　　　　　　　■　　　　　　　　　■　　　　　" << endl;
	cout << "　　　　　■　　　　　　　　　■　　　　　　　　　■　　　　　" << endl;
	cout << "　　　　　■　　　　　　　　　■　　　　　　　　　■　　　　　" << endl;
	cout << "　　　　　■　　　　　　　　　■　　　　　　　　　■　　　　　" << endl;
	cout << "　　　　　■　　　　　　　　　■　　　　　　　　　■　　　　　" << endl;
	cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" << endl;
	cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" << endl << endl;
	
	cout << "　　　　　　　　　　　　"; TextColor(8, 0); cout << "■■"; TextColor(15, 0); cout <<"　　　　　　　　　　　　　　　　　　" << endl;
	cout << "　　　　　　　　　　　　■"; TextColor(8, 0); cout << "■■"; TextColor(15, 0); cout << "　　　　　　　　　　　　　　　　 " << endl;
	cout << "　　　　　　■■■■　　■■"; TextColor(8, 0); cout << "■■"; TextColor(15, 0); cout << "　　　　　　　　　　　　　　　　" << endl;
	cout << "　　■　　　■■■■■■■■■"; TextColor(8, 0); cout << "■■"; TextColor(15, 0); cout << "　　　　　　　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "■■"; TextColor(15, 0); cout << "■　　　■■■■■■■■■■"; cout << "■"; TextColor(8, 0); cout << "■　　　　　　　　　　　　　　" << endl;
	cout << "■■"; TextColor(15, 0); cout << "■■　　■■■■■■■■■■■■"; TextColor(8, 0); cout << "■　　　　　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "■■"; TextColor(15, 0); cout << "■■■　　　■■■■■　　　　　"; TextColor(8, 0); cout << "■　　　　　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "■■■"; TextColor(15, 0); cout << "■■■■■■■■■■■　　　　　　　　　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "　■■"; TextColor(15, 0); cout << "■■■■■■■■■■■　　　　　　　　　　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "　■■"; TextColor(15, 0); cout << "■■■■■■■■■■■■■　　　　　　　　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "　　■■"; TextColor(15, 0); cout << "■■■■■■■■　■■■　　　　　　　　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "　　　■"; TextColor(15, 0); cout << "■■■■■■■■　■■■■　　　　　　　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "　　　■■"; TextColor(15, 0); cout << "■■■■■■■　　　■■■　　　　　　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "　　　　■■"; TextColor(15, 0); cout << "■■■■■■■　　　■■■　　　　　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "　　　　　■■■"; TextColor(15, 0); cout << "■■■■■■　　　■■■　　　　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "　　　　　　　■■■"; TextColor(15, 0); cout << "■■■■　　　　■■■　　　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "　　　　　　　　■■■■■■"; TextColor(15, 0); cout << "■　　　　■■■■　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "　　　　　　　　　　　■■■■"; TextColor(15, 0); cout << "　　　　　■■■　　　　　　　　　" << endl;
	TextColor(8, 0); cout << "　　　　　　　　　　　　　　■"; TextColor(15, 0); cout << "　　　　　■■■■　　　　　　　　" << endl;
		TextColor(8, 0); cout << "　　　　　　　　　　　　　　■"; TextColor(15, 0); cout << " 　　　　　　　■■■　　　　　　　" << endl;
	cout << "　　　　　　　　　　　　　　　　　　　　　　　■■■　　　　　　" << endl;
	cout << "　　　　　　　　　　　　　　　　　　　　　　　　■■■■　　　　" << endl;
	cout << "　　　　　　　　　　　　　　　　　　　　　　　　　■■■■■　　" << endl;
	cout << "　　　　　　　　　　　　　　　　　　　　　　　　　■■■　　■　" << endl;
	cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　■　　　　■" << endl;
	cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　■　　　　■" << endl;
	cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　■　　■　" << endl;
	cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　■■　　" << endl;
	
}
	

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);

}
