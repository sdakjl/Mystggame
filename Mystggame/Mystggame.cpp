#include <graphics.h>		// 引用 EasyX 绘图库头文件
#include<string>
#include<sstream>
#include "TerminalEmu.h"
#include "hitbox.h"
#include "gamemain.h"
#include "dataManage.h"
//chain<object> enemyPlanes;//敌机
//chain<object> enemyBallut;//敌方弹幕
//chain<object> playerBallut;//自机弹幕
chain<int> aaa;
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	initgraph(640, 480);	// 创建绘图窗口，分辨率 640x480
	std::wstring a;
	a = L"HelloWorld";
	for (int i = 1; i <= 20; i++) {
		aaa.insert(i);
	}
	int p=0;
	while (aaa.next(p)) {
		if (aaa[p] == 13) {
			aaa.remove(p);
		}
	}
	p = 0;
	while (aaa.next(p)) {
		printt(aaa[p]);
	}
	
	
	Sleep(5000);			// 延时 5000 毫秒
	closegraph();			// 关闭图形窗口
	return 0;
}