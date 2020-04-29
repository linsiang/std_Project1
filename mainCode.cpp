#include "iostream"
#include "key.h"
#include "lambda.h"
#include "MyString.h"
#define code 0;
using namespace std;


int  main()
{   

	etstString();
//	showStr();

#if code
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
	for (int i = 0; i < 100; i++)
	{
		printf("I am fucking coming !!!!  \n");
		std::cout << "I am using the std to printf " << endl;
	}
#endif
	return 0;
}



