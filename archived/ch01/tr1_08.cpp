/*

// Indicate which of the following output statements are legal (if any)

std::cout << "/*";
std::cout << "*/";
std::cout << /* "*/" */;
std::cout << /* "*/" /* "/*" */;

// Predict what compiling these statements will produce, actually compile the statements to verify your answer (write a small program with one of the above statements as its body at a time), and correct each compilation error.

// 只有第三句编译出错，改成如下即可
std::cout << /* "*/" */";
// 第四句等价于输出——" /* "

*/