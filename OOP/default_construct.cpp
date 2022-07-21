#include <bits/stdc++.h>
using namespace std;

class Test {
public:
    int a;

    Test() {
        this->a = 2;
    }

    // class "Test" has more than one default constructor
    Test(int a = 1) {
        this->a = a;
    }
};

int main() {
    Test t;
    return 0;
}