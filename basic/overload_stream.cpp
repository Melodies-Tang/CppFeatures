#include <iostream>
using namespace std;
ostream & operator<<(ostream & i, int n)
{
  return i;
}
int main()
{
  cout << 5 << endl;  // collide
  cin.get();
  return 0;
}

