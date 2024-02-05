//编写程序，读取两个 ISBN 相同的 Sales_item 对象，输出他们的和。
//Write a program that reads two Sales_item objects with the same ISBN and outputs their sum.

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item trans1,trans2;
	cout<<"Please enter two sales records with the same ISBN: "<<endl;
	cin>>trans1>>trans2;
	if(compareIsbn(trans1,trans2))
		cout<<"Aggregate information: ISBN, number of copies sold, sales and average selling price were "<<trans1+trans2<<endl;
	else
		cout<<"Two sales records with different ISBNs"<<endl;
	system("pause");
	return 0;
}

//0-201-78345-X 3 60
//0-201-78345-X 3 60

/*--------------------split-line--------------------*/

// #include<iostream>
// #include"Sales_item.h"
// int main()
// {
// 	Sales_item trans1, trans2;
// 	std::cout << "Please enter two sales records with the same ISBN: " << std::endl;
// 	std::cin >> trans1 >> trans2;
// 	if (compareIsbn(trans1, trans2))
// 		std::cout << "Aggregate information: ISBN, number of copies sold, sales and average selling price were "
// 		<< trans1 + trans2 << std::endl;
// 	else
// 		std::cout << "Two sales records with different ISBNs" << std::endl;

// 	system("pause");
// 	return 0;
// }

//0-201-78345-X 3 60
//0-201-78345-X 3 60

/*--------------------split-line--------------------*/

// #include <iostream>
// #include "Sales_item.h"

// int main()
// {
//     Sales_item item_1;
//     Sales_item item_2;
//     std::cin >> item_1;
//     std::cout << item_1 << std::endl;
//     std::cin >> item_2;
//     std::cout << item_2 << std::endl;
//     std::cout << "sum of sale items: " << item_1 + item_2 << std::endl;
// 	return 0;
// }