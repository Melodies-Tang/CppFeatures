#include <iostream>
struct Base
{
    virtual ~Base() {}
    int a;
};
struct Derived : Base
{
    virtual void name() {}
    long b;
};
int main()
{
    Base *b1 = new Base;
    if (Derived *d = dynamic_cast<Derived *>(b1))
    {
        std::cout << "downcast from b1 to d successful\n";
        d->name();
    }
    Base *b2 = new Derived;
    if (Derived *d = dynamic_cast<Derived *>(b2))
    {
        std::cout << "downcast from b2 to d successful\n";
        d->name();
    }
    delete b1;
    delete b2;

    Derived *d1 = new Derived;
    printf("Size of derived object: %lu\n", sizeof(*d1));
    Base *b3 = d1;
    printf("Size of upcasted object: %lu\n", sizeof(*b3));
    d1 = dynamic_cast<Derived *>(b3);
    printf("Size of derived object: %lu\n", sizeof(*d1));
    // Derived d;
    // printf("Size of derived object: %lu\n", sizeof(d));
    // Base b = d;
    // printf("Size of upcasted derived object: %lu\n", sizeof(b));
    // // b = Base();
    // // printf("Size of base object: %lu\n", sizeof(b));
    // Derived& rd = dynamic_cast<Derived &>(b);
    // printf("Size of derived reference: %lu\n", sizeof(rd));

    return 0;
}
