//#include<algorithm>
//#include<stack>
//#include<vector>
//
//#include "dataManage.h"
//#include "gamemain.h"
//
//template<typename T>
//chain<T>::chain(void){
//	datas[0].nextPos = 0;
//	datas[0].lastPos = 0;
//	datas[0].exist = 1;
//}
//
//template<typename T>
//void chain<T>::insert(T a) {  //向尾部
//	if (freed.empty()) {
//		datas.push_back({ datas[0].lastPos,0,a,1 });
//		datas[datas[0].lastPos].nextPos = datas.size() - 1;
//		datas[0].lastPos = datas.size() - 1;
//	}
//	else {
//		datas[datas[0].lastPos].nextPos = freed.top();
//		datas[freed.top()].nextPos = 0;
//		datas[freed.top()].lastPos = datas[0].lastPos;
//		datas[0].lastPos = freed.top();
//		datas[freed.top()].value = a;
//		datas[freed.top()].exist = true;
//		freed.pop();
//	}
//}
//template<typename T>
//void chain<T>::remove(int pos) { //移除节点
//	if (!datas[pos].exist) return;
//	datas[datas[pos].lastPos].nextPos = datas[pos].nextPos;
//	datas[datas[pos].nextPos].lastPos = datas[pos].lastPos;
//	datas[pos].exist = false;
//	freed.push(pos);
//}
//template<typename T>
//int chain<T>::next(int& pos) {
//	pos = datas[pos].nextPos;
//	return pos;
//}
//template<typename T>
//int chain<T>::back(int& pos) {
//	pos = datas[pos].lastPos;
//	return pos;
//}
//template<typename T>
//T& chain<T>::operator[](int pos) {
//	return datas[pos].value;
//}
//template<typename T>
//int chain<T>::size() const {
//	return datas.size();
//}
