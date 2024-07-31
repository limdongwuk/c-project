#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
using namespace std;

void main()
{
	int arr[5][5];
	int arr1[25];
	string star = "*";
	srand(time(NULL));
		for (int i = 0; i < 25; i++)
		{
			arr1[i] = i + 1;
		}

		for (int i = 0; i < 100; i++)
		{
			int s1 = rand() % 25;
			int s2 = rand() % 25;
			int s3 = arr1[s1];
			arr1[s1] = arr1[s2];
			arr1[s2] = s3;

		}

		int starX = rand() % 5;
		int starY = rand() % 5;
		int k = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				arr[i][j] = arr1[k];
				k++;
			
				if ((i==starX)&&(j == starY))
				{
					arr[starX][starY] = -1;
					if (arr[i][j] == -1)
					{
						cout << setw(6) << star;
					}
				}
				else
				{
					cout << setw(6)<< arr[i][j] ;
				}
			}cout << endl;
			
		}
		int input;
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
					starY = starY+1;
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
					if (arr[i][j] ==-1)
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


















