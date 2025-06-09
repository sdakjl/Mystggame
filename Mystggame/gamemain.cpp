#include "dataManage.h"
#include "hitbox.h"
class object {
public:
	
	hitbox box;
	int graphid;
	int& x() { return box.x; }
	int& y() { return box.y; }
	int health;
	int type;
	int time=0;
	void action() {
		if (type == 1) y()--;
		time++;
		return;
	}
};