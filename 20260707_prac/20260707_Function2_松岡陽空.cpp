#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_PracMain2_松岡陽空.h"
using namespace std;
//ゲーム
void Game()
{
	int i, j;
	int plyHand[3] = {};
	int CpuHand[3] = {}; 

	bool trunFlag = true;
	bool judgementFlag = false;

	cout << "数字あてゲーム！！" << endl;
	srand((unsigned int)time(NULL));
	

	while (true)
	{
		cin >> plyHand[3];
		CpuHand[3] = rand() % MAX;
		judgement(i);
	}

}
//判定
void judgement(int i)
{
	int plySelection[3];
	int CpuSelection[3];

	for (i = 0; i < INDEX; i++)
	{
		if (plySelection[3] == CpuSelection[3])
		{
			cout << "Hit" << endl;
		}
		else
		{
			cout << "Miss" << endl;
		}
	}
}
//入力チェック
int InputCheck(int min, int max)
{
	int num;

	while (true)
	{
		cin >> num;
		if (min > num || max < num)
		{
			cout << "入力した値に誤りがあります。再度入力してください"<<endl;
		}
		else
		{
			break;
		}

	}
	return num;
}