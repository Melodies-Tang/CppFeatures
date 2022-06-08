#include <bits/stdc++.h>
using namespace std;

class Test
{ 
public: 
    Test() {
        cout << "Constructor called" << endl;
    } = delete;
};

// Test::Test() = delete;

int main() {
    Test t;
    return 0;
}


