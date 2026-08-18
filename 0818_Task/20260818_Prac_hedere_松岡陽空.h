#pragma once
//===========
//定数
//===========

//カードの総枚数
const int TOTAL_CARD = 28;
//1グループのカード枚数
const int GROUP_CARD = 7;
//カードの総枚数
const int MAX_NUMBER = 7;

//============
//関数
//============

//28枚のカード作成
void creatCard(int cards[]);
//カードシャッフル
void shuffleCard(int cards[]);
//カードを表示
void showCrad(int cards[]);
//カードを伏せて表示
void showHiddenCrad(int cards[]);