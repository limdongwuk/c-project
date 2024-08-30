
#include "Stdafx.h"

#pragma region WinAPI
/*
¢º API(Application Programming Interface)

 - ¿î¿µÃ¼Á¦°¡ ÀÀ¿ë ÇÁ·Î±×·¥ °³¹ßÀ» À§ÇØ Á¦°øÇÏ´Â ÇÔ¼öÀÇ ÁýÇÕÀÌ¶ó°í ÇÒ ¼ö ÀÖ´Ù.

 - ¸í·É¾îÀÇ ÁýÇÕÀ¸·Î ¾îÇÃ¸®ÄÉÀÌ¼Ç ÇÁ·Î±×·¥¿¡¼­ ¿ÀÆÛ·¹ÀÌÆÃ ½Ã½ºÅÛÀÇ ±âº»ÀûÀÎ ±â´ÉÀ» »ç¿ëÇÒ ÇÊ¿ä°¡ ÀÖÀ» °æ¿ì
 API¿¡¼­ ¸í·É¾î È£ÃâÀÌ ÁøÇàµÈ´Ù.

 EX)
 ÇÏµå¿þ¾î ------------------¿î¿µÃ¼Á¦(Windows) ----------------ÀÀ¿ë ÇÁ·Î±×·¥
(API ÇÔ¼ö)

¡Û ÀåÁ¡
 - ¿î¿µÃ¼Á¦°¡ °°À¸¸é °°Àº ±â´ÉÀÇ ÁýÇÕÀ» »ç¿ëÇÏ±â¿¡ È®Àå¼º ¹× ¿¬µ¿¼º / ±×¸®°í À¯Áöº¸¼ö¿¡ ¸Å¿ì À¯¸®ÇÏ´Ù.
 ¤¤À©µµ¿ìÁî != ¸®´ª½º

¡Û ´ÜÁ¡
 - »ç¿ëÇÏ´Â ÇÁ·Î±×·¡¸ÓÀÇ ¿ª·®¿¡ µû¶ó ÇÃ·§Æû¿¡ ´ëÇÑ °íÂøÈ­°¡ ¹ß»ýÇÒ ¼ö ÀÖ´Ù. (WinAPI)
 ¤¤ C¾ð¾î·Î °³¹ßµÈ ÇÃ·§ÆûÀÇ ÇÑ°èÁ¡À» ±Øº¹ÇÏÁö ¸øÇÑ´Ù´Â ÇÁ·Î±×·¡¸ÓÀÇ ¸ð¼ø

 - ÀÌ´Â ´ëºÎºÐÀÇ Å¸ ¶óÀÌºê·¯¸® È®ÀåÀ¸·Î ÇØ°áÀº µÇÁö¸¸ ÇÁ·Î±×·¡¸ÓÀÇ ¿ª·®À» ¸¹ÀÌ ¿ä±¸ÇÏ±â ¶§¹®¿¡ ÀÌ´Â »ç¶÷ ÀÔÀå¿¡¼­´Â
  ´ÜÁ¡ÀÌ¶ó°í ÇÒ ¼ö ÀÖ´Ù.

 ¢¹ API ±¸Á¶
  - Å©°Ô 3°¡Áö¸¸ ±â¾ïÇÏ¸é OK
  ¤¤ ÁøÀÔÁ¡ / ·çÇÁ(¸Þ¼¼Áö) / Window Procedure

*/
#pragma endregion




/*
 - ÀÎ½ºÅÏ½º
  ¤¤ À©µµ¿ì OS°¡ ÇöÀç ½ÇÇàµÇ°í ÀÖ´Â ÇÁ·Î±×·¥À» È®ÀÎÇÏ±â À§ÇÑ °ª
  ¤¤ °°Àº ÇÁ·Î±×·¥ÀÌ¸é ÀÏ¹ÝÀûÀ¸·Î °°Àº ÀÎ½ºÅÏ½º °ªÀ» °¡Áø´Ù.
  ¤¤ Å¬·¡½º°¡ ¸Þ¸ð¸®¿¡ ½ÇÁ¦·Î ±¸ÇöµÈ ½ÇÃ¼
  ¤¤ ½ÇÇàµÇ°í ÀÖ´Â °¢°¢ÀÇ ÇÁ·Î±×·¥µé
*/

//Àü¿ªº¯¼ö
HINSTANCE _hInstance;
HWND _hWnd;
POINT _ptMouse = { 0,0 };



// À©µµ¿ì Å¸ÀÌÆ²
LPTSTR _lpszClass = TEXT("Windows API");
//TCHAR* pszString = _T("Windows API");
// ÀÌ ÄÚµå ¸ðµâ¿¡ Æ÷ÇÔµÈ ÇÔ¼öÀÇ ¼±¾ðÀ» Àü´ÞÇÕ´Ï´Ù:

