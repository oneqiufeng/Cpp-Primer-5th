//编写程序，从cin读取一组数，输出其和。

#include<iostream>
using namespace std;

int main()
{
    int sum=0;
    cout<<" Stop Enter by enter end"<<endl;
    for(int value=0;cin>>value;)
        sum=sum+value;
        cout<<sum<<endl;
    return 0;
}

/*
#include <iostream>

int main()
{
    int sum = 0;
    for (int value = 0; std::cin >> value; )
        sum += value;
    std::cout << sum << std::endl;
    return 0;
}
*/