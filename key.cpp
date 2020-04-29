#include <iostream>
#include <stdio.h>
#include "key.h"
#include "stdlib.h"
#include "time.h"
using namespace  std;
const short max = 5;

//对x取余数，表示得出的是0到x的伪随机数
#define Random(x){rand()%x}  
//产生指定范围的随机数。

void showShift()
{
	cout << "I am fucking coming from the shift file " << endl;

}
void showDateType()
{
	cout << "type: \t\t" << "************size**************" << endl;
	cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
	cout << "\t最大值：" << (numeric_limits<bool>::max)();
	cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
	cout << "char: \t\t" << "所占字节数：" << sizeof(char);
	cout << "\t最大值：" << (numeric_limits<char>::max)();
	cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
	cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
	cout << "\t最大值：" << (numeric_limits<signed char>::max)();
	cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
	cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
	cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
	cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
	cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
	cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
	cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
	cout << "short: \t\t" << "所占字节数：" << sizeof(short);
	cout << "\t最大值：" << (numeric_limits<short>::max)();
	cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
	cout << "int: \t\t" << "所占字节数：" << sizeof(int);
	cout << "\t最大值：" << (numeric_limits<int>::max)();
	cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
	cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
	cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
	cout << "long: \t\t" << "所占字节数：" << sizeof(long);
	cout << "\t最大值：" << (numeric_limits<long>::max)();
	cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
	cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
	cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
	cout << "double: \t" << "所占字节数：" << sizeof(double);
	cout << "\t最大值：" << (numeric_limits<double>::max)();
	cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
	cout << "long double: \t" << "所占字节数：" << sizeof(long double);
	cout << "\t最大值：" << (numeric_limits<long double>::max)();
	cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
	cout << "float: \t\t" << "所占字节数：" << sizeof(float);
	cout << "\t最大值：" << (numeric_limits<float>::max)();
	cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
	cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
	cout << "\t最大值：" << (numeric_limits<size_t>::max)();
	cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
	cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
	// << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
	cout << "type: \t\t" << "************size**************" << endl;

}
/**

 使用指针遍历数组内的元素

*/

void showPtrAdd()
{

	int str[max] = { 123,234,123,123,12 };
	int* Ptr;
	Ptr = str;

	for (int i = 0; i < max; i++)
	{
		cout << *Ptr << endl;
		Ptr++;
	}

}

void ShwoPtrDown()
{
	int str[max] = { 13,23,33,43,53 };
	int* P;
	P = &str[max - 1];
	for (int i = max; i > 0; i--)
	{
		cout << *P << endl;
		P--;
	}
}


/**
c++随机数的产生
*/

void showSrand()
{   //设置随机数种子,用时间来做不同的种子，这样每次产生的随机数都不一样
	srand((int)time(NULL));
	//输出随机数
	int a = 0;
	for (int i = 0; i < 10; i++)
	{   //[0,3)
		a = rand() % 3;
		cout << a << endl;
	}
	cout << "********************************" << endl;
	int Freedom = Random(8);
	cout << Freedom << endl;
}

/*
 产生指定范围的随机数,随机数的公式不需要背下来，只要理解了怎么来的就行[0，x）-> rand()%x;
*/

void RandomNum(int m, int n)
{
	srand((int)time(NULL));
	int a = 0,b= 0,c= 0,d=0;
	/*
	 (m,n) (rand()%(n-m+1))+a-1;
	 [m.n) (rand()%(n-m))+a
	 (m,n] (rand()%(n-m))+a+1
	 [m,n] (rand()%(n-m+1))+a
	*/
	
	for (int i = 0; i < 10; i++)
	{
		a = rand() % m + n - m + 1;
		cout << a << endl;
	}

}


