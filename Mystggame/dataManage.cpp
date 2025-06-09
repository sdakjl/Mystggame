#include<algorithm>
#include<stack>
#include<vector>
template<typename T>
struct node
{
public:
	int lastPos;
	int nextPos;
	T value;
	bool exist;
};
template <typename T>
class chain {
	std::vector<node<T>> datas= std::vector<node<T>>(1);
	std::stack<int> freed;
public:
	chain() {
		datas[0].nextPos = 0;
		datas[0].lastPos = 0;
		datas[0].exist = 1;
	}
	void insert(T a) {
		if (freed.empty()) {
			datas.push_back({ datas[0].lastPos,0,a,1 });
			datas[datas[0.lastPos]].nextPos = datas.size() - 1;
			datas[0].lastPos = datas.size() - 1;
		}
		else {
			datas[datas[0.lastPos]].nextPos = fread.top();
			datas[0].lastPos = datas.size() - 1;
			datas[freed.top()].value = a;
			datas[freed.top()].exist = true;
		}
	}
	void remove(int pos) { //ÒÆ³ý½Úµã
		datas[datas[pos].lastPos].nextPos = datas[pos].nextPos;
		datas[datas[pos].nextPos].lastPos = datas[pos].lastPos;
		datas[pos].exist = false;
		freed.push(pos);
	}
	int next(int& pos) {
		pos = datas[pos].nextPos;
		return pos;
	}
	int back(int& pos) {
		pos = datas[pos].lastPos;
		return pos;
	}
	T& operator[](int pos) {
		return datas[pos];
	}
};