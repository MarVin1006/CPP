#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Insert a number: ";
    cin >> n;

  for (int i = 1; i < 11; i++) {
    cout << n << " * "<< i << " = " << n*i << "\n";

  }
  return 0;
}
