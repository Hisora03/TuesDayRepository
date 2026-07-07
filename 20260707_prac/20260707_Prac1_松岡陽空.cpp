#include<iostream>

using namespace std;

//定数
const int INDEX = 10;
const int MAX = 100;
const int MIN = 0;

void AddArray(int ary[], int size);
int InputCheck(int min, int max);

void AddArray(int ary[], int size)
{
	//変数宣言
	int i;
	//10個数値を入力
	for (i = 0; i < size; i++)
	{
		//入力チェック関数を呼び出し入力する
		ary[i] = InputCheck(MIN, MAX);
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
			cout << "入力した値に誤りがあります。再度入力してください\n";
		}
		else
		{
			break;
		}

	}
	return num;
}
//メイン
int main(void)
{
	int arry[INDEX] = {};
	cout << "10個整数を入力してください" << endl;

	AddArray(arry, INDEX);
	cout << "偶数:" << endl;

	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2==0)
		{
			cout << arry[i] << "\n";
		}
	}
	cout << "奇数:" << endl;
	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i]%2 !=0)
		{
			cout << arry[i] << "\n";
		}
	}

	return 0;
}

