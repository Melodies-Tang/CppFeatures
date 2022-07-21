class Test
{
public:
    int a;
    int b;
// private:
//     int useless;
};

int main()
{
    /*
    https://zhuanlan.zhihu.com/p/355389970
    对聚合的定义，在每个C++版本中有少许的区别，这里简单总结下C++17中定义：一个class或struct类型，当它满足以下条件时，称为一个聚合[1]：
    1. 没有private或protected数据成员；
    2. 没有用户提供的构造函数（但是显式使用=default或=delete声明的构造函数除外）；
    3. 没有virtual、private或者protected基类；
    4. 没有虚函数
    直观的看，聚合常常对应着只包含数据的struct类型，即常说的POD类型。另外，原生数组类型也都是聚合。
    聚合初始化可以用大括号列表。一般大括号内的元素与聚合的元素一一对应，并且大括号的嵌套也和聚合类型嵌套关系一致。
    */
    Test t_curly{1, 2};  // after adding private member useless, Error
    // Test t_brace(1, 2);
    return 0;
}