/*
¢º TCHAR
 - ÀÌ ÀÚ·áÇüÀº ÇÁ·ÎÁ§Æ® ¹®ÀÚ¼Â ¼³Á¤¿¡ µû¶ó ÀÚµ¿ÀûÀ¸·Î º¯È¯À» ÇØÁÖ´Â Áß°£ ¸ÅÅ©·Î ÀÚ·áÇü
  ¤¤ Type CastingÀ» À¯¹ßÇÏ¸ç char ¶Ç´Â wchar_t·Î º¯È¯ÇÑ´Ù.

 - ¸ÖÆ¼¿Í À¯´Ï È¯°æ¿¡¼­ º°µµÀÇ ¼öÁ¤ ÀÛ¾÷ ¾øÀÌ ÇÁ·Î±×·¥À» ±¸µ¿ÇÏ±â À§ÇØ¼­´Â TCHARÇüÀ¸·Î ¹®ÀÚ¿­À» Ç¥ÇöÇÏ´Â °ÍÀ»
 ±ÇÀåÇÑ´Ù.

 - À©µµ¿ì ¾îÇÃ¸®ÄÉÀÌ¼ÇÀ» »ç¿ëÇÏ´Â ÇÁ·Î±×·¥ºÎÅÍ´Â ÀÀ¿ë ÇÁ·Î±×·¥¿¡¼­ ¹®ÀÚ¿­ »ó¼ö¸¦ ¾²±â À§ÇØ¼­´Â Áß°£ ¼³Á¤¿¡ µû¶ó
 char*-> wchar_t*·Î º¯È¯À» ÇØÁÖ´Â _T ¸ÅÅ©·Îµµ À¯È¿ÇÏ´Ù.


LPSTR = char*
LPCSTR = const char*
LPCTSTR = const tchar*


LPCSTR script1 = "ABC";
LPCWSTR script2 = L"ABC"; //W´Â ¿ùµå¿ÍÀÌµå /¸ÖÆ¼ ///LÀº À¯´ÏÄÚµå¸¦ ¶æÇÔ
TCHAR* script3 = _T("ABC"); //ÄÄÇ»ÅÍ°¡ ¾Ë¾Æ¼­ ¸ÖÆ¼¿Í À¯´Ï¸¦ º¯È¯ÇØÁÖ±â¶§¹®¿¡ ÀýÂ÷°¡ µé¾î°¡¼­ ´À¸²
 */

 //ÄÝ¹é ÇÔ¼ö
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
void SetWindowSize(int x, int y, int width, int height);

RECT rc;

