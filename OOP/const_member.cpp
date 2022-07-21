#include <bits/stdc++.h>
using namespace std;

// class Test {
// public:
//     int x;
//     Test() {
//         this->x = 1;
//     }

//     void change(Test& t) const {
//         t.x = 0;
//     }

// };

// int main() {
//     Test t1;
//     Test t2;
//     t1.change(t2);
//     return 0;
// }

class Date
{
private:
    int y, m, d;

public:
    Date() : y(0), m(0), d(0) {}
    // Date() const {}
    int year() const;
    int month() const;
    // int month();
    int day() const
    {
        return d;
    }
    int day()
    {
        return d++;
    }
    int addyear(int i)
    {
        return y + i;
    }
};

int Date::month()
{ // lineA
    return m;
}

int main()
{
    const Date d;
    int test;
    test = d.year();      // lineB
    test = d.addyear(10); // lineC
    Date d2;
    test = d2.year();
    test = d2.day(); // lineD
    return 0;
}

// class Test
// {
// public:
//     int x;
//     Test() : x(1) {}

//     int get_value() const
//     {
//         return x + 1;  // increment of member ‘Test::x’ in read-only object
//     }

//     int get_value()
//     {
//         return x - 1;
//     }
// };

// int main()
// {
//     Test t;
//     cout << t.get_value() << endl;
//     return 0;
// }
