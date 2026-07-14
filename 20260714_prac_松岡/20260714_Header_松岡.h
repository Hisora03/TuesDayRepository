#pragma once

//定数（共通認識、上限やカウントの設定）
const int PITCHING_MIN = 0;
const int PITCHING_MAX = 3;
const int PROBABILITY = 4;

const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;

enum PitchType//０であればストライクなど球の認識）
{
	Straight,
	Curve,
	Slider,
	Sinker
};

void PitchingType(int pitching);//球の種類、認識

void Result(int out);//勝者

int InputCheck(int min, int max);//入力チェック

