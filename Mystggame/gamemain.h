#pragma once
#include "dataManage.h"
#include "hitbox.h"
#ifndef  __gamemain__
#define __gamemain__

class object {
public:
	hitbox box;
	int graphid;
	int& x();
	int& y();
	int health;
	int type;
	int time;
	void action();
};


#endif // ! 
