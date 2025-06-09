#include<graphics.h>
#include<string>
#include<deque>
#include<sstream>
const int bufferSize = 25;

std::deque<std::wstring> Buffer;
static inline void println(std::wstring str) {
	Buffer.push_back(str);
	while (Buffer.size() > bufferSize) {
		Buffer.pop_front();
	}
	RECT r = { 0,0,639,10 };
	for (auto i : Buffer) {
		drawtext((LPCTSTR)i.data(), &r, DT_LEFT | DT_NOCLIP);
		r.top += 15;
		r.bottom += 15;
	}
}
template<typename T>
static void printt(T a) {
	std::wstringstream ws;
	ws << a;
	std::wstring str;
	ws >> str;
	println(str);
}
