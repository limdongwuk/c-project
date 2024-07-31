#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void shuffle(int arr[]);
void dimensional1(int arr[]);
void dimensional2(int bingo[4][4], int arr[]);
void main()
{
	int number;
	int bingo[4][4];
	int bingocount = 0;
	string star = "*";
	
	int arr[16];
	//1���� �迭�� 16�� �ֱ�
	dimensional1(arr);
	//1���� �迭 16�� ����
	shuffle(arr);


	//1�����迭 2�����迭�� �ֱ�
	dimensional2(bingo, arr); 
	

	// ������ ���
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
			

				cout << setw(5)<< bingo[i][j];
			}
			cout << endl;
		}
		
		//����� �Է½� �����Ÿ� -1�� �ٲٰ� ���� ���
		while (true)
		{
			
				cin >> number;
				system("cls");
				for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						if (bingo[i][j] == number)
						{
							bingo[i][j] = -1;

						}
						if (bingo[i][j] == -1)
						{
							cout << setw(5) << star << " ";
						}
						else
						{
							cout << setw(5) <<bingo[i][j] << " ";
						}
					}
					cout << endl;
				}
				
			bingocount = 0;
			
			
				for (int i = 0; i < 4; i++)
				{
					int wsum = 0;
					int lsum = 0;
					

					for (int j = 0; j < 4; j++)
					{
						wsum += bingo[i][j];
						lsum += bingo[j][i];
						

						if (wsum == -4)
						{
							bingocount++;
						}
						if (lsum == -4)
						{
							bingocount++;
						}
						

					}
				}
				int dsum = 0;
				int d2sum = 0;
				for (int i = 0; i < 4; i++)
				{
						dsum += bingo[i][i];
						d2sum += bingo[i][3 - i];
						if (dsum == -4)
						{
							bingocount++;
						}
						if (bingo[i][3 - i] == -1 && d2sum == -4)
						{
							bingocount++;
						}
					
				}
				cout <<bingocount<< "�� �����Դϴ�" << endl;
			
			if (bingocount >= 3)
			{
				cout << "���� ����Ǿ����ϴ�" << endl;
				break;
			}
		}
	
		
	
	
}

void dimensional1(int arr[])
{
	for (int i = 0; i < 16; i++)
	{
		arr[i] = i + 1;
	}
}

void shuffle(int arr[])
{
	srand(time(NULL));
	for (int i = 0; i < 1000; i++)
	{
		int d1 = rand() % 16;
		int d2 = rand() % 16;
		int d3 = arr[d1];
		arr[d1] = arr[d2];
		arr[d2] = d3;
	}
}
void dimensional2(int bingo[4][4], int arr[])
{
	int k = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{

			bingo[i][j] = arr[k];
			k++;

		}
	}
}