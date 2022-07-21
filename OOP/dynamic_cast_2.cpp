#include <string>
#include <iostream>
using namespace std;

class Plant
{
protected:
    string name;

public:
    Plant(string name) { this->name = name; }
    virtual Plant *clone() const
    {
        cout << "Plant " << name << " has been cloned." << endl;
        return new Plant(*this);
    }
};

class Tree : public Plant
{
public:
    Tree(string name) : Plant(name) {}
    virtual Tree *clone() const
    {
        cout << "Tree " << name << " has been cloned." << endl;
        return new Tree(*this);
    }
};

int main()
{
    Plant *ptrP = new Plant("Skyflower");
    // auto what = ptrP->clone();
    Tree *ptrT = dynamic_cast<Tree *>(ptrP);  // dynamic_cast会根据基类指针是否真正指向继承类指针来做相应处理
    if (ptrT)
        auto ptr = ptrT->clone();

    // Plant *ptrP = new Tree("Starfruit");
    // Tree *ptrT = dynamic_cast<Tree *>(ptrP->clone());
    // if (ptrT)
    //     auto ptr = ptrT->clone();
    return 0;
}
