#include "dataManage.h"
#include "hitbox.h"
#include "gamemain.h"
#ifndef __gamemain__
#define __gamemain__


int& object::x() { return box.x; }
int& object::y() { return box.y; }
void object::action() {
	if (type == 1) y()--;
	time++;
	return;
}
#endif // !__gamemain__