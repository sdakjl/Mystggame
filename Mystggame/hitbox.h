#pragma once

struct hitbox {
	bool shape;//0��Բ,1�Ƿ�,�������Ƶ��
	int width;
	int height;
	int radius;
	int x;
	int y;
};
bool compare(hitbox b1, hitbox b2);