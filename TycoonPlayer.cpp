#include "TycoonPlayer.h"

void TycoonPlayer::DecreaseHp() 
{
		_hp -= 1;

		if(_hp == 0)
		{
		std::cout << "hp�� ��� �Ҹ�Ǿ� ������ ����˴ϴ�." << std::endl;
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
	std::cout << "��� �������� : " << getBreadstock() << std::endl;
}

void TycoonPlayer::setBreadstock()
{
	Customer c;
	

	std::cout << "��� �������� : " << Breadstock() - c.wantBreadNum() << std::endl;
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

		std::cout << "���� ��� �����Ǿ����ϴ� �� ���� ��������" << std::endl;
		_Breadstock = 0;
	}
	else if(_Breadstock >30)
	{
		
		std::cout << "�κ��丮�� ��á���." << std::endl;
		_Breadstock = 30;
	}

}
