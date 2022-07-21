#include <bits/stdc++.h>
using namespace std;

class Test {
public:
    int i;  // standard doesn't force to initialize it; if all members uninitialize, may error: uninitialized t
    // string s;  // initialized
};

int main() {
    Test t;
    cout << t.i << endl;
    int ini;  // standard doesn't force to initialize it (since it's built-in type)
    cout << ini << endl;
    return 0;
}
