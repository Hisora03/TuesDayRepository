#include<iostream>
#include <cstdlib>
#include <ctime>
#include"20260714_Header_松岡.h"
using namespace std;


//====================================
// メイン
//====================================
int main()
{
    //変数（値の設定、初期化）
    int player;
    int cpu;
    int probability;

    int strike = 0;
    int ball = 0;
    int out = 0;
    int hit = 0;

    //乱数の初期化
    srand((unsigned int)time(nullptr));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    do
    {
        cout << endl;
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート" << endl;
        cout << "1:カーブ" << endl;
        cout << "2:スライダー" << endl;
        cout << "3:シンカー" << endl;

        player = InputCheck(PITCHING_MIN, PITCHING_MAX);//プレイヤーの入力と入力チェック

        PitchingType(player);//球の種類と認識

        cpu = rand() % PROBABILITY;//CPUの手

        probability = rand() % PROBABILITY;

        //ゲームループ
        if (player != cpu)//プレイヤーとCPUの手が違う場合
        {
            if (probability == 0)
            {
                cout << "ボール！" << endl;//画面上での発言
                ball++;//ballのカウント
            }
            else
            {
                cout << "ストライク！！" << endl;
                strike++;
            }
        }
        else
        {
            strike = 0;
            ball = 0;

            if (probability == 1)
            {
                cout << "OUT!!" << endl;
                out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                hit++;
            }
        }

        //ストライクだった場合
        if (strike >= STRIKE_COUNT || ball >= BALL_COUNT)//ストライクもしくはボールが出た場合
        {
            if (strike >= STRIKE_COUNT)//ストライクだった場合
            {
                cout << "三振アウト！" << endl;
                out++;
            }
            else//そうではない場合
            {
                cout << "フォアボール！" << endl;
                hit++;
            }

            strike = 0;
            ball = 0;
        }
        //戦績を表示する
        cout << endl;
        cout << "B : " << ball << endl;
        cout << "S : " << strike << endl;
        cout << "O : " << out << endl;
        cout << "Runner : " << hit << endl;

    } while (out < OUT_COUNT && hit < HIT_COUNT);

    Result(out);

    return 0;
}