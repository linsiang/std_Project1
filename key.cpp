#include <iostream>
#include <stdio.h>
#include "key.h"
#include "stdlib.h"
#include "time.h"
using namespace  std;
const short max = 5;

//��xȡ��������ʾ�ó�����0��x��α�����
#define Random(x){rand()%x}  
//����ָ����Χ���������

void showShift()
{
	cout << "I am fucking coming from the shift file " << endl;

}
void showDateType()
{
	cout << "type: \t\t" << "************size**************" << endl;
	cout << "bool: \t\t" << "��ռ�ֽ�����" << sizeof(bool);
	cout << "\t���ֵ��" << (numeric_limits<bool>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;
	cout << "char: \t\t" << "��ռ�ֽ�����" << sizeof(char);
	cout << "\t���ֵ��" << (numeric_limits<char>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<char>::min)() << endl;
	cout << "signed char: \t" << "��ռ�ֽ�����" << sizeof(signed char);
	cout << "\t���ֵ��" << (numeric_limits<signed char>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<signed char>::min)() << endl;
	cout << "unsigned char: \t" << "��ռ�ֽ�����" << sizeof(unsigned char);
	cout << "\t���ֵ��" << (numeric_limits<unsigned char>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<unsigned char>::min)() << endl;
	cout << "wchar_t: \t" << "��ռ�ֽ�����" << sizeof(wchar_t);
	cout << "\t���ֵ��" << (numeric_limits<wchar_t>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;
	cout << "short: \t\t" << "��ռ�ֽ�����" << sizeof(short);
	cout << "\t���ֵ��" << (numeric_limits<short>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<short>::min)() << endl;
	cout << "int: \t\t" << "��ռ�ֽ�����" << sizeof(int);
	cout << "\t���ֵ��" << (numeric_limits<int>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;
	cout << "unsigned: \t" << "��ռ�ֽ�����" << sizeof(unsigned);
	cout << "\t���ֵ��" << (numeric_limits<unsigned>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<unsigned>::min)() << endl;
	cout << "long: \t\t" << "��ռ�ֽ�����" << sizeof(long);
	cout << "\t���ֵ��" << (numeric_limits<long>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;
	cout << "unsigned long: \t" << "��ռ�ֽ�����" << sizeof(unsigned long);
	cout << "\t���ֵ��" << (numeric_limits<unsigned long>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<unsigned long>::min)() << endl;
	cout << "double: \t" << "��ռ�ֽ�����" << sizeof(double);
	cout << "\t���ֵ��" << (numeric_limits<double>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;
	cout << "long double: \t" << "��ռ�ֽ�����" << sizeof(long double);
	cout << "\t���ֵ��" << (numeric_limits<long double>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;
	cout << "float: \t\t" << "��ռ�ֽ�����" << sizeof(float);
	cout << "\t���ֵ��" << (numeric_limits<float>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;
	cout << "size_t: \t" << "��ռ�ֽ�����" << sizeof(size_t);
	cout << "\t���ֵ��" << (numeric_limits<size_t>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<size_t>::min)() << endl;
	cout << "string: \t" << "��ռ�ֽ�����" << sizeof(string) << endl;
	// << "\t���ֵ��" << (numeric_limits<string>::max)() << "\t��Сֵ��" << (numeric_limits<string>::min)() << endl;  
	cout << "type: \t\t" << "************size**************" << endl;

}
/**

 ʹ��ָ����������ڵ�Ԫ��

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
c++������Ĳ���
*/

void showSrand()
{   //�������������,��ʱ��������ͬ�����ӣ�����ÿ�β��������������һ��
	srand((int)time(NULL));
	//��������
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
 ����ָ����Χ�������,������Ĺ�ʽ����Ҫ��������ֻҪ�������ô���ľ���[0��x��-> rand()%x;
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


