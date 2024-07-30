#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;



/*

°úÁ¦2. °£´ÜÇÑ ¾ÆÀÌÅÛ ¸¸µé±â

 - Á¾·ù¿Í ´ë¹ÌÁö, ±×¸®°í °¡°ÝÀÌ ´Ù¸¥ ¹«±â ¹× ¹æ¾î±¸ 5Á¾À» ¸¸µé°í È­¸é¿¡ Ãâ·ÂÇÑ´Ù.

 - Ãâ·ÂµÈ È­¸é¿¡´Â ¾ÆÀÌÅÛ Á¾·ù¿¡ µû¸¥ °¡°Ý + Æ¯¼ºÀÌ ÇÔ²² ³ª¿­µÇ¾ß ÇÑ´Ù.

 - ¹«±â 1Á¾ + ¹æ¾î±¸ 1Á¾¿¡´Â ¹Ýµå½Ã µµÆ®¸¦ Àû¿ëÇØ¾ß ÇÑ´Ù.
 ¤¤ ÃÑ 2Á¾

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

	cout << "								<¹«±â>" << endl << endl;
	cout << " ºÐ·ù				°ø°Ý·Â			ÆÇ¸Å°¡°Ý			    	 Æ¯¼º	" << endl << endl;
	cout << "¾ç¼Õ°Ë" << "				  " << twohand + 42 << "		    	  " << "4200" << "			     " << "°ø°Ý¼Óµµ:º¸Åë, °ø°Ý»ç°Å¸® : 100" << endl << endl;
	cout << "½ºÅÂÇÁ" << "				  " << cane + 38 << "		    	  " << "4000" << "			     " << "°ø°Ý¼Óµµ:´À¸², °ø°Ý»ç°Å¸® : 600" << endl << endl;
	cout << " ´Ü°Ë" << "				  " << knife + 36 << "		    	  " << "3800" << "			     " << "°ø°Ý¼Óµµ:ºü¸§, °ø°Ý»ç°Å¸® : 80" << endl << endl;
	cout << " µµ³¢" << "				  " << axe + 46 << "		    	  " << "4300" << "			     " << "°ø°Ý¼Óµµ:¸Å¿ì´À¸², °ø°Ý»ç°Å¸® : 150" << endl << endl << endl;


	int Åõ±¸;
	Åõ±¸ = rand() % 21;
	int °ß°©;
	°ß°© = rand() % 21;
	int »óÀÇ;
	»óÀÇ = rand() % 21;
	int ÇÏÀÇ;
	ÇÏÀÇ = rand() % 21;
	cout << "							      <¹æ¾î±¸>" << endl << endl;
	cout << " ºÐ·ù				¹æ¾î·Â			Ãß°¡ °ø°Ý·Â                ÆÇ¸Å°¡°Ý				 Æ¯¼º	" << endl << endl;
	cout << " Åõ±¸" << "				  " << Åõ±¸ + 700 << "		     	   " << "1.4%" << "			     " << "2800" << "          " << "±¸¸Å ½Ã ¹æ¾î·ÂÀÇ ¼öÄ¡°¡ 700~720 ³»¿¡¼­ ÀÓÀÇ Á¶Á¤µË´Ï´Ù. " << endl << endl;
	cout << " °ß°©" << "				  " << Åõ±¸ + 670 << "		      	   " << "2.1%" << "			     " << "2800" << "          " << "±¸¸Å ½Ã ¹æ¾î·ÂÀÇ ¼öÄ¡°¡ 670~690 ³»¿¡¼­ ÀÓÀÇ Á¶Á¤µË´Ï´Ù." << endl << endl;
	cout << " »óÀÇ" << "				  " << Åõ±¸ + 800 << "		    	   " << "0.7%" << "			     " << "2800" << "          " << "±¸¸Å ½Ã ¹æ¾î·ÂÀÇ ¼öÄ¡°¡ 800~820 ³»¿¡¼­ ÀÓÀÇ Á¶Á¤µË´Ï´Ù." << endl << endl;
	cout << " ÇÏÀÇ" << "				  " << Åõ±¸ + 730 << "		    	   " << "1.1%" << "			     " << "2800" << "          " << "±¸¸Å ½Ã ¹æ¾î·ÂÀÇ ¼öÄ¡°¡ 730~750 ³»¿¡¼­ ÀÓÀÇ Á¶Á¤µË´Ï´Ù." << endl << endl;
	cout << " Àå°©" << "				  " << Åõ±¸ + 670 << "		    	   " << "2.1%" << "			     " << "2800" << "          " << "±¸¸Å ½Ã ¹æ¾î·ÂÀÇ ¼öÄ¡°¡ 670~690 ³»¿¡¼­ ÀÓÀÇ Á¶Á¤µË´Ï´Ù." << endl << endl;


	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡" << endl;
	cout << "¡¡¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡¡" << endl;
	cout << "¡¡¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡¡" << endl;
	cout << "¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡¡" << endl;
	cout << "¡¡¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡¡" << endl;
	cout << "¡¡¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡¡" << endl;
	cout << "¡¡¡¡¡á¡á¡á¡á¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡á¡á¡á¡á¡¡¡¡" << endl;
	cout << "¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl << endl;
	
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡"; TextColor(8, 0); cout << "¡á¡á"; TextColor(15, 0); cout <<"¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(8, 0); cout << "¡á¡á"; TextColor(15, 0); cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡ " << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡¡¡¡¡á¡á"; TextColor(8, 0); cout << "¡á¡á"; TextColor(15, 0); cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡á¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(8, 0); cout << "¡á¡á"; TextColor(15, 0); cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡á¡á"; TextColor(15, 0); cout << "¡á¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; cout << "¡á"; TextColor(8, 0); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡á¡á"; TextColor(15, 0); cout << "¡á¡á¡¡¡¡¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á"; TextColor(8, 0); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡á¡á"; TextColor(15, 0); cout << "¡á¡á¡á¡¡¡¡¡¡¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡"; TextColor(8, 0); cout << "¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡á¡á¡á"; TextColor(15, 0); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡¡¡á¡á"; TextColor(15, 0); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡¡¡á¡á"; TextColor(15, 0); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡¡¡¡¡á¡á"; TextColor(15, 0); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡¡¡¡¡¡¡á"; TextColor(15, 0); cout << "¡á¡á¡á¡á¡á¡á¡á¡á¡¡¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡¡¡¡¡¡¡á¡á"; TextColor(15, 0); cout << "¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡¡¡¡¡¡¡¡¡á¡á"; TextColor(15, 0); cout << "¡á¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡¡¡¡¡¡¡¡¡¡¡á¡á¡á"; TextColor(15, 0); cout << "¡á¡á¡á¡á¡á¡á¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á"; TextColor(15, 0); cout << "¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡á"; TextColor(15, 0); cout << "¡á¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á"; TextColor(15, 0); cout << "¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	TextColor(8, 0); cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(15, 0); cout << "¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
		TextColor(8, 0); cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á"; TextColor(15, 0); cout << " ¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡¡¡¡¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡á¡á¡¡¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡á¡¡¡¡¡á¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡á" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡¡¡¡¡á" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡¡¡¡¡á¡¡" << endl;
	cout << "¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡¡á¡á¡¡¡¡" << endl;
	
}
	

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);

}
