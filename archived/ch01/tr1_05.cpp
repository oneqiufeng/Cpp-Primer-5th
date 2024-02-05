//我们将所有的输出操作放在一条很长的语句中，重写程序，将每个运算对象的打印操作放在一条独立的语句中。

#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter two numbers:"<<endl;
    int v1 = 0, v2 = 0;
    cin>>v1>>v2;
    cout << "The product of ";//将每个运算对象的打印操作放在一条独立的语句中
    cout << v1;//将每个运算对象的打印操作放在一条独立的语句中
    cout << " and ";//将每个运算对象的打印操作放在一条独立的语句中
    cout << v2;//将每个运算对象的打印操作放在一条独立的语句中
    cout << " is ";//将每个运算对象的打印操作放在一条独立的语句中
    cout << v1 * v2;//将每个运算对象的打印操作放在一条独立的语句中
    cout << endl;
}