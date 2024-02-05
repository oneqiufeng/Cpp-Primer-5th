//使用for循环重做1.4.1节中的所有练习（练习1.9到1.11）。

#include<iostream>
using namespace std;

//0109
//编写程序，使用while循环将50到100整数相加。

// int main()
// {
//     int sum;
//     for(int i=50;i<=100;i++)
//     {
//         sum+=i;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

//0110
//除了++运算符将运算对象的值增加1之外，还有一个递减运算符--实现将值减少1
//拓展，编写程序，使用递减运算符在循环中按递减顺序打印出v2到v1之间的整数。

// int main()
// {
//     int v1,v2;
//     cin>>v1>>v2;
//     if(v1<=v2)
//     {
//         for(;v1<=v2;v2--)
//         {
//             cout<<v2<<" ";
//         }
//         cout<<endl;
//     }
//     else
//     {
//         cout << "start should be smaller than end !!!";
//     }
//     return 0;
// }

//0111
//编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。

int main()
{
    int v1,v2;
    cout<<"Enter 2 numbers"<<endl;
    cin>>v1>>v2;
    if(v1<=v2)
    {
        for(;v1<=v2;v1++)
        {
            cout<<v1<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout << "start should be smaller than end !!!";
    }
    return 0;
}

/*
对比for循环和while循环，两种形式的优缺点各是什么？
The main difference between the `for`'s and the `while`'s is a matter of pragmatics: 
we usually use `for` when there is a known number of iterations, 
and use `while` constructs when the number of iterations in not known in advance. 
The `while` vs `do ... while` issue is also of pragmatics, 
the second executes the instructions once at start, 
and afterwards it behaves just like the simple `while`.
*/