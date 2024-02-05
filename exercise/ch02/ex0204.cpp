//读程序写结果。

// unsigned u = 10, u2 = 42;
// cout << u2 - u << endl;
// cout << u - u2 << endl;
// int i = 10, i2 = 42;
// cout << i2 - i << endl;
// cout << i - i2 << endl;
// cout << i - u << endl;
// cout << u - i << endl;

//输出

// 32
// 4294967264
// 32
// -32
// 0
// 0

#include <iostream>
using namespace std;

int main()
{
	unsigned u = 10, u2 = 42;
	cout << u2 - u << endl;   // 32
	cout << u - u2 << endl;   // 4294967264
	int i = 10, i2 = 42;	  
	cout << i2 - i << endl;   // 32
	cout << i - i2 << endl;   // -32
	cout << i - u << endl;    // 0
	cout << u - i << endl;    // 0

	return 0;
}