#include <stdio.h>
using namespace std;

class Tool {
public:
    Tool(int i)
    {
        printf("Tool %d\n", i);
    }
};

class Base {
public:
    Tool t1;
    Base() : t1(1)
    {
        printf("Base()\n");
    }
};

class Derived : public Base {
public:
    Tool t2;
    Derived() : t2(2)
    {
        printf("Derived()\n");
    }
};

int main()
{
    Derived d;  // Order: Base (Member->Constructor) -> Derived (Member->Constructor)
    Base& b = d;  // Legal
    return 0;
}
