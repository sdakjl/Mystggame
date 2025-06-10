#include "dataManage.h"
#include "hitbox.h"
#include "gamemain.h"
#include<cmath>
inline int qpow(int a, int b) {
	if (b == 0)return 1;
	int c = qpow(a, b >> 1);
	c *= c;
	if (b & 1)c *= a;
	return c;

}

int& object::x() { return box.x; }
int& object::y() { return box.y; }
void object::action() {
	x() = baseX;
	y() = baseY;
	for (auto i : xacts) {
		if (i.type == 1) {
			x() += i.value1 * sin(i.value2 * time);
		}
		if (i.type == 2) {
			x() += i.value1 * cos(i.value2 * time);
		}
		if (i.type == 3) {
			x() += i.value1 * pow(time, i.value2);
		}
	}
	for (auto i : yacts) {
		if (i.type == 1) {
			y() += i.value1 * sin(i.value2 * time);
		}
		if (i.type == 2) {
			y() += i.value1 * cos(i.value2 * time);
		}
		if (i.type == 3) {
			y() += i.value1 * pow(time, i.value2);
		}
	}
	time++;
	return;
}
int& game::playerX() {
	return playerHitbox.x;
}
int& game::playerY() {
	return playerHitbox.y;
}
void game::loopAction() {
	int p1 = 0; int p2 = 0;
	while (playerBallut.next(p2)) {
		while (enemyPlane.next(p1)) {
			if (compare(enemyPlane[p1].box, playerBallut[p2].box)) {
				playerBallut.remove(p2);
				enemyPlane[p1].health-=playerBallut[p2].health;
				if (enemyPlane[p1].health <= 0) enemyPlane.remove(p1);
				break;
			}
		}
	}
	int p3 = 0;
	while (enemyBallut.next(p3)) {
		if (compare(playerHitbox, enemyBallut[p3].box)) {
			playerHealth--;
			enemyBallut.remove(p3);
		}
	}

}
//int playerHealth;