#include "TycoonPlayer.h"

void TycoonPlayer::DecreaseHp() 
{
		_hp -= 1;

		if(_hp == 0)
		{
		std::cout << "hp가 모두 소모되어 게임이 종료됩니다." << std::endl;
		exit(0);
		}
}
void TycoonPlayer::HpPrint() const
{
	/*System S;
	S.MoveCursor(0, 48);*/
	
	std::cout << "HP : " << getHp() <<std::endl;
}
void TycoonPlayer::BreadstockPrint() const
{
	/*System S;
	S.MoveCursor(0, 47);*/
	std::cout << "문어빵 보유수량 : " << getBreadstock() << std::endl;
}

void TycoonPlayer::setBreadstock()
{
	Customer c;
	

	std::cout << "문어빵 보유수량 : " << Breadstock() - c.wantBreadNum() << std::endl;
}

int TycoonPlayer::Breadstock()
{
	_Breadstock += 1;
	return _Breadstock;
}
void TycoonPlayer::Breadstock0or30()
{
	if (_Breadstock <= 0)
	{

		std::cout << "빵이 모두 소진되었습니다 얼른 빵을 익히세요" << std::endl;
		_Breadstock = 0;
	}
	else if(_Breadstock >30)
	{
		
		std::cout << "인벤토리가 다찼어요." << std::endl;
		_Breadstock = 30;
	}

}
