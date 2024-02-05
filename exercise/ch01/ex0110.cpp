//除了++运算符将运算对象的值增加1之外，还有一个递减运算符--实现将值减少1
//拓展，编写程序，使用递减运算符在循环中按递减顺序打印出v2到v1之间的整数。

#include <iostream>
using namespace std;

// int main()
// {
//     int val = 10;
//     while (val >= 0){
//         cout << val << " ";
//         val -= 1;
//     }
//     cout << endl;
// }  

int main()
{
    int v1,v2;
    cout<<"Enter v1 and v2 (v1<v2)"<<endl;
    cin>>v1>>v2;
    int val=v2;
    int over=v1;
    while (val>=over){
        cout<<val<<" ";
        val-=1;
    }
    cout<<endl;
}