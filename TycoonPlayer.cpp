#include "TycoonPlayer.h"

void TycoonPlayer::Hp() 
{
		_hp -= 1;

		if(_hp == 0)
		{
		std::cout << "hp�� ��� �Ҹ�Ǿ� ������ ����˴ϴ�." << std::endl;
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
		std::cout << "���� ��� �����Ǿ����ϴ� �� ���� ��������" << std::endl;
		_Breadstock = 0;
	}
	else if(_Breadstock ==30)
	{
		std::cout << "�κ��丮�� ��á���." << std::endl;
		_Breadstock = 30;
	}

}
