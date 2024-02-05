//修改你为1.4.1节练习1.11（第11页）所编写的程序（打印一个范围内的数），使其能处理用户输入的第一个数比第二个数小的情况。

#include <iostream>

int main()
{
    int start = 0, end = 0;
    std::cout << "Please input two num: ";
    std::cin >> start >> end;
    if (start <= end) {
        while (start <= end){
            std::cout << start << " ";
            ++start;
        }
        std::cout << std::endl;
    }
    else{
        std::cout << "start should be smaller than end !!!";
    }
}  