#include <iostream>
int main()
{
    // [capture](param)->return-type{body}
    // [capture]捕获列表,用于捕获其所在作用域中的变量
    // [] 空捕获列表：不捕获任何外部变量。
    // [=] 值捕获：以拷贝的方式捕获所有外部变量。
    // [&] 引用捕获：以引用的方式捕获所有外部变量。
    // [&var] 捕获特定变量（引用方式）
    // [a, &b, ...]混合捕获
    // ->return-type可以不写

    // 捕获和参数列表都是获取数据的方式
    // 捕获是明确从外部拿，参数是等着外面传
    // 捕获在编译时就传递好了，参数在运行时才会传递
    // 优先使用参数，

    int a = 100, b = 50;

    // 类型1，无捕获，仅传参，与普通函数相同
    auto function = [](int x, int y) -> int
    { return x + y; };
    std::cout << function(a, b) << std::endl
              << a << "\t" << b << std::endl;

        auto function1 = [&a](int b) mutable
    {
        a+=1;return a + b; };
    std::cout << function1(b) << std::endl
              << a << "\t" << b << std::endl;
}