/*
hInstance : ÇÁ·Î±×·¥ ÀÎ½ºÅÏ½º ÇÚµé
hPrevInstance : ÀÌÀü¿¡ ½ÇÇàµÈ ÀÎ½ºÅÏ½º ÇÚµé
lpszCmdParam : ¸í·ÉÇüÀ¸·Î ÀÔ·ÂµÈ ÇÁ·Î±×·¥ ÀÎÀÚ(¼ö)
nCmdShow : ÇÁ·Î±×·¥ÀÌ ½ÃÀÛµÉ ÇüÅÂ (ÃÖ¼ÒÈ­ / º¸Åë Å©±â µîµî...)
*/
int APIENTRY WinMain(HINSTANCE hInstance, //ÁøÀÔÁ¡ , wWinMain¿¡¼­ w»°À½ / ¿ùµå¿ÍÀÌµå ±â¹Ý ¾àÀÚw 
    HINSTANCE hPrevInstance,
    LPSTR    lpszCmdParam,
    int       nCmdShow)
{
    _hInstance = hInstance;

    /*
    WinMain ¿ªÇÒ
    ¤¤ 1. À©µµ¿ì Ã¢À» ¼¼ÆÃ ÈÄ È­¸é¿¡ ¶ç¿ì±â
        ¤¤ È­¸é¿¡ Ã¢À» ¶ç¿ì±â À§ÇØ¼­´Â 4°¡Áö Ã³¸®°¡ ¼±Çà
    ¤¤ 2. ¸Þ¼¼Áö ·çÇÁ

    */

    // 1-1. À©µµ¿ìÃ¢ ±¸Á¶Ã¼ ¼±¾ð ¹× ÃÊ±âÈ­
    WNDCLASS wndClass; //WNDCLASSEX¿¡¼­ EX´Â È®ÀåÀ» ÀÇ¹ÌÇÔ
    wndClass.cbClsExtra = 0; //Å¬·¡½º¿¡´ëÇÑ Ãß°¡¸Þ¸ð¸®¸¦ ÇÒ´çÇÑ°Ç°¡?  //Å¬·¡½º ¿©ºÐ ¸Þ¸ð¸®
    wndClass.cbWndExtra = 0;////À©µµ¿ì ¿©ºÐ ¸Þ¸ð¸®
    wndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); //¹è°æ»ö¿¡ °ü·ÃµÈ°Í //¹é±×¶ó¿îµå
    wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);        //¸¶¿ì½º Ä¿¼­
    wndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION); //°ÔÀÓ ½ÇÇàÇÒ¶§ À§ÂÊÇ¥½ÃÁÙ ¿ÞÂÊ ¾ÆÀÌÄÜ
    wndClass.hInstance = hInstance;                          //¼ÒÀ¯ÇÑ ½Äº°ÀÚ Á¤º¸
    wndClass.lpfnWndProc = (WNDPROC)WndProc; //¿Ü¿ö ·ÕÆ÷ÀÎÅÍ Æã¼Å³Î ³Ñ¹ö¸µ 0¹øÀ¸·Î ¸ÅÇÎ µÉ°Å±â¶§¹®¿¡ ÀÏ¹ÝÀûÀ¸·Î´Â °ÇµéÁö ¾Ê¾Æµµ µÊ //À©µµ¿ì ÇÁ·Î½ÃÁ®
    wndClass.lpszClassName = WINNAME;  //Å¬·¡½º ÀÌ¸§
    wndClass.lpszMenuName = NULL;             //¸Þ´ºÀÌ¸§
    wndClass.style = CS_HREDRAW | CS_VREDRAW; //µµ±¸»óÀÚ ¶æÇÔ ¿À¸¥ÂÊ »ó´Ü  //À©µµ¿ì ½ºÅ¸ÀÏ



    // 1-2. À©µµ¿ì Å¬·¡½º µî·Ï
    RegisterClass(&wndClass);


    // 1-3. È­¸é¿¡ º¸¿©ÁÙ À©µµ¿ì Ã¢ »ý¼º
    _hWnd = CreateWindow
    (
        WINNAME,                //À©µµ¿ì Å¬·¡½º ½Äº°ÀÚ
        WINNAME,                //À©µµ¿ì Å¸ÀÌÆ² ¹Ù ÀÌ¸§
        WINSTYLE,        //À©µµ¿ì ½ºÅ¸ÀÏ
        WINSTART_X,                       //À©µµ¿ì È­¸é X ÁÂÇ¥
        WINSTART_Y,                       //À©µµ¿ì È­¸é Y ÁÂÇ¥
        WINSIZE_X,                       //À©µµ¿ì È­¸é °¡·ÎÅ©±â
        WINSIZE_Y,                       //À©µµ¿ì È­¸é ¼¼·ÎÅ©±â
        NULL,                      //ºÎ¸ð À©µµ¿ì GetDesktopWindow()µµ °¡´É Ã¢À» ¿©·¯°³ ¾µ¼öÀÖÀ½
        (HMENU)NULL,               //¸Þ´º ÇÚµé
        hInstance,                 //ÀÎ½ºÅÏ½º ÁöÁ¤
        NULL                       //À©µµ¿ìÀÇ ÀÚ½Ä À©µµ¿ì¸¦ »ý¼ºÇÏ¸é ÁöÁ¤ / NULL //ºÎ¸ðÀ©µµ¿ì¿Í ÀÚ½ÄÀ©µµ¿ì¸¦ ¿¬°á½ÃÄÑÁÖ´Â °Í
    );


    // 1-4. È­¸é¿¡ À©µµ¿ìÃ¢ º¸¿©ÁÖ±â
    ShowWindow(_hWnd, nCmdShow);



    // MSG: ¿î¿µÃ¼Á¦¿¡¼­ ¹ß»ýÇÏ´Â ¸Þ¼¼Áö Á¤º¸¸¦ ÀúÀåÇÏ±â À§ÇÑ ±¸Á¶Ã¼
    MSG message;
    //ZeroMemory(&message, sizeof(message));


    //¡Ú¡Ú¡Ú¡Ú¡Ú
    //2. ±âº» ¸Þ¼¼Áö ·çÇÁ
    // - GetMessage : ¸Þ¼¼Áö¸¦ ²¨³»¿Ã ¼ö ÀÖÀ»¶§±îÁö ´ë±â
    // ¤¤ ¸Þ¼¼Áö Å¥·ÎºÎÅÍ ÇÏ³ªÀÇ ¸Þ¼¼Áö¸¦ °¡Á®¿À´Â ¿ªÇÒÀ» ¼öÇàÇÑ´Ù.
    // ¤¤ ´Ù¸¸ ¸Þ½ÃÁö Å¥°¡ ºñ¾îÀÖÀ» °æ¿ì ¸Þ¼¼Áö°¡ µé¾î¿Ã¶§±îÁö ´ë±â

    // - PeekMessage : ¸Þ¼¼Áö°¡ ¾ø´õ¶óµµ ¹ÝÈ¯ÀÌ µÈ´Ù.

    //while (true)
    //{
    //    if (PeekMessage(&message, NULL, 0, 0, PM_REMOVE)) //°í¼º´É Å¸ÀÌ¸Ó¶û °°ÀÌ ½á¾ßÇÑ´Ù. peekmessage´Â ±âº»ÀûÀ¸·Î ´À¸®±â¶§¹®¿¡ ·¹ÀÌ½Ì°ÔÀÓ °°Àº°æ¿ì
    //                                                      //ÇÃ·¹ÀÌ¾î°¡ Áö³ª°¡´ÂÁö Ã¼Å©°¡ ´©¶ôµÇ´Â ¹ö±×°¡ ¹ß»ýÇÒ ¼ö ÀÖÀ½
    //    {
    //        if (message.message == WM_QUIT)break;
    //        TranslateMessage(&message);
    //        DispatchMessage(&message);
    //    }
    //}
    while (GetMessage(&message, 0, 0, 0))
    {

        TranslateMessage(&message);
        DispatchMessage(&message);
    }

    /*
    TranslateMessage : Å°º¸µåÀÇ ÀÔ·Â ¸Þ¼¼Áö Ã³¸®¸¦ ´ã´çÇÑ´Ù. ÀÔ·ÂµÈ Å°°¡ ¹®ÀÚ Å°ÀÎÁö È®ÀÎÇÏ°í ´ë¹®ÀÚ È¤Àº ¼Ò¹®ÀÚ,
    ÇÑ±Û, ¿µ¹®ÀÎÁö¿¡ ´ëÇÑ WM_CHAR ¸Þ¼¼Áö¸¦ ¹ß»ý ½ÃÅ²´Ù.

    DispatchMessage : À©µµ¿ì ÇÁ·Î½ÃÀú¿¡¼­ Àü´ÞµÈ ¸Þ¼¼Áö¸¦ ½ÇÁ¦ À©µµ¿ì·Î Àü´ÞÇÑ´Ù.*/


    return message.wParam;
}

