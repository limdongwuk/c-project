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
	std::cout << "��� �������� : " << getBreadstock() << "                                      " << std::endl;
}

void TycoonPlayer::setBreadstock(int amount)
{
	_Breadstock -= amount;
	if (_Breadstock <= 0)
	{
		_Breadstock = 0;
		std::cout << "���� ��� �����Ǿ����ϴ� �� ���� ��������" << std::endl;

		return;
	}
	std::cout << "��� �������� : " << _Breadstock << "                  " << std::endl;
}

void TycoonPlayer::Breadstock()
{
	_Breadstock += 1;

}
void TycoonPlayer::Breadstock0or30()
{

	if (_Breadstock > 30)
	{
		std::cout << "�κ��丮�� ��á���.                         " << std::endl;
		_Breadstock = 30;
	}
	else if ((_Breadstock > 0) && (_Breadstock < 30))
	{
		std::cout << "                                                    " << std::endl;  // 30 ���Ϸ� �������� �� �� ���� ����
	}
}
