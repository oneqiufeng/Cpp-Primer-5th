// 解释下面程序片段是否合法

/*
std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;

*/

// 程序不合法，有多余的分号，修改如下：

/*
std::cout << "The sum of " << v1
          << " and " << v2
          << " is " << v1 + v2 << std::endl;
*/