//À©µµ¿ì ÇÁ·Î½ÃÀú
// hWnd:¾î´À À©µµ¿ì¿¡¼­ ¹ß»ýÇÑ ¸Þ¼¼ÁöÀÎÁö ±¸ºÐ
// iMessage : ¸Þ¼¼Áö ±¸ºÐ ¹øÈ£
// wParam : unsigned int ¸¶¿ì½º ¹öÆ°ÀÇ »óÅÂ / Å°º¸µå Á¶ÇÕ Å°ÀÇ »óÅÂ¸¦ Àü´ÞÇÑ´Ù.
// lParam : unsigned long ¸¶¿ì½º Å¬¸¯ ÁÂÇ¥¸¦ Àü´Þ
LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam) //Windowprocedure
{
    /*
    Window Procedure

     - ¸Þ¼¼Áö¸¦ ¿î¿µÃ¼Á¦¿¡ Àü´Þ -> ¿î¿µÃ¼Á¦´Â °­Á¦·Î È£ÃâÀÌ µÈ´Ù.
        ¤¤ WinMainÀÌ ¾Æ´Ñ ¿î¿µÃ¼Á¦¿¡ ÀÇÇØ È£ÃâÀÌ µÇ´Â ÄÝ¹é ÇÔ¼ö¶ó°í ÇÒ ¼ö ÀÖ´Ù.
        ¤¤ À©µµ¿ì¸¦ »ý¼ºÇÒ¶§´Â ¹Ýµå½Ã ÁöÁ¤À» ÇØÁÖ¾î¾ß ÇÑ´Ù.

     - À©µµ¿ì ÇÁ·Î½ÃÀú ³»ºÎ¿¡¼­´Â À©µµ¿ì¿¡¼­ ¹ß»ýÇÑ ¸ðµç ¸Þ¼¼Áö¸¦ Ã³¸®ÇÏ´Â °ÍÀÌ ¾Æ´Ï¶ó Æ¯Á¤ ¸Þ¼¼Áö¸¸ Ã³¸®ÇÏ°í
     ³ª¸ÓÁö ¸Þ¼¼Áö´Â DefWindowProc ÇÔ¼ö°¡ Ã³¸®ÇÏµµ·Ï ·ÎÁ÷À» ¼³°èÇÏ´Â °ÍÀÌ ÀÏ¹ÝÀû

     Á¡ÇÁ ´©¸£¸é Á¡ÇÁ°¡ ÄÄÆÄÀÏ·¯¿¡ ´Ù¸¥ÀÏÇÏ´øÁß¿¡µµ À©µµ¿ì¸¦ °­Á¦·Î È£ÃâÇØ¼­ ¸®ÅÏ°ªÀ» ÁÖ´Â °Í
    */
    //GDI
    // BMP/PNG/JPG
    // BMP - È­¼Ò°¡ ³ô´Ù, ¿ë·®ÀÌ Å©´Ù, RGBAÁß A(Åõ¸íµµ)ÀÇ ºÎÀç·Î º¸°£ÀÌ ¾ø´Ù. È¸Àü¿¡ ¹®Á¦°¡ ¸¹À» ¼ö ÀÖ´Ù. ¿ø»öÀÌ °­ÇÑ°Å¸¦ BMP·ÎÇÏ¸é ÁÁÀ½
    // GDI+
    // A¸¦ Ãß°¡ÇÏ¿´À½(Áö¿øÀºÇÏ³ª ¶óÀÌºê·¯¸® ÇÔ¼ö¸¦ Áö¿øÇÏÁö ¾Ê¾Æ ¸¸µé¾î ½á¾ßÇÔ)
    //¡Ú¡Ú¡Ú¡Ú¡Ú
    HDC hdc;
    PAINTSTRUCT ps;
    char str[] = "¿ÀÄÉÀÌ";
    //Â÷ÀÌ¿¡ ´ëÇØ¼­ Á¶»ç
    //¤¤ char[]
    //¤¤ char*

    //RECT : »ç°¢ÇüÀÇ ÁÂÇ¥¸¦ ÀúÀåÇÏ±â À§ÇÑ ÀÚ·áÇü
    // // ¤¤ ½ÃÀÛÁ¡ SX, SY (L, T) / ³¡Á¡ EX, EY (R, B)°¡ Á¸ÀçÇÑ´Ù.
    // °ÔÀÓÀÇ ¹è°æÈ­¸é °¡º¯ÀûÀÌ¸é *LPRECT , Á¤ÇØÁø Å©±â¸é*PRECT
    //RECT rc = { 100, 100, 200, 200 };
    

    switch (iMessage)
    {
    case WM_CREATE: //»ý¼ºÀÚ¶û µ¿ÀÏ
        rc = RectMakeCenter(400, 400, 100, 100);

        break;
        /*
        ¡¤ WM_PAINT

         - À©µµ¿ì¸¦ ´Ù½Ã ±×·Á¾ß ÇÒ¶§ ¹ß»ýÇÏ´Â ¸Þ¼¼Áö
         ¤¤ À©µµ¿ì°¡ Ã³À½ ¸¸µé¾î Á³À»¶§ ¹ß»ýÇÑ´Ù.
         ¤¤ À©µµ¿ì Å©±â¸¦ Á¶ÀýÇÒ¶§
         ¤¤ À©µµ¿ì°¡ ´Ù¸¥ À©µµ¿ì¿¡ °¡·ÁÁ³´Ù°¡ ´Ù½Ã º¸ÀÏ¶§
         ¤¤ °ü·Ã ÇÔ¼ö°¡ È£ÃâµÉ¶§
        
        
        */
        //Ãâ·Â¿¡ °üÇÑ ¸ðµç °ÍÀ» ´ã´çÇÑ´Ù.(¹®ÀÚ, ±×¸², µµÇü µîµî È­¸é¿¡ º¸ÀÌ´Â ¸ðµç °Í)


    case WM_PAINT:
    
       
       hdc = BeginPaint(hWnd, &ps);

       Rectangle(hdc, rc.left, rc.top, rc.right, rc.bottom);

       DrawRectMake(hdc, rc);

//       SetPixel(hdc, 300, 200, RGB(255, 0, 0));
//
//       for (int i = 0; i < 10000; i++)
//       {
//           SetPixel(hdc, rand()%800, rand() % 800, RGB(rand() % 255, rand() % 255, rand() % 255));
//       }
//       
//       for (int i = 0; i < 100; i++)
//       {
//           for (int j = 0; j < 100; j++)
//           {
//               SetPixel(hdc, 400 + i, 300 + j, RGB(255, i*2, j*2));
//           }
//       }
//
////windowapi ´Â ÁÂ»ó´Ü¿¡¼­ ÁÂÇ¥¸¦ ½ÃÀÛ. µ¥Ä«¸£Æ® ÁÂÇ¥
////»ï°¢Çü : ¾Ö¸Å
//// »ç°¢Çü : ÃÖ°í
////¿ø : ÁË¾Ç(ÇÊ¿ä¾Ç) ÄÚ½ºÆ®°¡ ¸¹ÀÌµç´Ù.
////´Ù°¢Çü : ¾Ö¸Å
//       // ¿ø±×¸®±â
//       Ellipse(hdc, 300, 100, 200, 200);
//       //»ç°¢Çü
//       Rectangle(hdc, 100, 100, 200, 200);
//       //¿ì¸®´Â º¯¼ö·Î ÀÀ¿ëÇØ¾ßÇÏ±â¶§¹®¿¡ ¾Æ·¡¿Í °°ÀÌ¾¸
//       Rectangle(hdc, rc.left, rc.top, rc.right, rc.bottom);
//       //Æú¸®°ïÀ» ÅëÇØ »ï°¢Çü°ú ´Ù°¢Çüµµ ±¸ÇöÀÌ °¡´ÉÇÏ´Ù.
//       /*
//       ¸ÖÆ¼¹ÙÀÌÆ®->À¯´ÏÄÚµå ->tchar
//       strlen->wcslen -> _tcslen
//       strcpy->wcscpy -> _tcscpy
//       strcmp->...
//       strcat->...
//       +
//       strtok->... ¹®ÀÚ¿­ ÀÚ¸£±â
//             
//       //API
//       strchr->... ¹®ÀÚ Ã£±â
//       strstr->... ¹®ÀÚ¿­ Ã£±â
//       
//       */
//       /*¸Þ¸ð¸®¹öÆÛ¸¦ Ã¼Å©ÇÒ¼öÀÖ³Ä ¾ø³Ä
//       strnlen()
//       strlen_s()
//       */
//
//       //¹®ÀÚ¿­ / ¹®ÀÚ¿­ ±æÀÌ //¿À¹öÇÃ·Î¿ì°¡ ¹ß»ýÇÒ¶§ ÂüÁ¶ÇÏ°íÀÖ°Å³ª °¡¸®Å°°íÀÖÀ¸¸é ÅÍÁü, ÂüÁ¶ÇÏÁö¾ÊÀ¸¸ç ¶Õƒ‹Í¯t ³ª¿È)
//       // ¤¤ strlen() ÇÒ´ç ¹ÞÀº ¸Þ¸ð¸®¿¡ ¹ÙÀÎµù µÈ ¹®ÀÚ¿­¿¡¼­ NULL °ªÀ» Á¦¿ÜÇÑ ¹®ÀÚ¿­ ±æÀÌ
//       TextOut(hdc, 300, 300, "°úÁ¦°¡ ³Ê¹« Àç¹Õ´Ù^^", strlen("°úÁ¦°¡ ³Ê¹« Àç¹Õ´Ù^^"));
//
//       SetTextColor(hdc, RGB(255, 0, 0));
//       TextOut(hdc, 300, 400, "´õ ¸¹Àº °úÁ¦°¡ ÇÊ¿äÇÏ´Ù.", strlen("´õ ¸¹Àº °úÁ¦°¡ ÇÊ¿äÇÏ´Ù."));
//
//
//       MoveToEx(hdc, 400, 400, NULL);
//       LineTo(hdc, 200, 400);
//
//       MoveToEx(hdc, 400, 400, NULL);
//       LineTo(hdc, 200, 400);
//


        EndPaint(hWnd, &ps);
        break;
    case WM_LBUTTONDOWN:
    hdc = GetDC(hWnd);

    SetTextColor(hdc, RGB(0, 0, 255));
    TextOut(hdc, 350, 500,str, strlen(str));

    ReleaseDC(hWnd, hdc);
    break;

    case WM_RBUTTONDOWN:
        break;

    case WM_KEYDOWN:
        switch (wParam)
        {
        case VK_LEFT:
            break;
        case VK_RIGHT:
            break;
        case VK_ESCAPE:
            PostMessage(hWnd, WM_DESTROY, 0, 0);
            break;
        }
        break;
    
    case WM_DESTROY:
        //PostQuitMessage : ÀÌ ÇÔ¼ö´Â ¸Þ¼¼Áö Å¥¿¡ QUIT ¸Þ¼¼Áö¸¦ º¸³»´Â ¿ªÇÒÀ» ¼öÇà
        // QUIT ¸Þ¼¼Áö¸¦ ¼ö½ÅÇÏ´Â ¼ø°£ GetMessage°¡ FALSE¸¦ ¹ÝÈ¯ÇÏ¹Ç·Î ¸Þ¼¼Áö ·çÇÁ´Â Á¾·áµÈ´Ù.
        // In reads µé¾î¿Í¼­ ÀÐ±â¸¸ ÇØ¶ó ÂüÁ¶³ª Æ÷ÀÎÅÍ °ÉÁö¸¶¶ó out reads´Â ÀÐ±âÀü¿ë
        PostQuitMessage(0);
        return 0;

    }
    return (DefWindowProc(hWnd, iMessage, wParam, lParam));

}

