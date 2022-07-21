#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> test{1,2,3,4,5};
    test.pop_back();
    cout << test[400000] << endl;  // Segmentation fault
    cout << test.at(4) << endl;  // terminate called after throwing an instance of 'std::out_of_range'
    return 0;
}
