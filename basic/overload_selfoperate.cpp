// #include <iostream>
// using namespace std;
// class three
// {
// public:
//     three(int a = 0, int b = 0, int c = 0);
//     void print();
//     friend three operator++(three &op);      //声明自加运算符++重载友元函数（前缀方式）
// private:
//     int x, y, z;
// };

// three::three(int a, int b, int c)
// {
//     x = a;
//     y = b;
//     z = c;
// }

// void three::print()
// {
//     cout << "x=" << x << " y=" << y << " z=" << z << endl;
// }

// three operator++(three &op)
// {
//     ++op.x;
//     ++op.y;
//     ++op.z;
//     return op;
// }

// int main()
// {
//     three obj1(4, 5, 6), obj2(7, 8, 9);
//     obj1.print();
//     ++obj1;
//     obj1.print();
//     obj1++;  // no operator "++" matches these operands
//     obj1.print();
//     cout << endl;
//     obj2.print();
//     operator++(obj2); //显示调用
//     obj2.print();
//     operator++(obj2, 0);  // no operator "++" matches these operands
//     obj2.print();
//     return 0;
// }

#include<iostream>
using namespace std;
class three
{
    public:
        three(int a=0,int b=0,int c=0);
        void print();
        three operator--();//声明自减运算符--重载成员函数（前缀方式） 
        // three operator--(int);//声明自减运算符--重载成员函数（后缀方式）
        private:
        int x,y,z; 
};

three::three(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}

void three::print()
{
    cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
}

three three::operator--()
{
    --x;
    --y;
    --z;
    return *this;//返回自减后的当前对象 
 } 
// three three::operator--(int)
// {
//     three temp(*this); 
//     x--;
//     y--;
//     z--;
//     return temp;
// }

int main()
{
    three obj1(4,5,6),obj2,obj3(7,8,9),obj4;
    obj1.print();
    --obj1;
    obj1.print();
    obj2=obj1--;  // no operator "--" matches these operands
    obj2.print();
    obj1.print();
    cout<<endl;
    obj3.print();
    obj3.operator--();
    obj3.print();
    obj4=obj3.operator--(0);  // no operator "--" matches these operands
    obj4.print();
    obj3.print();
    return 0;
}
