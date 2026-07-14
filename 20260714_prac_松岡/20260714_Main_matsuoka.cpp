#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Header_matsuoka.h"
using namespace std;

int main(void)
{
	//変数
	int i;
	int PlySelect;
	int CpuSelect;
	int number = NUMBER[MIN];
	int Win=0;
	int Rose=0;
	int Draw=0;

	//乱数の初期化
	srand((unsigned int)time(nullptr));

	cout << "up or downゲーム！！" << endl;
	cout << "このゲームは１～１０までの数字を選んでいただいて相手より数字が大きい方に得点が入る\n"
		"シンプルなゲームです7回行いポイントが高かったほうが勝ちとなります" << endl;
	cout << "ただし、一度選択した数字は使えません注意してください" << endl;
	while (true)
	{
		for (i = 0; i < NUMBEROFTRIES; i++)
		{
			cout << "数字を入力してください" << endl;
			PlySelect = InputCheck(MIN, MAX);
			cout << PlySelect;
			CpuSelect = rand() % number;
			cout << CpuSelect;
			//判定
			if (PlySelect == CpuSelect)
			{
				cout << "drow" << endl;
				Draw++;
			}
			else if (PlySelect > CpuSelect)
			{
				cout << "UP!!" << "あなたの数字のほうが大きいです" << endl;
				Win++;
			}
			else
			{
				cout << "Down" << "あなたの数字のほうが小さいです" << endl;
				Rose++;
			}
		}
		cout << "あなたは" << Win << "勝" << Rose << "負" << Draw << "分" << "です" << endl;
	} 
	//勝敗
	if (Win > Rose)
	{
		cout << "あなたの勝ちです！！おめでとうございます" << endl;
	}
	else
	{
		cout << "あなたの負けです。残念でした" << endl;
	}

	return 0;
}