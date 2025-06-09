#include <graphics.h>		// 引用 EasyX 绘图库头文件
#include<string>
#include<sstream>
#include "TerminalEmu.h"
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	
	initgraph(640, 480);	// 创建绘图窗口，分辨率 640x480
	std::wstring a;
	a = L"HelloWorld";
	RECT r = { 0,0,639,10 };
	std::wstringstream wss;
	for (int i = 1; i <= 100; i++) {
		wss <<L"Line"<< i;
		wss >> a;
		wss.clear();
		println(a);
		Sleep(100);
	}
	Sleep(5000);			// 延时 5000 毫秒
	closegraph();			// 关闭图形窗口
	return 0;
}