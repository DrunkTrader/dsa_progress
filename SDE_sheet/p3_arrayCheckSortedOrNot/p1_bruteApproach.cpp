#include <bits/stdc++.h>
using namespace std;

int main() {
    float a = 10.01;
    double b = static_cast<double>(a);  // Converts int to double
    cout << "b: " << b << endl;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    return 0;
}
