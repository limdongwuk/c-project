#include "TycoonPlayer.h"
#include "System.h"
#include <iomanip>

void TycoonPlayer::DecreaseHp()
{
	_hp -= 1;

}
void TycoonPlayer::HpPrint() const
{
	std::cout << "HP : " << std::setw(3) << getHp() << std::endl;
}
void TycoonPlayer::BreadstockPrint() const
{
	std::cout << "문어빵 보유수량 : " << getBreadstock() << "                                      " << std::endl;
}

void TycoonPlayer::setBreadstock(int amount)
{
	_Breadstock -= amount;
	if (_Breadstock <= 0)
	{
		_Breadstock = 0;
		std::cout << "빵이 모두 소진되었습니다 얼른 빵을 익히세요" << std::endl;

		return;
	}
	std::cout << "문어빵 보유수량 : " << _Breadstock << "                  " << std::endl;
}

void TycoonPlayer::Breadstock()
{
	_Breadstock += 1;

}
void TycoonPlayer::Breadstock0or30()
{

	if (_Breadstock > 30)
	{
		std::cout << "인벤토리가 다찼어요.                         " << std::endl;
		_Breadstock = 30;
	}
	else if ((_Breadstock > 0) && (_Breadstock < 30))
	{
		std::cout << "                                                    " << std::endl;  // 30 이하로 내려갔을 때 한 번만 리셋
	}
}
