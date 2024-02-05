/*

// 编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息。
// Compile a program that contains incorrectly nested comments and observe the error messages returned by the compiler.

/* 正常注释 /* 嵌套注释 */ 正常注释*/

// 错误信息
// wrong information
  /* 正常注释 /* 嵌套注释 */ 正常注释*/
                                     ^
ch1.cpp:97:37: error: stray ‘\255’ in program
ch1.cpp:97:37: error: stray ‘\243’ in program
ch1.cpp:97:37: error: stray ‘\345’ in program
ch1.cpp:97:37: error: stray ‘\270’ in program
ch1.cpp:97:37: error: stray ‘\270’ in program
ch1.cpp:97:37: error: stray ‘\346’ in program
ch1.cpp:97:37: error: stray ‘\263’ in program
ch1.cpp:97:37: error: stray ‘\250’ in program
ch1.cpp:97:37: error: stray ‘\351’ in program
ch1.cpp:97:37: error: stray ‘\207’ in program
ch1.cpp:97:37: error: stray ‘\212’ in program
ch1.cpp: In function ‘int main()’:
ch1.cpp:97:50: error: expected primary-expression before ‘/’ token
  /* 正常注释 /* 嵌套注释 */ 正常注释*/
                                                  ^
ch1.cpp:98:5: error: expected primary-expression before ‘return’
     return 0;
     ^

*/