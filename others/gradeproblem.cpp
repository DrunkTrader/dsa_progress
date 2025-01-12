#include <iostream>
using namespace std;

void grade(int marks) {
//   if (marks >= 90) {
//     cout << "A" << endl;
//   }
//     else if (marks >= 80) {
//         cout << "B" << endl;
//     }
//     else if (marks >= 70) {
//         cout << "C" << endl;
//     }
//     else if (marks >= 60) {
//         cout << "D" << endl;
//     }
//     else {
//         cout << "F" << endl;
//     }
    switch (marks/10) {
        case 10:
        case 9:
            cout << "A" << endl;
            break;
        case 8:
            cout << "B" << endl;
            break;
        case 7:
            cout << "C" << endl;
            break;
        case 6:
            cout << "D" << endl;
            break;
        default:
            cout << "F" << endl;
            break;
    }
}

int main(){
    int marks;
    cout << "Enter your marks: " << endl;
  cin >> marks;
  grade(marks);
  return 0;
}