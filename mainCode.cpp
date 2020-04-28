#include "iostream"
#include "key.h"
#define code 0;
using namespace std;


int  main()
{
	showPtrAdd();
	ShwoPtrDown();
#if code
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



