//(LECTURE - 2)
//PART 1 (First Program)

/*
#include <iostream>
using namespace std;
int main(){
	cout << "Namaste Dunia" << endl;
}
*/


//PART 2 (with input from user)

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin >> a;
	cout << "This is Neeraj "<< a << endl;
}
*/


//PART 3 (data types with sizes)

/*
#include <iostream>
using namespace std;
int main(){
	int a = 123;
	cout <<"Integer : "<< a << endl;

	char b = 'v';
	cout <<"Char : "<< b << endl;

	bool bl = true;
	cout <<"Bool : "<< bl << endl;

	float f = 1.2;
	cout <<"Float : "<< f << endl;

	double d = 1.23;
	cout <<"Double : "<< d << endl;

	int sizea = sizeof(a);
	cout << "size of int a is :" << sizea << endl;

	int sizeb = sizeof(b);
	cout << "size of char b is :" << sizeb << endl;

	int sizebl = sizeof(bl);
	cout << "size of bool bl is :" << sizebl << endl;

	int sizef = sizeof(f);
	cout << "size of float f is :" << sizef << endl;

	int sized = sizeof(d);
	cout << "size of double d is :" << sized;
}
*/

//PART 4 (operators)

/*
#include <iostream>
using namespace std;

int main() {

	//ARITMETIC OPERATORS
	cout << "ARITMETIC OPERTORS" << endl;
	cout << "a = 10, b = 3" <<endl;
    int a = 10, b = 3;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;
    cout << endl;

    //RELATIONAL OPERATORS
    cout << "RELATIONAL OPERTORS" << endl;
    cout << "c = 10, d = 3" <<endl;
    int c = 10, d = 3;

    cout << "c == d: " << (c == d) << endl;
    cout << "c != d: " << (c != d) << endl;
    cout << "c > d: " << (c > d) << endl;
    cout << "c < d: " << (c < d) << endl;
    cout << "c >= d: " << (c >= d) << endl;
    cout << "c <= d: " << (c <= d) << endl;
    cout << endl;

    //LOGICAL OPERATORS
    cout << "LOGICAL OPERTORS" << endl;
    cout << "x = true, y = false" <<endl;
    bool x = true, y = false;

    cout << "AND: " << (x && y) << endl;
    cout << "OR: " << (x || y) << endl;
    cout << "NOT: " << (!x) << endl;
    cout << endl;


    //ASSIGNMENT OPERATORS
    cout << "ASSIGNMENT OPERTORS" << endl;
    cout << "u = 10" <<endl;
    int u = 10;
    cout << "Initial u: " << u << endl;

    u += 5;
    cout << "After += 5: " << u << endl;

    u *= 2;
    cout << "After *= 2: " << u << endl;
    cout << endl;

    // INCREMENT & DECREMENT OPERATORS
    cout << "INCREMENT & DECREMENT OPERTORS" << endl;
    cout << "t = 5" <<endl;
    int t = 5;
    cout << "Original t: " << t << endl;
    cout << "Increment: " << ++t << endl;
    cout << "After Increment: " << t << endl;
    cout << "Decrement: " << --t << endl;
    cout << "After Decrement: " << t << endl;
    cout << endl;

    //BITWISE OPERATORS
    cout << "BITWISE OPERTORS" << endl;
    cout << "i = 5, j = 3" <<endl;
    int i = 5, j = 3;

    cout << "AND: " << (i & j) << endl;
    cout << "OR: " << (i | j) << endl;
    cout << "XOR: " << (i ^ j) << endl;
    cout << "Left Shift: " << (i << 1) << endl;
    cout << "Right Shift: " << (i >> 1) << endl;

}

*/