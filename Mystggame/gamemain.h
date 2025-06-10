#pragma once
#include "dataManage.h"
#include "hitbox.h"
#ifndef  __gamemain__
#define __gamemain__
struct acts {
	short type;//1:a*sin bt |2:a*cos bt |3:a(t^b)
	double value1;
	double value2;
};
class object {
public:
	hitbox box;
	int graphid;
	int& x();
	int& y();
	int health;
	int type;
	int time;
	std::vector<acts> xacts;
	std::vector<acts> yacts;
	int baseX;
	int baseY;
	void action();
};
class game {
public:
	int playerHealth;
	hitbox playerHitbox;
	int& playerX();
	int& playerY();
	void loopAction();
	chain<object> enemyBallut;
	chain<object> enemyPlane;
	chain<object> playerBallut;
};



#endif // ! 