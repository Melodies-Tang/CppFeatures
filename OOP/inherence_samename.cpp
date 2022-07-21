#include <iostream>
using namespace std;

// class ParentClass
// {
// public:
//     int id;

//     ParentClass(int id)
//     {
//         this->id = id;
//     }

//     void print()
//     {
//         cout << id << endl;
//     }
// };

// class ChildClass : public ParentClass
// {
// public:
//     int id;

//     ChildClass(int id) : ParentClass(1)
//     {
//         this->id = id;
//     }
// };

// int main()
// {
//     ChildClass c(2);
//     c.print();  // 就近原则，调用的是父类的print()函数
//     return 0;
// }


class ParentClass
{
public:
    int id;

    ParentClass(int id)
    {
        this->id = id;
    }

    void print()
    {
        cout << this->id << endl;
    }
};

class ChildClass : public ParentClass
{
public:
    // int id;
    // 如此这般，子类的id和父类的id是同一个变量（子类的id是父类的id的一个引用），从而调用子类的print()函数时，id是最后进行的赋值
    ChildClass(int id) : ParentClass(1)
    {
        this->id = id;
    }
};

int main()
{

    ChildClass c(2);
    c.print();  // 就近原则，调用的是父类的print()函数
    return 0;
}

