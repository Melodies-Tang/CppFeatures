#include <bits/stdc++.h>
using namespace std;

class Test {
public:
    const int con;
    int& ref;

    /*
    "Test::Test(int a = 1, int b = 2)" provides no initializer for:C/C++(366)
    member_const_ref.cpp(9, 32): const member "Test::con"
    member_const_ref.cpp(9, 32): reference member "Test::ref"
    */
    // Test(int a = 1, int b = 2) {
    //     con = a;
    //     ref = b;
    // }

    Test(int a = 1, int b = 2): con(1), ref(b) {  // con(a) also correct
        
    }
};

int main() {
    Test t;
    return 0;
}
