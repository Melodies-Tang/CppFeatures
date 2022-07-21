#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //  [{
    // 	"resource": "/usr/include/c++/7/bits/allocator.h",
    // 	"owner": "cpptools",
    // 	"severity": 8,
    // 	"message": "forming pointer to reference type ‘int&’",
    // 	"source": "gcc",
    // 	"startLineNumber": 113,
    // 	"startColumn": 26,
    // 	"endLineNumber": 113,
    // 	"endColumn": 26
    // }]
    // vector<int &> v;
    vector<int> v;
    v.push_back(1);
    int& test = v.back();
    test = 2;
    cout << v[0] << endl;
    return 0;
}
