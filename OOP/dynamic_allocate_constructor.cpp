#include <bits/stdc++.h>
using namespace std;

class Test {
public:
    int * p;
    Test() {
        this->p = new int[5];
    }

    ~Test() {
        delete[] this->p;  // no deep copy constructor available, segmentation fault
    }

};

int main() {
    Test t1;
    Test t2 = t1;  // copy by bits by default
    // cout << t2.p[0] << endl;
    return 0;
}