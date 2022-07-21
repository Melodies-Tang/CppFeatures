#include <bits/stdc++.h>
using namespace std;

class Test {
public:
    // error: ‘Test::Test()’ cannot be overloaded
    // reason: just because of the same parameter list
    Test(int a) {

    }

private:
    int a;

    // "Test::Test()" (declared at line 14) is inaccessible
    Test() {
        
    }

    // "Test::~Test()" (declared at line 20) is inaccessible
    ~Test() {

    }
};

int main() {
    // Test t(1);  // "Test::~Test()" (declared at line 21) is inaccessible
    Test* t = new Test(1);
    return 0;
}