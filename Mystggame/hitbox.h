#pragma once

struct hitbox {
	bool shape;//0是圆,1是方,定义类似电池
	int width;
	int height;
	int radius;
	int x;
	int y;
};
bool compare(hitbox b1, hitbox b2);