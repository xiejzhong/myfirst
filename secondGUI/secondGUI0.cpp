#include<graphics.h>

int main()
{
	//��ʼ��ͼ�ν���,����Ҫ�ر�.
	initgraph(640,480);

	//circle(640,480,200);
	setbkcolor(RGB(31,116,115));//��д�Ļ���һ�� SetBkColor()
	cleardevice();//��Ϳ��������.

	//���û��ʵ���ɫ�ʹ�С(��ɫ,Ҳ������RED���������:RGB(255,0,0))
	setlinecolor(RGB(255,0,0));
	setlinestyle(PS_SOLID,10);
	circle(320,240,200);

	//����������ɫ(��ɫ),����,λ��
	settextcolor(RGB(255,255,0));
	settextstyle(100,0,"΢���ź�");
	outtextxy(170,190,"�������");//������㴦�����´�ӡ����.

	//����
	line(180,380,460,100);

	system("pause");
	closegraph();
	return 0;
}
