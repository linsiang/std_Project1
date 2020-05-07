#include "iostream"
#include "key.h"
#include "lambda.h"
#include "MyString.h"
#include "stu.h"
#define code 0;
using namespace std;


int  main()
{   

	stu student;
	student.setCircle(100);
	student.setLength(123);
	student.setWeith(234);
	cout << student.getCircle() << endl << student.getLength() << endl << student.getWeith() << endl;


#if code
	inputString();
	etstString();
	showStr();
	sort_default();
#endif
#if code
	showVector();
#endif
#if code
	int arr[10];
	showArr(arr);
	showArr1();
#endif
#if code
	RandomNum(4, 6);
	showSrand();
#endif
#if code

	int a = fac(5);
	std::cout << a << endl;
	showLambda();
	showPtrAdd();
	ShwoPtrDown();
	showDateType();
#endif
#if code
	showShift();
#endif // code

#if code

#endif
	return 0;
}



