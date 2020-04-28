#include "iostream"
#include "key.h"
#include "lambda.h"
#define code 0;
using namespace std;


int  main()
{
	showLambda();

	
#if code
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



