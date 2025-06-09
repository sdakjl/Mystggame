#pragma once
template<typename T>
struct node
{
	int lastPos;
	int nextPos;
	T value;
	bool exist;
};
template <typename T>
class chain {
	std::vector<node<T>> datas;
	std::stack<int> freed;
public:
	chain();
	void insert(T a);
	void remove(int pos);
	int next(int& pos);
	int back(int& pos);
	T& operator[](int pos);
	int size() const;
};