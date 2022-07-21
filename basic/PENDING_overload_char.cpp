#include <iostream>
using namespace std;
ostream &operator<<(ostream &i, int n)
{
    return i;
}

ostream &operator<<(ostream &i, char c)
{
    i << c;
    return i;
}

int main()
{
    cout << 5 << endl;
    // inline std::ostream &std::operator<<<std::char_traits<char>>(std::ostream &__out, char __c)
    cout << '5' << endl;  // WHY it works
    cin.get();
    return 0;
}
