#pragma once
#ifndef __hitbox__
#define __hitbox__

struct hitbox {
	bool shape;//0是圆,1是方,定义类似电池
	int width;//宽度 但是是宽度的一半,与x轴平行
	int height;//高度 但是是一般,与y轴平行
	int radius;//半径
	int x;//懂得都懂
	int y;//不懂的也懂
};
bool compare(hitbox b1, hitbox b2);//碰撞判定
static hitbox rectangleSample={ 1,10,10,0,300,300 };
static hitbox circleSample = { 0,0,0,10,300,300 };
#endif // ! 