#include <iostream>
#include <time.h>
#include <CoreWindow.h>
using namespace std;

/*과제1.좋아하는 캐릭터 출력 II

- 동일 캐릭터 사용 금지

- 어제 진행한 과제와 동일하지만 컬러풀하게 만들어 온다.

- 최소 사이즈 : 50 x 50
*/

void TextColor(int font, int backGround);
void main()
{
    TextColor(0, 15); cout << "　　　　　　　　■■■■■■"; cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　■■"; TextColor(4, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　■"; TextColor(4, 15); cout << "■■■■■■"; TextColor(0, 15); cout << "■■■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■"; TextColor(0, 15); cout << "■■　　　■■■■■■■■　　　　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■"; TextColor(0, 15); cout << "■■　　　■■■■■■■■　　　　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■"; TextColor(0, 15); cout << "■■■■■"; TextColor(7, 15); cout << "■■■■■■■■"; TextColor(0, 15); cout <<"■■■　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■"; TextColor(0, 15); cout << "■■"; TextColor(7, 15); cout << "■■■■■■■■■■■"; TextColor(0, 15); cout << "■■■　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■"; TextColor(0, 15); cout << "■■"; TextColor(7, 15); cout << "■■■■■■■■■■■■■■"; TextColor(0, 15); cout << "■■■　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　■"; TextColor(4, 15); cout << "■■■■■"; TextColor(8, 15); cout << "■"; TextColor(7, 15); cout << "■■■■■■■"; TextColor(0, 15); cout << "■"; TextColor(7, 15); cout << "■■■■■■■■■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　■■■■"; TextColor(8, 15); cout << "■■"; TextColor(7, 15); cout << "■■■■■■■■"; TextColor(0, 15); cout << "■"; TextColor(7, 15); cout << "■■■■■■■■■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　■■■■"; TextColor(8, 15); cout << "■■"; TextColor(7, 15); cout << "■■■■■■■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■■■"; TextColor(14, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■■■■■　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■"; TextColor(7, 15); cout << "■■■■■■"; TextColor(6, 15); cout << "■■"; TextColor(14, 15); cout << "■■■"; TextColor(0, 15); cout << "■■"; TextColor(14, 15); cout << "■■■"; TextColor(0, 15); cout << "■■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■"; TextColor(7, 15); cout << "■■■■■■"; TextColor(6, 15); cout << "■■"; TextColor(14, 15); cout << "■■■"; TextColor(0, 15); cout << "■"; TextColor(14, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■"; TextColor(7, 15); cout << "■■■■■■"; TextColor(6, 15); cout << "■■"; TextColor(14, 15); cout << "■■■"; TextColor(0, 15); cout << "■"; TextColor(14, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■"; TextColor(7, 15); cout << "■■■■■■"; TextColor(6, 15); cout << "■■"; TextColor(14, 15); cout << "■■■"; TextColor(0, 15); cout << "■"; TextColor(14, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■"; TextColor(7, 15); cout << "■■■■■■"; TextColor(6, 15); cout << "■■"; TextColor(14, 15); cout << "■■■"; TextColor(0, 15); cout << "■"; TextColor(14, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■■"; TextColor(7, 15); cout << "■■■■■"; TextColor(6, 15); cout << "■■"; TextColor(14, 15); cout << "■■■"; TextColor(0, 15); cout << "■"; TextColor(14, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■■"; TextColor(7, 15); cout << "■■■■■"; TextColor(6, 15); cout << "■■"; TextColor(14, 15); cout << "■■■"; TextColor(0, 15); cout << "■"; TextColor(14, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■■"; TextColor(7, 15); cout << "■■■■■"; TextColor(6, 15); cout << "■■■■"; TextColor(14, 15); cout << "■"; TextColor(0, 15); cout << "■"; TextColor(14, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■■"; TextColor(7, 15); cout << "■■■■■"; TextColor(6, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■"; TextColor(6, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■■"; TextColor(7, 15); cout << "■■■■■"; TextColor(6, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■"; TextColor(6, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■■　　"; TextColor(0, 15); cout << "■■■■■　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■■"; TextColor(7, 15); cout << "■■■■■"; TextColor(6, 15); cout << "■■■■■■■■■■■"; TextColor(0, 15); cout << "■■　　"; TextColor(0, 15); cout << "■"; TextColor(4, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■■■■"; TextColor(7, 15); cout << "■■■■■■■■■■■■■■"; TextColor(0, 15); cout << "■■■■"; TextColor(4, 15); cout << "■■■■■■■"; TextColor(0, 15); cout << "■　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　■■■■■"; TextColor(8, 15); cout << "■■■"; TextColor(7, 15); cout << "■■■■■■■■■■"; TextColor(0, 15); cout << "■■■■■"; TextColor(8, 15); cout << "■"; TextColor(0, 15); cout << "■"; TextColor(4, 15); cout << "■■■■■■■"; TextColor(0, 15); cout << "■　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　■"; TextColor(8, 15); cout << "■■■■"; TextColor(7, 15); cout << "■"; TextColor(0, 15); cout << "■■■■■■■■■■■■■■■■■■"; TextColor(8, 15); cout << "■"; TextColor(0, 15); cout << "■"; TextColor(4, 15); cout << "■■■■■■■"; TextColor(0, 15); cout << "■　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　■"; TextColor(8, 15); cout << "■■■■"; TextColor(7, 15); cout << "■"; TextColor(0, 15); cout << "■■■■■■■■■■■■■■■■"; TextColor(8, 15); cout << "■■■"; TextColor(0, 15); cout << "■"; TextColor(4, 15); cout << "■■■■■■■"; TextColor(0, 15); cout << "■　　　　　　　　" << endl;
    cout << "　　　　　　　■■■■"; TextColor(8, 15); cout << "■"; TextColor(7, 15); cout << "■■■■■■■"; TextColor(1, 15); cout << "■■■■■■■■"; TextColor(0, 15); cout << "■■■"; TextColor(8, 15); cout << "■■■■■■■■"; TextColor(0, 15); cout << "■"; TextColor(4, 15); cout << "■■■■"; TextColor(0, 15); cout << "■■　　　　　　　　" << endl;
    cout << "　　　　　　　■■■■"; TextColor(8, 15); cout << "■"; TextColor(7, 15); cout << "■■■■■■■"; TextColor(1, 15); cout << "■■■■■■■■"; TextColor(0, 15); cout << "■■■"; TextColor(8, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■■■　■";TextColor(0, 15); cout << "■■■■　　　　　　　　　" << endl;
    cout << "　　　　　　■"; TextColor(8, 15); cout << "■■"; TextColor(7, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■■■■■"; TextColor(1, 15); cout << "■■■"; TextColor(11, 15); cout << "■■■■■"; TextColor(1, 15); cout << "■■"; TextColor(0, 15); cout << "■■■■■■"; cout << "　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　■"; TextColor(8, 15); cout << "■■"; TextColor(7, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■■■　■"; TextColor(1, 15); cout << "■■■"; TextColor(11, 15); cout << "■■■■■■■■"; TextColor(1, 15); cout << "■"; TextColor(0, 15); cout << "■■■■　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　■"; TextColor(8, 15); cout << "■■"; TextColor(7, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■■■　■"; TextColor(1, 15); cout << "■■■"; TextColor(11, 15); cout << "■■■■■■■■"; TextColor(1, 15); cout << "■"; TextColor(0, 15); cout << "■　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　■■■■■"; TextColor(7, 15); cout << "■■"; TextColor(0, 15); cout << "■■　　　■"; TextColor(1, 15); cout << "■■■"; TextColor(11, 15); cout << "■■■■■■■■"; TextColor(1, 15); cout << "■"; TextColor(0, 15); cout << "■　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　■"; TextColor(4, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■■■　　　　■"; TextColor(1, 15); cout << "■■■"; TextColor(11, 15); cout << "■■■■■■■■"; TextColor(1, 15); cout << "■"; TextColor(0, 15); cout << "■　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　■"; TextColor(4, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■■　　　　　■"; TextColor(1, 15); cout << "■■■"; TextColor(11, 15); cout << "■■■■■■■■"; TextColor(1, 15); cout << "■"; TextColor(0, 15); cout << "■　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　■■"; TextColor(4, 15); cout << "■■■■■■■"; TextColor(0, 15); cout << "■■　　　　■"; TextColor(1, 15); cout << "■■■■■"; TextColor(11, 15); cout << "■■■■■■"; TextColor(1, 15); cout << "■"; TextColor(0, 15); cout << "■　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　■■"; TextColor(4, 15); cout << "■■■■■■■"; TextColor(0, 15); cout << "■■　　　　■"; TextColor(8, 15); cout << "■■■■■■"; TextColor(14, 15); cout << "■■■■■"; TextColor(8, 15); cout << "■"; TextColor(0, 15); cout << "■　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　■■"; TextColor(4, 15); cout << "■■■■■■■"; TextColor(0, 15); cout << "■■　　　　■"; TextColor(8, 15); cout << "■■■■■■"; TextColor(14, 15); cout << "■■■■■"; TextColor(8, 15); cout << "■"; TextColor(0, 15); cout << "■　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　■■"; TextColor(4, 15); cout << "■■■■■■■"; TextColor(0, 15); cout << "■■　　　　　■■■■■■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■"; TextColor(6, 15); cout << "■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　■■"; TextColor(4, 15); cout << "■■■■■■■"; TextColor(0, 15); cout << "■■　　　　　■"; TextColor(1, 15); cout << "■■■"; TextColor(11, 15); cout << "■■■■■"; TextColor(1, 15); cout << "■■■"; TextColor(0, 15); cout << "■　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　■"; TextColor(4, 15); cout << "■■■■■"; TextColor(0, 15); cout << "■■　　　　　　　■"; TextColor(1, 15); cout << "■■■"; TextColor(11, 15); cout << "■■■■■"; TextColor(1, 15); cout << "■■■"; TextColor(0, 15); cout << "■■　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　■■■■■■　　　　　　　■■"; TextColor(1, 15); cout << "■■■■■■■■■■"; TextColor(8, 15); cout << "■"; TextColor(0, 15); cout << "■■■　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　　　　　　■■"; TextColor(8, 15); cout << "■■■"; TextColor(0, 15); cout << "■■■■■"; TextColor(8, 15); cout << "■■■"; TextColor(7, 15); cout << "■■"; TextColor(0, 15); cout << "■　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　　　　　　■■■■■■■■■■■■■■■■■■■　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　　　　　　■■■■■■■　　　　■■■■■■■■■■　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　　　　　■■■■■■■■　　　　　　　■■■■■■■　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　　　　　■■■■■■■■　　　　　　　■■■■■■■■　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　　　　　■■■■■■■　　　　　　　　■■■■■■■■　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　　　■■■■■■■■■　　　　　　　　　　■■■■■■　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　　　■■■■■■■■■　　　　　　　　　　■■■■■■　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　■■■■■■■■■　　　　　　　　　　　　■■■■■■■■　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　■■■■■■■■■■　　　　　　　　　　　　■■■■■■■■　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　■■■■■■■■■■■■　　　　　　　　　　■■■■■■■■■■■■　　　　　　　　" << endl;
    cout << "　　　　　　　　　　■■■■■■■■■■■■■　　　　　　　　　■■■■■■■■■■■■■■　　　　　　　" << endl;
    cout << "　　　　　　　　　　■■"; TextColor(4, 15); cout << "■■■■■■■■■■";  TextColor(0, 15); cout << "■■　　　　　　　　■■"; TextColor(4, 15); cout << "■■■■■■■■■■■"; TextColor(0, 15); cout << "■■　　　　　　" << endl;
    cout << "　　　　　　　　　■■"; TextColor(4, 15); cout << "■■■■■■■■■■■■"; TextColor(0, 15); cout << "■■　　　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■■■■■"; TextColor(0, 15); cout << "■　　　　　　" << endl;
    cout << "　　　　　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■■■■■"; TextColor(0, 15); cout << "■■　　　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■■■■■"; TextColor(0, 15); cout << "■　　　　　　" << endl;
    cout << "　　　　　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■■■■■"; TextColor(0, 15); cout << "■■　　　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■■■■■"; TextColor(0, 15); cout << "■　　　　　　" << endl;
    cout << "　　　　　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■■■■■"; TextColor(0, 15); cout << "■■　　　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■■■■■"; TextColor(0, 15); cout << "■　　　　　　" << endl;
    cout << "　　　　　　　　　■"; TextColor(4, 15); cout << "■■■■■■■■■■■"; TextColor(0, 15); cout << "■■　　　　　　　　　■"; TextColor(0, 15); cout << "■■■■■■■■■■■■■■　　　　　　" << endl;
    cout << "　　　　　　　　　■■■■■■■■■■■■■　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" << endl;
    cout << "　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　" << endl;




























}
    void TextColor(int font, int backGround)
{
        int Color = font + backGround * 16;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);

}