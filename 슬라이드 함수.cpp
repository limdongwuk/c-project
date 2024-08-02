#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
using namespace std;



void OneDimension(int arr1[]);
void shuffle(int arr1[]);
void starXYrand(int& starX, int& starY);
void slideboard(int arr1[], int arr[5][5], int starX, int starY, string star);
void slidecheck(int input, int starX, int starY, int arr[5][5], string star);


void main()
{

	int arr[5][5];
	int arr1[25];
	int starX=0;
	int starY=0;
	string star = "*";
	srand(time(NULL));
	OneDimension(arr1); //1차원 배열에 1~25 숫자 넣기
	shuffle(arr1);
	starXYrand(starX, starY);
	slideboard(arr1, arr, starX, starY, star);
	int input = 0;
	slidecheck(input, starX, starY, arr, star);
}

void OneDimension(int arr1[])
{
	for (int i = 0; i < 25; i++)
	{
		arr1[i] = i + 1;
	}
}

void shuffle(int arr1[])
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

void starXYrand(int& starX, int& starY) //int정의된 starX의 주소의 데이터값에 RAND()%5된 결과값을 넣어주는것.
{
	starX = rand() % 5;
	starY = rand() % 5;
}

void slideboard(int arr1[], int arr[5][5], int starX, int starY, string star)
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
					cout << setw(6) << "*";
				}
			}
			else
			{
				cout << setw(6) << arr[i][j];
			}
		}cout << endl;
	}
}

void slidecheck(int input, int starX, int starY, int arr[5][5], string star)
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
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (arr[i][j] == -1)
				{
					cout << setw(6) << star;
				}
				else
				{
					cout << setw(6) << arr[i][j];
				}
			}cout << endl;

		}

	}
}
