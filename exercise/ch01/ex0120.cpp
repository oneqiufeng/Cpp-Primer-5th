//在网站http://www.informit.com/title/032174113 上，第1章的代码目录包含了头文件 Sales_item.h。将它拷贝到你自己的工作目录中。用它编写一个程序，读取一组书籍销售记录，将每条记录打印到标准输出上。

//Answerlink:https://blog.csdn.net/tefuirnever/article/details/103671604

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item book;
	cout<<"Please enter a sales record"<<endl;
	while(cin>>book)
	{
		cout<<"ISBN, number of copies sold, sales and average selling price are"<<book<<endl;
	}
	system("pause");
	return 0;	
}

//Input below
//0-201-78345-X 3 60
//0-201-78345-X 2 50

/*--------------------split-line--------------------*/

// #include<iostream>
// #include"Sales_item.h"

// int main()
// {
// 	Sales_item book;
// 	std::cout << "Please enter a sales record" << std::endl;
// 	while (std::cin >> book){
// 		std::cout << "ISBN, number of copies sold, sales and average selling price are"<< book << std::endl;
// 	}
// 	system("pause");
// 	return 0;
// }

/*--------------------split-line--------------------*/

// #include <iostream>
// #include "Sales_item.h"

// using std::cin;
// using std::cout;
// using std::endl;

// int main()
// {
// 	for (Sales_item item; cin >> item; cout << item << endl);
// 	return 0;
// }

// #include <iostream>
// #include "Sales_item.h"

// int main()
// {
// 	for (Sales_item item; std::cin >> item; std::cout << item << std::endl);
// 	return 0;
// }

//命令
//./main < data/add_item
//输出
//0-201-78345-X 3 60 20
//0-201-78345-X 2 50 25

// #include <iostream>
// #include "include/Sales_item.h"

// using std::cin;
// using std::cout;
// using std::endl;

// int main()
// {
//     for (Sales_item item; cin >> item; cout << item << endl);
//     return 0;
// }