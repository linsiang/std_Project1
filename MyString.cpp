#include <iostream>
#include <string>
#include <cstring>
#include <xstring>
using namespace std;



#define N 100

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
	//�ҵ�fucking��λ��
	int pos = http.find("fucking");
	cout << pos << endl;
	//�滻��posλ�õĺ���λ�ַ�Ϊshiftok
	http.replace(pos, 7, "shiftok");
	cout << http << endl;
	//�ҵ����һ�κ͵�һ����ĳ���ַ���λ��
	int first = http.find_first_of("s");
	int last = http.find_last_of("k");
	//���д�ĳ��λ�õ�ĳ��λ�õĲ��ֳ���,������������е��ַ����ǲ��ᱻ�ı�ģ��൱������ȡĳ�����ֳ���
	string temp = http.substr(first, last - first + 1);
	cout << temp << endl;
	cout << http << endl;
}
/*
 �Ӽ�������һ�����ֻ�������ĸ ��������ݣ����ؽ����ʾ��������ֺ���ĸ�ĸ���
*/

int inputString()
{
	char X[N];
	cin.getline(X, N);                               //��cin.getline��ʽ����
	int a = 0, b = 0;
	for (int i = 0; i < N; i++)
	{
		if (X[i] == '#')                             //Ϊ#Ϊ������־
			break;
		if (X[i] >= '0' && X[i] <= '9')
			a++;                                    //ͳ�����ָ���
		if ((X[i] >= 'a' && X[i] <= 'z') || (X[i] >= 'A' && X[i] <= 'Z'))
			b++;                                    //ͳ��Ӣ����ĸ����
	}
	cout <<"���ֵĸ���Ϊ��" << a << endl<<"��ĸ�ĸ���Ϊ��" << b << endl;
	return 0;
}





