#include <iostream>


using namespace std;

class Random
{
public :
    int Rand(int _Num);

};




void main()
{
    srand(time(NULL));
    Random R;
    int X = 0;

    int Player;
    cin >> Player;

    X = R.Rand(Player);
  

}

int Random::Rand(int _Num)
{
    return rand() % _Num;
}


