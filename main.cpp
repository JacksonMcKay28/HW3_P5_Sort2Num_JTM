#include <iostream>

using namespace std;

int main() {
  int a;
  int b;

  cin >> a >> b;

  if (a > b)
    cout << b << " " << a << endl;
  else
    cout << a << " " << b << endl;
}