#include <iostream>
#include <string>
#include <cstring>
#include <xstring>
using namespace std;
/*
 int main()
{
	//����һ��string�����
	string http = "www.runoob.com";

   //��ӡ�ַ�������
   cout<<http.length()<<endl;

	//ƴ��
	http.append("/C++");
	cout<<http<<endl; //��ӡ���Ϊ��www.runoob.com/C++

	//ɾ��
	int pos = http.find("/C++"); //����"C++"���ַ����е�λ��
	cout<<pos<<endl;
	http.replace(pos, 4, "");   //��λ��pos��ʼ��֮���4���ַ��滻Ϊ�գ���ɾ��
	cout<<http<<endl;

	//���Ӵ�runoob
	int first = http.find_first_of("."); //��ͷ��ʼѰ���ַ�'.'��λ��
	int last = http.find_last_of(".");   //��β��ʼѰ���ַ�'.'��λ��
	cout<<http.substr(first+1, last-first-1)<<endl; //��ȡ"runoob"�Ӵ�����ӡ

	return 0;
}
*/

void etstString()
{
	string http = "www.runnob.com";
	string shift = " I am fucking coming";
	http.append(shift);
	cout << http << http.length() << endl;
	int pos = http.find("fucking");
	cout << pos << endl;
	http.replace(pos, 7, "shiftok");
	cout << http << endl;
	int first = http.find_first_of("s");
	int last = http.find_last_of("k");

	cout << http.substr(first + 1, last - first) << endl;
}