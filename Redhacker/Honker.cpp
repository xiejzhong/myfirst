#include<graphics.h>

int main(void)
{
	//软件登录界面


	
	//初始化攻击界面,加背景图
	initgraph(632,398);
	loadimage(0,"bg.jpg");

	//画空心矩形,坐标:1.360,20-580,80   2.360,90-580,150   3.360,160-580,220    4.360,230-580,290   5.360,300-580,350
	rectangle(340,20,580,70);
	rectangle(340,80,580,130);
	rectangle(340,140,580,190);
	rectangle(340,200,580,250);
	rectangle(340,260,580,310);
	rectangle(340,320,580,370);


	//设置文本颜色,样式
	settextcolor(RGB(255,255,0));
	settextstyle(40,0,"微软雅黑");
	//打印文本
	outtextxy(350,25,"1.网站404攻击");
	outtextxy(350,85,"2.网站篡改攻击");
	outtextxy(350,145,"3.网站服务攻击");
	outtextxy(350,205,"4.网站攻击记录");
	outtextxy(350,265,"5.网站DNS攻击");
	outtextxy(350,325,"6.网站修复");

	system("pause");
	closegraph();
	return 0;
}