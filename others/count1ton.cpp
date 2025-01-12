#include <iostream>
using namespace std;

void countnum(int lastnum) {
  for (int i = 1; i <= lastnum; i++) {
    cout << i << " ";
  }
}

int main() {
  int n;
  cin >> n;
  countnum(n);
  return 0;
}