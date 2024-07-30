#include <iostream>
#include <time.h>
#include <CoreWindow.h>
using namespace std;

/*°úÁ¦1.ÁÁ¾ÆÇÏ´Â Ä³¸¯ÅÍ Ãâ·Â II

- µ¿ÀÏ Ä³¸¯ÅÍ »ç¿ë ±ÝÁö

- ¾îÁ¦ ÁøÇàÇÑ °úÁ¦¿Í µ¿ÀÏÇÏÁö¸¸ ÄÃ·¯Ç®ÇÏ°Ô ¸¸µé¾î ¿Â´Ù.

- ÃÖ¼Ò »çÀÌÁî : 50 x 50
*/

void TextColor(int font, int backGround);
void main()
{
    TextColor(0, 15); cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á"; cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout <<"¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á"; TextColor(14, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(14, 15); cout << "¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á"; TextColor(14, 15); cout << "¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(14, 15); cout << "¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(14, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(14, 15); cout << "¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(14, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(14, 15); cout << "¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(14, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(14, 15); cout << "¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(14, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(14, 15); cout << "¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(14, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(14, 15); cout << "¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(14, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á¡á¡á"; TextColor(14, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á"; TextColor(14, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(6, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(6, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡"; TextColor(0, 15); cout << "¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡"; TextColor(0, 15); cout << "¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(8, 15); cout << "¡á¡á¡á¡á"; TextColor(7, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(8, 15); cout << "¡á¡á¡á¡á"; TextColor(7, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(1, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(1, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡¡¡á";TextColor(0, 15); cout << "¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(8, 15); cout << "¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(1, 15); cout << "¡á¡á¡á"; TextColor(11, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(1, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡á¡á¡á"; cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(8, 15); cout << "¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡¡¡á"; TextColor(1, 15); cout << "¡á¡á¡á"; TextColor(11, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(1, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(8, 15); cout << "¡á¡á"; TextColor(7, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡¡¡á"; TextColor(1, 15); cout << "¡á¡á¡á"; TextColor(11, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(1, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á"; TextColor(7, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡á"; TextColor(1, 15); cout << "¡á¡á¡á"; TextColor(11, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(1, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡¡¡¡¡¡¡¡¡á"; TextColor(1, 15); cout << "¡á¡á¡á"; TextColor(11, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(1, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(1, 15); cout << "¡á¡á¡á"; TextColor(11, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(1, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡á¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡á"; TextColor(1, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(11, 15); cout << "¡á¡á¡á¡á¡á¡á"; TextColor(1, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡á¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡á"; TextColor(8, 15); cout << "¡á¡á¡á¡á¡á¡á"; TextColor(14, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡á¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡á"; TextColor(8, 15); cout << "¡á¡á¡á¡á¡á¡á"; TextColor(14, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡á¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á"; TextColor(6, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡á¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(1, 15); cout << "¡á¡á¡á"; TextColor(11, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(1, 15); cout << "¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(1, 15); cout << "¡á¡á¡á"; TextColor(11, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(1, 15); cout << "¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(1, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡á¡á"; TextColor(8, 15); cout << "¡á¡á¡á"; TextColor(7, 15); cout << "¡á¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á";  TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(4, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(0, 15); cout << "¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(0, 15); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
    cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;




























}
    void TextColor(int font, int backGround)
{
        int Color = font + backGround * 16;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);

}