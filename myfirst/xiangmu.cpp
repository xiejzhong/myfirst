#include<iostream>
#include<Windows.h>
#include<math.h>
#include<string>
#include<graphics.h>

using namespace std;

int main(void)
{
	/*1.ϵͳping�ٶ���վ*/
	/*system("ping www.baidu.com");//��cmd.exe��̨,Ȼ��ping�ٶ���վ,���ܲ�������.
	*/

	/*2.����ϵͳ*/
	//char girlType;
	//float salry;
	//float hight;
	//cout<<"�����������������: "<<endl;
	//cout<<"A:�ͻ���"<<endl;
	//cout<<"B:������"<<endl;
	//cout<<"C:������"<<endl;
	//cout<<"D:�˶���"<<endl;
	//cin>>girlType;
	//cout<<"����������������: ";
	//cin>>salry;
	//cout<<"�������������[��λ:��]: ";
	//cin>>hight;
	//switch(girlType)
	//{
	//	case 'a':cout<<"������������: "<<"A:�ͻ���"<<endl;break;
	//	case 'A':cout<<"������������: "<<"A:�ͻ���"<<endl;break;
	//	case 'b':cout<<"������������: "<<"B:������"<<endl;break;
	//	case 'B':cout<<"������������: "<<"B:������"<<endl;break;
	//	case 'c':cout<<"������������: "<<"C:������"<<endl;break;
	//	case 'C':cout<<"������������: "<<"C:������"<<endl;break;
	//	case 'd':cout<<"������������: "<<"D:�˶���"<<endl;break;
	//	case 'D':cout<<"������������: "<<"D:�˶���"<<endl;break;
	//	defaute:
	//		cout<<"����ѡ������!"<<endl;
	//}
	//cout<<"������������: "<<salry<<endl;
	//cout<<"���������: "<<hight<<endl;

	/*3.����Բ���ܳ�,���*/
	/*int radios = 0;
	float lenth = 0;
	float area = 0;
	cout<<"��������Ҫ���Բ�İ뾶: "<<endl;
	cin>>radios;
	lenth = 2 * 3.14 * radios;
	area = 3.14 * radios * radios;
	cout<<"��Բ�ܳ�Ϊ: "<<lenth<<".���Ϊ: "<<area<<endl;*/
	
	/*4.�޷��ŵ����ݹ���*/
	/*unsigned int boyAge = 0;
	unsigned int girlAge = 0;
	cout<<"˧���������:"<<endl;
	cin>>boyAge;
	cout<<"��Ů��������:"<<endl;
	cin>>girlAge;
	cout<<"��Ů��˧���"<<girlAge - boyAge<<"��."<<endl;
	cout<<"˧�����Ů��"<<boyAge - girlAge<<"��."<<endl;*/

	/*string girlFriend1;
	string girlFriend2;
	girlFriend1 = "����";
	girlFriend2 = girlFriend1;
	cout<<"ǰŮƱ��: "<<girlFriend1<<endl;
	cout<<"��ŮƱ��: "<<girlFriend2<<endl;*/
	/*string food;
	int count = 0;
	cout<<"��ϲ����ʲô?"<<endl;

	while(cin>>food)
	{
		cout<<"����ϲ���Ե�ʳ����:"<<food<<endl;
		count++;
		cout<<"�㻹ϲ����ʲô?";
	}
	cout<<"��ϲ����ʳ����"<<count<<"��."<<endl;*/
	/*string addr;
	cout<<"��Ů,���������ΰ�?"<<endl;
	getline(cin,addr);

	if(addr.empty() == true)
	{
		cout<<"���ﲻ˵��!"<<endl;
	}else
	{
		cout<<"��ô��,��Ҳȥ"<<addr<<"��."<<endl;
	}
*/
	/*int girlSize[10] = {3,2,1,4};
	cout<<girlSize[-1]<<endl;*/
	//char name[16];
	//char addr[64];

	//printf("���﷼��?");
	//scanf("%s",name);

	//fflush(stdin);

	//printf("�����ס�η�?");
	//gets(addr);

	//printf("��ס%s��%s����,��ϲ����.",addr,name);

	/*float r;
	float s;

	cout << "������Բ�İ뾶:";
	scanf("%f",&r);

	s = 3.14 * r * r;
	cout<<"��Բ�������:"<<s<<endl;
*/


	/*5.ͳ��������ٸ�����,��ȫ�����ʵ��ܳ���*/
	//string word;
	//int count = 0;
	//int wordLenth = 0;
	////string c;
	//cout<<"����������������!"<<endl;
	//while(1)
	//{
	//	if((cin>>word) == 0)
	//	{
	//		break;
	//	}
	//	count++;
	//	wordLenth += word.length();
	//	
	//}
	//cout<<"��һ������"<<count<<"������."<<endl;
	//cout<<"������ĵ����ܳ���Ϊ"<<wordLenth<<endl;

	/*6.ͳ����������ַ�������,�ַ�����,�жϲ������з�*/
	//int line=1;
	//int countChar=0;
	//char charAmount;
	//

	//cout << "�����������ַ�!"<<endl;
	//while(cin>>charAmount)
	//{
	//	
	//	if(charAmount==0)
	//	{
	//		break;
	//	}else if(charAmount == '\n')
	//	{
	//		line++;//����û��ִ��.
	//		continue;
	//	}else
	//	{
	//		countChar++;
	//	}
	//}
	//cout<<"��һ������"<<line<<"���ַ�"<<endl;
	//cout<<"������ַ�����Ϊ:"<<countChar<<"��."<<endl;
	
	/*7.ͳ�����������,ͳ���ַ��ܸ���*/
	//string line;//C����:char line[2048]
	//int lineCount = 0;
	//int charLenth = 0;
	//while(1)
	//{
	//	if(getline(cin,line) == 0)//C����:gets(line);
	//	{
	//		break;
	//	}
	//	lineCount++;
	//	charLenth += line.length();//�ո�Ҳ������ȥ��.
	//}
	//cout<<"��������"<<lineCount<<"��."<<endl;
	//cout<<"����"<<charLenth<<"���ַ�."<<endl;
	
	/*8.��֤�û�������ܵ�½ʹ�úڿ͹������*/
	//string userName;
	//int passWd;
	//cout<<"�������û���(�ַ���):";
	//cin>>userName;
	//cout<<"����������(����):";
	//cin>>passWd;

	//if(userName == "54hk" && passWd == 123456)
	//{
	//	
	////��ʼ����������,�ӱ���ͼ
	//initgraph(632,398);
	//loadimage(0,"bg.jpg");

	////�����ľ���,����:1.360,20-580,80   2.360,90-580,150   3.360,160-580,220    4.360,230-580,290   5.360,300-580,350
	//rectangle(340,20,580,70);
	//rectangle(340,80,580,130);
	//rectangle(340,140,580,190);
	//rectangle(340,200,580,250);
	//rectangle(340,260,580,310);
	//rectangle(340,320,580,370);


	////�����ı���ɫ,��ʽ
	//settextcolor(RGB(255,255,0));
	//settextstyle(40,0,"΢���ź�");
	////��ӡ�ı�
	//outtextxy(350,25,"1.��վ404����");
	//outtextxy(350,85,"2.��վ�۸Ĺ���");
	//outtextxy(350,145,"3.��վ���񹥻�");
	//outtextxy(350,205,"4.��վ������¼");
	//outtextxy(350,265,"5.��վDNS����");
	//outtextxy(350,325,"6.��վ�޸�");
	//}else
	//{
	//	cout<<"�û������������."<<endl;
	//}

	/*9.��һ����������Ϊ��4λΪ0110*/
	//˼·:�Ƚ�x�ĵ�4λ��0,Ȼ���ٽ���4λ����Ϊ0110.
	//int x;
	//cin>>x;
	//x = x & (~15);//15��λ�ǵĻ�����11110000.��x�ĵ�4λ��0.
	//x = x | 6;
	//cout<<"-65536>>1="<<(-65536>>1)<<endl;
	
	//int i = 0;

	////10.��������,̫�಻������,�������������ж�.����:cout<<i+++++i--i;
	/*int age=0;

	cout<<"����������:"<<endl;
	cin>>age;

	if(age > 40)
	{
		cout<<"����"<<endl;
	}*/
	
	/*10.��Сд��ĸ��ת��*/
	/*char oneChar;
	cout<<"������һ���ַ�:"<<endl;
	cin>>oneChar;

	if(oneChar>='A'&&oneChar<='Z')
	{
		cout<<"��������ַ��Ǵ�д:"<<oneChar<<endl;
		oneChar = 'a' + oneChar - 'A';
		cout<<"��������ַ���Сд:"<<oneChar<<endl;
	}else
	{
		cout<<"��������ַ���Сд:"<<oneChar<<endl;
		oneChar = 'A' + oneChar - 'a';
		cout<<"��������ַ��Ĵ�д:"<<oneChar<<endl;
	}*/
	
	/*11.�������������������ֵ�ת��*/
//	int num;
//	cout<<"������һ������(0-9):"<<endl;
//	cin>>num;
//
//	//��һ�ַ���
//	/*switch(num)
//	{
//	case 0:cout<<"��"<<endl;break;
//	case 1:cout<<"Ҽ"<<endl;break;
//	case 2:cout<<"��"<<endl;break;
//	case 3:cout<<"��"<<endl;break;
//	case 4:cout<<"��"<<endl;break;
//	case 5:cout<<"��"<<endl;break;
//	case 6:cout<<"½"<<endl;break;
//	case 7:cout<<"��"<<endl;break;
//	case 8:cout<<"��"<<endl;break;
//	case 9:cout<<"��"<<endl;break;
//	default:
//		cout<<"�������!"<<endl;
//	}
//*/
//	//�ڶ��ַ���
//	string chineseNum[10] = {"��","Ҽ","��","��","��","��","½","��","��","��"};
//
//	if(num>=0&&num<=9)
//	{
//		cout<<chineseNum[num]<<endl;
//	}


	///*12.�������,�·�,����������м���*/
	//int year = 0;
	//int month = 0;
	//cout<<"���������:"<<endl;
	//cin>>year;
	//cout<<"�������·�:"<<endl;
	//cin>>month;
	////����:1.�ܱ�4���������ܱ�100����. 2.�ܱ�400����.
	//int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	//if(((year%4==0) && ((year%100) != 0) || (year%400 == 0)) && (month == 2))
	//{
	//	cout<<year<<"��"<<month<<"����"<<days[month-1]+1<<"��"<<endl;
	//}else
	//{
	//	cout<<year<<"��"<<month<<"����"<<days[month-1]<<"��"<<endl;
	//}
	//
	////��һ�ֱȽ����׿������ж�����
	//bool flag;

	//if(year%400 == 0)
	//{
	//	flag = true;
	//}else if((year%4 == 0) && (year%100 !=0))
	//{
	//	flag = true;
	//}else
	//{
	//	flag = false;
	//}

	//if(flag && (month == 2))
	//{
	//	cout<<days[month-1]+1<<endl;
	//}else
	//{
	//	cout<<days[month-1]<<endl;
	//}
	
	/*����1+...+100�Ľ��*/
	//int i=0;
	//int sum=0;
	//while(i<100)
	//{
	//	i++;
	//	sum += i;
	//}
	//cout<<"1+....+100="<<sum<<endl;

	int count = 0;

	for(int i = 0; i<2; i++)
	{
		for(int j = 0; j<2; j++)
		{
			for(int k = 0; k<2; k++)
			{
				count++;
				cout<<i<<":"<<j<<":"<<k<<"��"<<count<<"������!"<<endl;
				Sleep(1000);
			}
		}
	}

	system("pause");
	return 0;
}