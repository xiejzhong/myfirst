#include<iostream>
#include<Windows.h>
#include<math.h>
#include<string>
#include<graphics.h>

using namespace std;

int main(void)
{
	/*1.系统ping百度网站*/
	/*system("ping www.baidu.com");//打开cmd.exe后台,然后ping百度网站,看能不能上网.
	*/

	/*2.婚恋系统*/
	//char girlType;
	//float salry;
	//float hight;
	//cout<<"请输入你的理想类型: "<<endl;
	//cout<<"A:贤惠型"<<endl;
	//cout<<"B:泼辣型"<<endl;
	//cout<<"C:文艺型"<<endl;
	//cout<<"D:运动型"<<endl;
	//cin>>girlType;
	//cout<<"请输入您的月收入: ";
	//cin>>salry;
	//cout<<"请输入您的身高[单位:米]: ";
	//cin>>hight;
	//switch(girlType)
	//{
	//	case 'a':cout<<"您的理想类型: "<<"A:贤惠型"<<endl;break;
	//	case 'A':cout<<"您的理想类型: "<<"A:贤惠型"<<endl;break;
	//	case 'b':cout<<"您的理想类型: "<<"B:泼辣型"<<endl;break;
	//	case 'B':cout<<"您的理想类型: "<<"B:泼辣型"<<endl;break;
	//	case 'c':cout<<"您的理想类型: "<<"C:文艺型"<<endl;break;
	//	case 'C':cout<<"您的理想类型: "<<"C:文艺型"<<endl;break;
	//	case 'd':cout<<"您的理想类型: "<<"D:运动型"<<endl;break;
	//	case 'D':cout<<"您的理想类型: "<<"D:运动型"<<endl;break;
	//	defaute:
	//		cout<<"您的选择有误!"<<endl;
	//}
	//cout<<"您的月收入是: "<<salry<<endl;
	//cout<<"您的身高是: "<<hight<<endl;

	/*3.计算圆的周长,面积*/
	/*int radios = 0;
	float lenth = 0;
	float area = 0;
	cout<<"请输入您要算的圆的半径: "<<endl;
	cin>>radios;
	lenth = 2 * 3.14 * radios;
	area = 3.14 * radios * radios;
	cout<<"此圆周长为: "<<lenth<<".面积为: "<<area<<endl;*/
	
	/*4.无符号的数据诡异*/
	/*unsigned int boyAge = 0;
	unsigned int girlAge = 0;
	cout<<"帅哥的年龄是:"<<endl;
	cin>>boyAge;
	cout<<"美女的年龄是:"<<endl;
	cin>>girlAge;
	cout<<"美女比帅哥大"<<girlAge - boyAge<<"岁."<<endl;
	cout<<"帅哥比美女大"<<boyAge - girlAge<<"岁."<<endl;*/

	/*string girlFriend1;
	string girlFriend2;
	girlFriend1 = "王菲";
	girlFriend2 = girlFriend1;
	cout<<"前女票是: "<<girlFriend1<<endl;
	cout<<"现女票是: "<<girlFriend2<<endl;*/
	/*string food;
	int count = 0;
	cout<<"你喜欢吃什么?"<<endl;

	while(cin>>food)
	{
		cout<<"你最喜欢吃的食物是:"<<food<<endl;
		count++;
		cout<<"你还喜欢吃什么?";
	}
	cout<<"你喜欢的食物有"<<count<<"种."<<endl;*/
	/*string addr;
	cout<<"美女,到哪里旅游啊?"<<endl;
	getline(cin,addr);

	if(addr.empty() == true)
	{
		cout<<"干嘛不说话!"<<endl;
	}else
	{
		cout<<"这么巧,我也去"<<addr<<"玩."<<endl;
	}
*/
	/*int girlSize[10] = {3,2,1,4};
	cout<<girlSize[-1]<<endl;*/
	//char name[16];
	//char addr[64];

	//printf("姑娘芳名?");
	//scanf("%s",name);

	//fflush(stdin);

	//printf("姑娘家住何方?");
	//gets(addr);

	//printf("家住%s的%s姑娘,我喜欢你.",addr,name);

	/*float r;
	float s;

	cout << "请输入圆的半径:";
	scanf("%f",&r);

	s = 3.14 * r * r;
	cout<<"此圆的面积是:"<<s<<endl;
*/


	/*5.统计输入多少个单词,和全部单词的总长度*/
	//string word;
	//int count = 0;
	//int wordLenth = 0;
	////string c;
	//cout<<"请输入任意多个单词!"<<endl;
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
	//cout<<"你一共输入"<<count<<"个单词."<<endl;
	//cout<<"你输入的单词总长度为"<<wordLenth<<endl;

	/*6.统计输入多行字符串行数,字符个数,判断不出换行符*/
	//int line=1;
	//int countChar=0;
	//char charAmount;
	//

	//cout << "请输入任意字符!"<<endl;
	//while(cin>>charAmount)
	//{
	//	
	//	if(charAmount==0)
	//	{
	//		break;
	//	}else if(charAmount == '\n')
	//	{
	//		line++;//这行没有执行.
	//		continue;
	//	}else
	//	{
	//		countChar++;
	//	}
	//}
	//cout<<"你一共输入"<<line<<"行字符"<<endl;
	//cout<<"输入的字符个数为:"<<countChar<<"个."<<endl;
	
	/*7.统计输入的行数,统计字符总个数*/
	//string line;//C语言:char line[2048]
	//int lineCount = 0;
	//int charLenth = 0;
	//while(1)
	//{
	//	if(getline(cin,line) == 0)//C语言:gets(line);
	//	{
	//		break;
	//	}
	//	lineCount++;
	//	charLenth += line.length();//空格也包含进去了.
	//}
	//cout<<"你输入了"<<lineCount<<"行."<<endl;
	//cout<<"共有"<<charLenth<<"个字符."<<endl;
	
	/*8.验证用户密码才能登陆使用黑客攻击软件*/
	//string userName;
	//int passWd;
	//cout<<"请输入用户名(字符串):";
	//cin>>userName;
	//cout<<"请输入密码(数字):";
	//cin>>passWd;

	//if(userName == "54hk" && passWd == 123456)
	//{
	//	
	////初始化攻击界面,加背景图
	//initgraph(632,398);
	//loadimage(0,"bg.jpg");

	////画空心矩形,坐标:1.360,20-580,80   2.360,90-580,150   3.360,160-580,220    4.360,230-580,290   5.360,300-580,350
	//rectangle(340,20,580,70);
	//rectangle(340,80,580,130);
	//rectangle(340,140,580,190);
	//rectangle(340,200,580,250);
	//rectangle(340,260,580,310);
	//rectangle(340,320,580,370);


	////设置文本颜色,样式
	//settextcolor(RGB(255,255,0));
	//settextstyle(40,0,"微软雅黑");
	////打印文本
	//outtextxy(350,25,"1.网站404攻击");
	//outtextxy(350,85,"2.网站篡改攻击");
	//outtextxy(350,145,"3.网站服务攻击");
	//outtextxy(350,205,"4.网站攻击记录");
	//outtextxy(350,265,"5.网站DNS攻击");
	//outtextxy(350,325,"6.网站修复");
	//}else
	//{
	//	cout<<"用户名或密码错误."<<endl;
	//}

	/*9.将一个整数设置为低4位为0110*/
	//思路:先将x的低4位清0,然后再将低4位设置为0110.
	//int x;
	//cin>>x;
	//x = x & (~15);//15按位非的话就是11110000.将x的低4位清0.
	//x = x | 6;
	//cout<<"-65536>>1="<<(-65536>>1)<<endl;
	
	//int i = 0;

	////10.自增运算,太多不加括号,编译器将不会判断.例如:cout<<i+++++i--i;
	/*int age=0;

	cout<<"请输入年龄:"<<endl;
	cin>>age;

	if(age > 40)
	{
		cout<<"大叔"<<endl;
	}*/
	
	/*10.大小写字母的转换*/
	/*char oneChar;
	cout<<"请输入一个字符:"<<endl;
	cin>>oneChar;

	if(oneChar>='A'&&oneChar<='Z')
	{
		cout<<"你输入的字符是大写:"<<oneChar<<endl;
		oneChar = 'a' + oneChar - 'A';
		cout<<"你输入的字符的小写:"<<oneChar<<endl;
	}else
	{
		cout<<"你输入的字符是小写:"<<oneChar<<endl;
		oneChar = 'A' + oneChar - 'a';
		cout<<"你输入的字符的大写:"<<oneChar<<endl;
	}*/
	
	/*11.阿拉伯数字与中文数字的转换*/
//	int num;
//	cout<<"请输入一个数字(0-9):"<<endl;
//	cin>>num;
//
//	//第一种方法
//	/*switch(num)
//	{
//	case 0:cout<<"零"<<endl;break;
//	case 1:cout<<"壹"<<endl;break;
//	case 2:cout<<"贰"<<endl;break;
//	case 3:cout<<"叁"<<endl;break;
//	case 4:cout<<"肆"<<endl;break;
//	case 5:cout<<"伍"<<endl;break;
//	case 6:cout<<"陆"<<endl;break;
//	case 7:cout<<"柒"<<endl;break;
//	case 8:cout<<"扒"<<endl;break;
//	case 9:cout<<"玖"<<endl;break;
//	default:
//		cout<<"你输错了!"<<endl;
//	}
//*/
//	//第二种方法
//	string chineseNum[10] = {"零","壹","贰","叁","肆","伍","陆","柒","扒","玖"};
//
//	if(num>=0&&num<=9)
//	{
//		cout<<chineseNum[num]<<endl;
//	}


	///*12.输入年份,月份,计算这个月有几天*/
	//int year = 0;
	//int month = 0;
	//cout<<"请输入年份:"<<endl;
	//cin>>year;
	//cout<<"请输入月份:"<<endl;
	//cin>>month;
	////润年:1.能被4整除但不能被100整除. 2.能被400整除.
	//int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	//if(((year%4==0) && ((year%100) != 0) || (year%400 == 0)) && (month == 2))
	//{
	//	cout<<year<<"的"<<month<<"月有"<<days[month-1]+1<<"天"<<endl;
	//}else
	//{
	//	cout<<year<<"的"<<month<<"月有"<<days[month-1]<<"天"<<endl;
	//}
	//
	////另一种比较容易看懂的判断条件
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
	
	/*计算1+...+100的结果*/
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
				cout<<i<<":"<<j<<":"<<k<<"第"<<count<<"次想你!"<<endl;
				Sleep(1000);
			}
		}
	}

	system("pause");
	return 0;
}