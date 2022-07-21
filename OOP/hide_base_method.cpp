#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    void printInfo()
    {
        cout << getInfo() << " ";
    }
    string getInfo()
    {
        return "Person";
    }
};

class Student : public Person
{
public:
    string getInfo()
    {
        return "Student";
    }
};

int main()
{
    Person base;
    Student derived;
    base.printInfo();
    derived.printInfo();  // WHY Person? -> not virtual so still static binding
    return 0;
} 

// https://blog.csdn.net/friendbkf/article/details/45193385

// 虚函数的调用关系：this -> vptr -> vtable ->virtual function
