#include <iostream>
using namespace std;
/**
 
 ����lambda���ʽ 
*/
void showLambda() 
{
    auto max = [](int a, int b) {return a > b?a:b; };
    int temp = max(3,8);
    std::cout<< temp << endl;

}

