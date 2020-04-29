#include <iostream>
using namespace std;
#include <iomanip>
#include <cString>
using std::setw;
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
void showArr(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 100 + i;
	}
std:cout << "element" << setw(13) << "value" << endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << setw(7) << i << setw(13) << arr[i] << endl;
	}
	cout << "*****************************************************" << endl;
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	std::cout << count << endl;
}

void showArr1()
{
	int arr[3][3] = { 0,1,2,3,4,5,6,7,8 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		std:cout << arr[i][j] << endl;
		}

	}
}

void showVector()
{    //主存数组
	vector<vector<int>> arr;
	//变量数组；
	vector<int>  bak_arr;

	int i, j, k;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 5; j++)
		{
			bak_arr.push_back(i + j);
		}
		sort(bak_arr.begin(), bak_arr.end());//排序算法，需要添加algorithm
		arr.push_back(bak_arr);
		bak_arr.resize(0);
	}
	cout << "SHUWANKE" << endl;

	for (k = 0; k < 2; k++)
	{
		for (int i = 0; i < 5; i++)
		{
		std:cout << arr[k][i] << endl;
		}
	}

}



void sort_default()
{
	int n = 0;
	vector<int> arr;
	for (int i = 10; i > 0; i--)
	{
		arr.push_back(i);
	}
	//sort(arr.begin(),arr.end());
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}


void showStr()
{
	int len = 0;
	char str1[12] = "shift";
	char str2[12] = "ctrl";
	char str3[12] = "cxk";
	char str4[12] = "";  //定义空的字符串的时候一定不能只写一个str4[]这样的，时代变了，编辑器已经不支持这种写法；
    //连接str1和str2
	strcat_s(str4, str2);
	cout << str4 << endl;
	//赋值str1到str2
	strcpy_s(str2, str1);  
	cout << str2 << endl;
	strcat_s(str1,str2);
	cout << str1 << endl;
	//计算数组的字符串的长度
     len =	strlen(str1);
	 cout << len << endl;
}

