#include<cmath>
#include<algorithm>
struct hitbox {
	bool shape;//0是圆,1是方,定义类似电池
	int width;
	int height;
	int radius;
	int x;
	int y;
};
static inline int _apb2(int a, int b) {
	return a * a + b * b;
}
bool compare(hitbox b1, hitbox b2) {
	if (b1.shape && b2.shape) {
		return (std::abs(b1.x - b2.x) < b1.width + b2.width) && (std::abs(b1.y - b2.y) < b1.height + b2.height);
	}
	if ((!b1.shape) && b2.shape) {
		std::swap(b1, b2);
	}
	if (b1.shape && (!b2.shape)) {
		if ((b2.x < b1.x + b1.width) && (b2.x > b1.x - b1.width) && (std::abs(b1.y + b2.y) < b1.height + b2.radius)) return true;
		if ((b2.y < b1.y + b1.height) && (b2.y > b1.y - b1.height) && (std::abs(b1.x + b2.x) < b1.width + b2.radius)) return true;
		if (_apb2(b1.x - b2.x + b1.width, b1.y - b2.y + b1.height) < b2.radius * b2.radius) return true;
		if (_apb2(b1.x - b2.x + b1.width, b1.y - b2.y - b1.height) < b2.radius * b2.radius) return true;
		if (_apb2(b1.x - b2.x - b1.width, b1.y - b2.y + b1.height) < b2.radius * b2.radius) return true;
		if (_apb2(b1.x - b2.x - b1.width, b1.y - b2.y - b1.height) < b2.radius * b2.radius) return true;
	}
}