void SetWindowSize(int x, int y, int width, int height)
{
    RECT rc = { 0,0,width, height };
    //½ÇÁ¦ À©µµ¿ì Å©±â Á¶Á¤
    //AdjustWindowRect(): RECT ±¸Á¶Ã¼, ¿ø½ºÅ¸ÀÏ, ¸Þ´º¿©ºÎ
    AdjustWindowRect(&rc, WINSTYLE, false);

    //·ºÆ®ÀÇ Á¤º¸·Î À©µµ¿ì »çÀÌÁî ¼¼ÆÃ
    SetWindowPos(_hWnd, NULL,
        x, y,
        (rc.right - rc.left), //cx
        (rc.bottom - rc.top), //cy
        SWP_NOZORDER | SWP_NOMOVE); //zoder ·£´õ¸µ °ü·Ã ÇÇ»çÃ¼µéÀÌ °ãÃÄÁ³À»¶§ÀÇ ·£´õ¸µ ¾î¶²°É ´õ ¿ì¼±¼øÀ§·Î Ç¥ÇöÇÒ °ÍÀÎ°¡
    // move·Î ÇÏ¸é ÇØ»óµµ¿¡ µû¶ó ui°¡ ¾È¸ÂÃçÁú ¼ö ÀÖÀ½
}

