//编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。

// #include<iostream>
// using namespace std;

// int main()
// {
//     int v1,v2;
//     cout << "Please input two num: ";
//     cin>>v1>>v2;
//     int start=v1;
//     int end=v2;
//     while (start<=end){
//         cout<<start<<" ";
//         start+=1;
//     }
//     cout<<endl;
// }

// 原答案

// #include <iostream>

// int main()
// {
//     int start = 0, end = 0;
//     std::cout << "Please input two num: ";
//     std::cin >> start >> end;
//     if (start <= end) {
//         while (start <= end){
//             std::cout << start << " ";
//             ++start;
//         }
//         std::cout << std::endl;
//     }
//     else{
//         std::cout << "start should be smaller than end !!!";
//     }
// }  

#include<iostream>
using namespace std;

int main()
{
    int v1,v2;
    cout << "Please input two num: "<<endl;
    cin>>v1>>v2;
    int start=v1;
    int end=v2;
    if(start<=end){
        while(start<=end){
            cout<<start<<" ";
            ++start;
        }
        cout<<endl;
    }
    else{
        cout<<"Error!!! Start should be smaller than End!"<<endl;
    }
    return 0;
}