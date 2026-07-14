#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Header_松岡.h"
using namespace std;

//投げた時に表示される言葉、球の種類
void PitchingType(int pitching)
{
    switch (pitching)
    {
    case Straight:
        cout << "ストレート" << endl;
        break;

    case Curve:
        cout << "カーブ" << endl;
        break;

    case Slider:
        cout << "スライダー" << endl;
        break;

    case Sinker:
        cout << "シンカー" << endl;
        break;
    }
}
//勝者宣言
void Result(int out)
{
    if (out >= OUT_COUNT)//アウトだった場合
    {
        cout << "PLAYER WINNER!!" << endl;
    }
    else
    {
        cout << "CPU WINNER!!" << endl;
    }
}
//入力テック（違う数字を打ってしまった際にカウントされないように）
int InputCheck(int min, int max)
{
    int player;

    while (true)//入力時最小や最大を越していないか
    {
        cin >> player;//入力

        if (player < PITCHING_MIN || player > PITCHING_MAX)
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