#include <bits/stdc++.h>
using namespace std;

struct Test
{
    int x;

    Test() : x(0) {}

    // explicit Test(int _x) : x(_x) {}
    Test(int _x) : x(_x) {}

    Test operator+(const Test &rhs)
    {
        cout << "member operator+ called\n";
        return Test(this->x + rhs.x);
    }
};

Test operator+(int lhs, const Test &rhs)
{
    cout << "non-member operator+ called\n";
    return Test(lhs + rhs.x);
}

int main()
{
    Test t(1);
    // including a implicit-conversion int-to-Test; if explict Test(int), then mismatched types ‘const std::reverse_iterator<_Iterator>’ and ‘int’
    // otherwise, it works if there is no member-operator+(int), which is done by converse int to Type using constructor before operator+
    t = t + 1;
    t = 1 + t;
    return 0;
}
