#include "TycoonPlayer.h"

void TycoonPlayer::Hp() 
{
		_hp -= 1;

		if(_hp == 0)
		{
		std::cout << "hp가 모두 소모되어 게임이 종료됩니다." << std::endl;
		exit(0);
		}
}
void TycoonPlayer::HpPrint()
{
	System S;
	S.MoveCursor(0, 48);
	std::cout << "HP : " << std::endl;
}
void TycoonPlayer::Breadstock() 
{
	
	
		_Breadstock += 1;

	if (_Breadstock < 0)
	{
		std::cout << "빵이 모두 소진되었습니다 얼른 빵을 익히세요" << std::endl;
		_Breadstock = 0;
	}
	else if(_Breadstock ==30)
	{
		std::cout << "인벤토리가 다찼어요." << std::endl;
		_Breadstock = 30;
	}

}
