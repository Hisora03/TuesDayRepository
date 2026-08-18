#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260818_Prac_hedere_¼‰ª—z‹ó.h"
using namespace std;

void createCrad(int cards[])
{
	int index = 0;
	int number = 0;
	int count = 0;

	for (number = 0; number < MAX_NUMBER - 1; number++)
	{
		for (count = 0; count < number + 1; count++)
		{
			cards[index] = number + 1;
			index++;
		}
	}
}

void shuffleCrad(int cards[])
{
	srand((unsigned int)time(NULL));

	for (int i = 0; i < TOTAL_CARD; i++)
	{
		int randomeIndex = rand() % TOTAL_CARD;

		int temp = cards[i];
		cards[i] = cards[randomeIndex];
		cards[randomeIndex] = temp;
	}
}

void showCrad(int cards[])
{
	for (int i = 0; i < GROUP_CARD; i++)
	{
		cout << "[" << cards[i] << "]";
	}
	cout << endl;
}
void showHiddenCrad(int cards[])
{
	for (int i = 0; i < GROUP_CARD; i++)
	{
		cout << "(?)";
	}
	cout << endl;
}