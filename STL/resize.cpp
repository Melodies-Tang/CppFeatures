#include <iostream>
#include <vector>
using namespace std;
class Object
{
public:
    Object(int i)
    {
        id = i;
        count++;
        cout << "Object " << id << " is created, we've got " << count << " object(s) now!" << endl;
    }
    ~Object()
    {
        count--;
        cout << "Object " << id << " is deleted, we've got " << count << " object(s) now!" << endl;
    }

private:
    int id;
    static int count;
};
int Object::count = 0;
void TestObjects(int);

int main()
{
    int object_num;
    cin >> object_num;
    TestObjects(object_num);
    return 0;
}
void TestObjects(int num)
{
    int i = 1;
    vector<Object> test;
    for (i = 0; i < num; ++i) {
        test.emplace_back(i + 1);  // may use std::move to directly construct and put
    }
    //建立动态二维数组
    vector<vector<Object>> idd(num);
    for (i = 0; i < num; i++)
    {
        idd[i].resize(1, i + 1);  // construct a temporary anonymous object for being copied
    }
}