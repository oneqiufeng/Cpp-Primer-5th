//编写程序，读取多个具有相同 ISBN 的销售记录，输出所有记录的和。

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item total, trans;
	cout<<"Please enter several sales records with the same ISBN: "<<endl;
	if (cin>>total)
	{
		while (cin>>trans)
		if (compareIsbn(total, trans)){
			total = total + trans;
		}
		else{
			cout<<"ISBN different"<<endl;
			return -1;
		}
		cout<<"Aggregate information: ISBN, number of copies sold, sales, and average selling price are "
			<< total<<endl;
	}
	else
	{
		cout<<"No data available"<<endl;
		return -1;
	}
	system("pause");
	return 0;
}

/*
0-201-78345-X 3 60
0-201-78345-X 3 60
0-201-78345-X 3 60
0-201-78345-X 2 50
^z
end(数据录入完毕后输入)
Aggregate information: ISBN, number of copies sold, sales, and average selling price are 0-201-78345-X 11 640 58.1818
请按任意键继续. . . 
*/