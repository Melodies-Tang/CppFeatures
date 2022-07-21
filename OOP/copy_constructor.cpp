#include <bits/stdc++.h>
using namespace std;

// class Test {
// public:
//     int a;

//     Test() {
//         this->a = 1;
//     }

//     Test(Test& t) {  // const is not forced
//         this->a = t.a;
//     }
// };

// int main() {
//     Test t1;
//     Test t2(t1);
//     return 0;
// }

class Test {
public:
    int first;
    int second;
    // Test() = default;
    Test(int value): second(value), first(second) {}  // drive the default constructor to be deleted
};

int main() {
    Test t;
    cout << t.first << endl;
    return 0;
}