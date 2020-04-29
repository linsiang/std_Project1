#include <iostream>
using namespace std;
/**

 测试lambda表达式
*/
void showLambda()
{
	int i = 1024, j = 2048;
	//直观的表达式，返回两个数中的比较大的值
	auto max = [](int a, int b) {return a > b ? a : b; };
	//添加拖尾返回值，->后面加返回的类型表示手动要求返回数据类型
	auto min = [](int a, int b) ->int {return a < b ? a : b; };
	int temp = max(3, 8);
	std::cout << temp << endl;
	//lambda表达式[=]表示把外面的变量都赋值一份到表达式里面来
	auto func = [=] {std::cout << "i=" << i << " j=" << j << " temp=" << temp << endl; };
	func();
}
/**
 递归算法，计算n的阶乘
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