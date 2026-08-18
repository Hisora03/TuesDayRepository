#include<iostream>
using namespace std;

void Damage(int* p)//HP‚ÌZŠ*‚‚É-20‚É‚·‚é‚±‚Æ‚É‚æ‚Á‚ÄHP(80)100-20‚É‚µ‚Ä‚¢‚é
{
	//*p=-20
	*p -= 20;
}
void Heal(int *num)//100-20‚ÌHP‚ÌZŠ‚ÌXVBHP(100-20)+30‚É‚µ‚Ä‚¢‚éHP=110(100-20+30)
{
	*num += 30;
}
int main()
{
	int HP = 100;//HP‚P‚O‚O
	Damage(&HP);
	Heal(&HP);
	cout << HP << endl;
	return 0;
}

