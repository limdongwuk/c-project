#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
using namespace std;

class slidegame 
{
private :
	int arr[5][5];
	int arr1[25];
	int starX;
	int starY;
	string star = "*";
	int input = 0;

public:
	
	void OneDimension();
	
	void shuffle();

	void starXYrand();

	void slideboard();

	void slidecheck();

};

void main()
{
	
	slidegame Sgame;
	srand(time(NULL));
	Sgame.OneDimension(); //1차원 배열에 1~25 숫자 넣기
	Sgame.shuffle();
	Sgame.starXYrand();
	Sgame.slideboard();
	Sgame.slidecheck();

}
	
void slidegame::OneDimension()
{
	for (int i = 0; i < 25; i++)
	{
		arr1[i] = i + 1;
	}
}
void slidegame::shuffle()
{
	for (int i = 0; i < 100; i++)
	{
		int s1 = rand() % 25;
		int s2 = rand() % 25;
		int s3 = arr1[s1];
		arr1[s1] = arr1[s2];
		arr1[s2] = s3;
	}
}

void slidegame::starXYrand()
{
	starX = rand() % 5;
	starY = rand() % 5;
}

void slidegame::slideboard()
{
	int k = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = arr1[k];
			k++;

			if ((i == starX) && (j == starY))
			{
				arr[starX][starY] = -1;
				if (arr[i][j] == -1)
				{
					cout << setw(6) << star;
				}
			}
			else
			{
				cout << setw(6) << arr[i][j];
			}
		}cout << endl;
	}
}

void slidegame::slidecheck()
{
	while (true)
	{

		input = _getch();

		if (input == 224)
		{
			input = _getch();
		}

		if (input == UP)
		{
			if (starX > 0)
			{
				swap(arr[starX][starY], arr[starX - 1][starY]);
				starX = starX - 1;
				starY = starY;
			}

		}
		else if (input == DOWN)
		{
			if (starX < 4)
			{
				swap(arr[starX][starY], arr[starX + 1][starY]);
				starX = starX + 1;
				starY = starY;
			}
		}
		else if (input == RIGHT)
		{
			if (starY < 4)
			{
				swap(arr[starX][starY], arr[starX][starY + 1]);
				starX = starX;
				starY = starY + 1;
			}
		}
		else if (input == LEFT)
		{
			if (starY > 0)
			{
				swap(arr[starX][starY], arr[starX][starY - 1]);
				starX = starX;
				starY = starY - 1;
			}
		}
		system("cls");
		slideboard();
	

	}
}