//编写程序，使用while循环将50到100整数相加。
//延伸练习：编写程序，使用while循环将v1到v2整数相加。

#include<iostream>
using namespace std;

// int main()
// {
//     int sum = 0, val = 50;
//     while (val <= 100){
//         sum += val;
//         val += 1;
//     }
//     std::cout << "Sum of 50 to 100 inclusive is "
//               << sum << std::endl;
// }    

int main()
{
    int v1,v2,sum,val;
    cout<<"Enter v1 and v2"<<endl;
    cin>>v1>>v2;
    sum=0;
    val=v1;
    while(val<=v2){
        sum+=val;
        val+=1;
    }
    cout<<"Sum of "<<v1<<" to "<<v2<<" inclusive is "<<sum<<endl;
    return 0;
}