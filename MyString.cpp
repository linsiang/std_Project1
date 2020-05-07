#include <iostream>
#include <string>
#include <cstring>
#include <xstring>
using namespace std;



#define N 100

/*
 int main()
{
	//定义一个string类对象
	string http = "www.runoob.com";

   //打印字符串长度
   cout<<http.length()<<endl;

	//拼接
	http.append("/C++");
	cout<<http<<endl; //打印结果为：www.runoob.com/C++

	//删除
	int pos = http.find("/C++"); //查找"C++"在字符串中的位置
	cout<<pos<<endl;
	http.replace(pos, 4, "");   //从位置pos开始，之后的4个字符替换为空，即删除
	cout<<http<<endl;

	//找子串runoob
	int first = http.find_first_of("."); //从头开始寻找字符'.'的位置
	int last = http.find_last_of(".");   //从尾开始寻找字符'.'的位置
	cout<<http.substr(first+1, last-first-1)<<endl; //提取"runoob"子串并打印

	return 0;
}
*/

void etstString()
{
	string http = "www.runnob.com";
	string shift = " I am fucking coming";
	http.append(shift);
	cout << http << http.length() << endl;
	//找到fucking的位置
	int pos = http.find("fucking");
	cout << pos << endl;
	//替换掉pos位置的后七位字符为shiftok
	http.replace(pos, 7, "shiftok");
	cout << http << endl;
	//找到最后一次和第一出线某个字符的位置
	int first = http.find_first_of("s");
	int last = http.find_last_of("k");
	//剪切从某个位置到某个位置的部分出来,但是这个被剪切的字符串是不会被改变的，相当于是提取某个部分出来
	string temp = http.substr(first, last - first + 1);
	cout << temp << endl;
	cout << http << endl;
}
/*
 从键盘输入一堆数字或者是字母 的组合内容，返回结果显示输入的数字和字母的个数
*/

int inputString()
{
	char X[N];
	cin.getline(X, N);                               //以cin.getline形式输入
	int a = 0, b = 0;
	for (int i = 0; i < N; i++)
	{
		if (X[i] == '#')                             //为#为结束标志
			break;
		if (X[i] >= '0' && X[i] <= '9')
			a++;                                    //统计数字个数
		if ((X[i] >= 'a' && X[i] <= 'z') || (X[i] >= 'A' && X[i] <= 'Z'))
			b++;                                    //统计英文字母个数
	}
	cout <<"数字的个数为：" << a << endl<<"字母的个数为：" << b << endl;
	return 0;
}





