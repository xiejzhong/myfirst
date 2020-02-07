#include<graphics.h>

int main()
{
	//初始化图形界面,画完要关闭.
	initgraph(640,480);

	//circle(640,480,200);
	setbkcolor(RGB(31,116,115));//大写的还不一样 SetBkColor()
	cleardevice();//喷涂整个背景.

	//设置画笔的颜色和大小(红色,也可以用RED代替里面的:RGB(255,0,0))
	setlinecolor(RGB(255,0,0));
	setlinestyle(PS_SOLID,10);
	circle(320,240,200);

	//设置字体颜色(黄色),字体,位置
	settextcolor(RGB(255,255,0));
	settextstyle(100,0,"微软雅黑");
	outtextxy(170,190,"无码高清");//在坐标点处往右下打印文字.

	//画线
	line(180,380,460,100);

	system("pause");
	closegraph();
	return 0;
}
