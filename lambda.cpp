#include <iostream>
using namespace std;
/**

 ����lambda���ʽ
*/
void showLambda()
{
	int i = 1024, j = 2048;
	//ֱ�۵ı��ʽ�������������еıȽϴ��ֵ
	auto max = [](int a, int b) {return a > b ? a : b; };
	//�����β����ֵ��->����ӷ��ص����ͱ�ʾ�ֶ�Ҫ�󷵻���������
	auto min = [](int a, int b) ->int {return a < b ? a : b; };
	int temp = max(3, 8);
	std::cout << temp << endl;
	//lambda���ʽ[=]��ʾ������ı�������ֵһ�ݵ����ʽ������
	auto func = [=] {std::cout << "i=" << i << " j=" << j << " temp=" << temp << endl; };
	func();
}
/**
 �ݹ��㷨������n�Ľ׳�
*/
int  fac(int n)
{
	int count = 1;
	if (n==1) 
	{
		return 1;
	}
	else 
	{
		return n * fac(n - 1);
	}
  
}