/*
Å¸ÀÓ¾îÅÃ. À©µµ¿ì Ã¢ ¸¸µé±â

- ½Ã°£Àº 10ºÐ
- ¿Ü¿ö¼­ ´Ù ÀÛ¼ºÇÏ±â

- ½ÇÆÐ½Ã ±ôÁö ->¸øÇÑ ÀÎ¿ø x 2


ÇÑÁÙ Á¶»ç.

 - ³ëÆ®¿¡ ¿­½ÉÈ÷ Àû¾î¿Â´Ù.(+°øºÎ)
 ¤¤ CallBack Function, DC, GetDC / ReleaseDC, BeginPaint / EndPaint, WM_PAINT, PAINTSTRUCT

*/




//2ÀÏÂ÷ °úÁ¦
//°úÁ¦1. winAPI Ãâ·Â
/* -MotoEx() + LineTo()¸¦ ÀÌ¿ëÇÒ °Í
 - ÀÚ±â ÀÌ¸§ Ãâ·Â (ÇÑ±Û) + UnrealEngine (¿µ¹®)
     ¤¤Å©±â´Â 800x800 ±âÁØ È­¸é¿¡ Àý¹ÝÀ» Ã¤¿ì´Â Å©±â·Î ¾çºÐÇÒ °Í

 - ¸¶¿ì½º ¿ÞÂÊÀ» ´©¸£¸é ÇÑ±ÛÀÚ¾¿ Ãâ·ÂÀÌ µÇ°í ¿ìÅ¬¸¯À» ÇÏ¸é ÇÑ±ÛÀÚ¾¿ Áö¿öÁø´Ù. ÀÌ¸§¸¸
 
 ¡ØµµÇü °ü·Ã ÇÔ¼ö »ç¿ë ±ÝÁö


 °úÁ¦2. ±¸±¸´Ü

  - ¿¹¿ÜÃ³¸® ÇÊ¼ö
  ¤¤ ±¸±¸´ÜÀÇ º»Áú (1´ÜÀÌÇÏx /9´Ü ÀÌ»óx)
  
  - ¸¶¿ì½º ¿ÞÂÊ Å¬¸¯À» ÇßÀ» ½Ã 1´Ü¾¿ Ãâ·ÂÀÌ µÇ°í ¿ìÅ¬¸¯À» ÇÏ¸é 1´Ü¾¿ Áö¿öÁø´Ù.

  - ±×¸®°í 3´Ü°è¸¶´Ù °³ÇàÀ» ÇÑ´Ù.


  ±Ý¿äÀÏ±îÁö
  °úÁ¦3. ¾ÖÇÃ ·Î°í Ãâ·Â

   - SetPixel()À» ÀÌ¿ëÇØ¼­ ¸¸µç´Ù.
   - ±Ù¼º ok / ¹Ýº¹¹® ok / ²Ä¼ö x
   
   ¹Ýº¹¹®°úÁ¦µéÀÓ ´Ù..

   ÇÑÁÙÁ¶»ç.
   -SetTimer
   -KillTimer
   -InvalidateRect (°úÁ¦1¹ø°ú 2¹ø°ü·ÃÀÖÀ½)

 */

