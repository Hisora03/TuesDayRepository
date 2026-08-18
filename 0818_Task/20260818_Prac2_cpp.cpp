#include<iostream>
using namespace std;

void Damage(int* p)
{
	//*p=-20
	*p -= 20;
}
void Heal(int *num)
{
	*num += 30;
}
int main()
{
	int HP = 100;
	Damage(&HP);
	Heal(&HP);
	cout << HP << endl;
	return 0;
}

