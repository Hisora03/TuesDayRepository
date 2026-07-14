#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Header_matsuoka.h"
using namespace std;


//入力チェック
int InputCheck(int min, int max)
{
    int player;

    while (true)
    {
        cin >> player;

        if (player < MIN || player > MAX)
        {
            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        else
        {
            break;
        }
    }

    return player;
}