/*
3ÀÏÂ÷ °úÁ¦
°úÁ¦1. ¿À¸Á¼º Ãâ·Â

 - ¿À¸Á¼ºÀ» ¸¶¹ýÁøÃ³·³ Ãâ·Â

 - ¾ç½Ä ¹× »ç¿ë ¹®¹ýÀº º»ÀÎ ÀÚÀ¯Áö¸¸ »ï°¢ ÇÔ¼ö x

°úÁ¦2. »ç°¢Çü 2°³ ¿òÁ÷ÀÌ±â
 - ÃÑ »ç°¢Çü °¹¼ö : 2°³
  - ÇÏ³ª´Â ¿òÁ÷ÀÏ ¼ö ÀÖ´Â »ç°¢Çü / ´Ù¸¥ ÇÏ³ª´Â ¿òÁ÷ÀÏ ¼ö ¾ø´Â »ç°¢Çü
 - ¿òÁ÷ÀÏ ¼ö ¾ø´Â »ç°¢ÇüÀ» ¿òÁ÷ÀÏ¼öÀÖ´Â »ç°¢ÇüÀÌ ¹Ð¾î³¾ ¼ö ÀÖÀ¸¸é µÈ´Ù.

 ¿¹¿ÜÃ³¸®
 ¤¤ 1. 2°³ÀÇ »ç°¢ÇüÀº È­¸é ¹ÛÀ¸·Î ³ª°¥ ¼ö ¾ø´Ù.
 ¤¤ 2. 2°³ÀÇ »ç°¢ÇüÀ» ÃÊ±â À§Ä¡·Î µ¹¸®´Â ±â´Éµµ Ãß°¡ÇÑ´Ù.

¡Øº°´Ù¸¥ ¾ð±ÞÀ» ÇÏ±âÀü¿¡´Â Ãæµ¹ ÇÔ¼ö¸¦ »ç¿ëÇÏÁö ¸» °Í
Á¶°Ç½ÄÀ¸·Î ¸éÀ» ºñ±³ÇÏ¸é µÈ´Ù. ¿ÞÂÊ³×¸ðÀÇ ¶óÀÌÆ® °¡ ¿À¸¥ÂÊ ³×¸ðÀÇ¿ÞÂÊxÁÂÇ¥¸¦ ³ÑÁö¾Ê´Â´À³¦

´ÙÀ½ÁÖ ¿ù¿äÀÏ
°úÁ¦3. »ç°¢Çü ¿µÈ¥ ¹Ð¾î³Ö±â

 - ½ÃÀÛÀº Å« »ç°¢Çü 2°³¿Í ÀÛÀº »ç°¢Çü 1°³

 - ³»°¡ ¿òÁ÷ÀÏ ¼ö ÀÖ´Â »ç°¢Çü ¾È¿¡´Â ÀÛÀº »ç°¢ÇüÀÌ ÀÖ´Ù.

 - »ç°¢ÇüÀ» ¿òÁ÷ÀÌ¸é ÀÛÀº »ç°¢Çü ¿ª½Ã ¿òÁ÷ÀÌ°Å³ª / Å« »ç°¢Çü¿¡ ²ø·Á°¡¾ß ÇÑ´Ù.
 ¤¤ ²ø·Á°¡´Â °ÍÀ» ÃßÃµ

 -¿¹¿ÜÃ³¸® : ÀÛÀº »ç°¢ÇüÀº Å« »ç°¢ÇüÀ» ¹þ¾î³¯ ¼ö ¾ø´Ù.
 
 -Å« »ç°¢Çü³¢¸® Ãæµ¹ÀÌ µÇ¸é ÀÛÀº »ç°¢ÇüÀº Ãæµ¹ÀÌµÈ ¹Ý´ëÆí »ç°¢ÇüÀ¸·Î ÀÌµ¿ÇÑ´Ù.

 ¡Ø ÀÌ¶§ ¿òÁ÷ÀÏ¼öÀÖ´Â ÁÖµµ±ÇÀº ÀÛÀº »ç°¢ÇüÀ» ¼ÒÀ¯ÇÏ°í ÀÖ´Â Å« »ç°¢Çü

 ¡Ø¸ð¼­¸®¿¡ ´ëÇÑ ¿¹¿ÜÃ³¸® ¼öÇàÇÒ °Í

*/
