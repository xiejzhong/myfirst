#include<graphics.h>

int main(void)
{
	//�����¼����


	
	//��ʼ����������,�ӱ���ͼ
	initgraph(632,398);
	loadimage(0,"bg.jpg");

	//�����ľ���,����:1.360,20-580,80   2.360,90-580,150   3.360,160-580,220    4.360,230-580,290   5.360,300-580,350
	rectangle(340,20,580,70);
	rectangle(340,80,580,130);
	rectangle(340,140,580,190);
	rectangle(340,200,580,250);
	rectangle(340,260,580,310);
	rectangle(340,320,580,370);


	//�����ı���ɫ,��ʽ
	settextcolor(RGB(255,255,0));
	settextstyle(40,0,"΢���ź�");
	//��ӡ�ı�
	outtextxy(350,25,"1.��վ404����");
	outtextxy(350,85,"2.��վ�۸Ĺ���");
	outtextxy(350,145,"3.��վ���񹥻�");
	outtextxy(350,205,"4.��վ������¼");
	outtextxy(350,265,"5.��վDNS����");
	outtextxy(350,325,"6.��վ�޸�");

	system("pause");
	closegraph();
	return 0;
}