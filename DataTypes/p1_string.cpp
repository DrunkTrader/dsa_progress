#include <iostream>
#include <string>
#include <algorithm> // for transform, reverse, sort
#include <cctype>    // for isalpha, isdigit, etc.
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 1. String Initialization
    string s1 = "Hello";
    string s2("World");
    string s3(5, 'x'); // Creates "xxxxx"
    string s4 = s1;    // Copy of s1

    cout << "1. String Initialization:" << endl;
    cout << "s1: " << s1 << endl; // Output: Hello
    cout << "s2: " << s2 << endl; // Output: World
    cout << "s3: " << s3 << endl; // Output: xxxxx
    cout << "s4: " << s4 << endl; // Output: Hello
    cout << endl;

    // 2. String Concatenation
    string s5 = s1 + " " + s2; // Concatenation
    s1.append(" CP");           // Append to s1
    cout << "2. String Concatenation:" << endl;
    cout << "s5: " << s5 << endl; // Output: Hello World
    cout << "s1: " << s1 << endl; // Output: Hello CP
    cout << endl;

    // 3. Accessing Characters
    cout << "3. Accessing Characters:" << endl;
    cout << "First character of s1: " << s1[0] << endl; // Output: H
    cout << "Last character of s1: " << s1.back() << endl; // Output: P
    cout << "Character at index 2: " << s1.at(2) << endl; // Output: l
    cout << endl;

    // 4. String Length
    cout << "4. String Length:" << endl;
    cout << "Length of s1: " << s1.length() << endl; // Output: 8
    cout << "Is s1 empty? " << (s1.empty() ? "Yes" : "No") << endl; // Output: No
    cout << endl;

    // 5. Substring
    cout << "5. Substring:" << endl;
    string sub = s1.substr(2, 3); // Start at index 2, length 3
    cout << "Substring of s1: " << sub << endl; // Output: llo
    cout << endl;

    // 6. Finding in String
    cout << "6. Finding in String:" << endl;
    size_t pos = s1.find("CP"); // Find "CP" in s1
    if (pos != string::npos) {
        cout << "\"CP\" found at position: " << pos << endl; // Output: 6
    } else {
        cout << "\"CP\" not found!" << endl;
    }
    cout << endl;

    // 7. Replacing in String
    cout << "7. Replacing in String:" << endl;
    s1.replace(6, 2, "Competitive Programming"); // Replace "CP" with "Competitive Programming"
    cout << "After replace: " << s1 << endl; // Output: Hello Competitive Programming
    cout << endl;

    // 8. Inserting into String
    cout << "8. Inserting into String:" << endl;
    s1.insert(6, "Awesome "); // Insert "Awesome " at index 6
    cout << "After insert: " << s1 << endl; // Output: Hello Awesome Competitive Programming
    cout << endl;

    // 9. Erasing from String
    cout << "9. Erasing from String:" << endl;
    s1.erase(6, 8); // Erase "Awesome " starting at index 6
    cout << "After erase: " << s1 << endl; // Output: Hello Competitive Programming
    cout << endl;

    // 10. String Comparison
    cout << "10. String Comparison:" << endl;
    string a = "apple";
    string b = "banana";
    if (a == b) {
        cout << "a and b are equal" << endl;
    } else if (a < b) {
        cout << "a is lexicographically smaller than b" << endl; // Output: this
    } else {
        cout << "a is lexicographically greater than b" << endl;
    }
    cout << endl;

    // 11. Transforming String (Uppercase/Lowercase)
    cout << "11. Transforming String:" << endl;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper); // Convert to uppercase
    cout << "Uppercase s1: " << s1 << endl; // Output: HELLO COMPETITIVE PROGRAMMING
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower); // Convert to lowercase
    cout << "Lowercase s1: " << s1 << endl; // Output: hello competitive programming
    cout << endl;

    // 12. Reversing a String
    cout << "12. Reversing a String:" << endl;
    reverse(s1.begin(), s1.end()); // Reverse the string
    cout << "Reversed s1: " << s1 << endl; // Output: gnimmargorp evititepmoc olleh
    cout << endl;

    // 13. Sorting a String
    cout << "13. Sorting a String:" << endl;
    sort(s1.begin(), s1.end()); // Sort the string
    cout << "Sorted s1: " << s1 << endl; // Output:    aceeegghiiilmmnooppprttv (sorted characters)
    cout << endl;

    // 14. Checking if a String is Palindrome
    cout << "14. Checking if a String is Palindrome:" << endl;
    string s6 = "madam";
    string s6_rev = s6;
    reverse(s6_rev.begin(), s6_rev.end());
    if (s6 == s6_rev) {
        cout << "s6 is a palindrome" << endl; // Output: this
    } else {
        cout << "s6 is not a palindrome" << endl;
    }
    cout << endl;

    // 15. Removing Whitespace
    cout << "15. Removing Whitespace:" << endl;
    string s7 = "  Hello  World  ";
    s7.erase(remove(s7.begin(), s7.end(), ' '), s7.end()); // Remove all spaces
    cout << "After removing spaces: " << s7 << endl; // Output: HelloWorld
    cout << endl;

    // 16. Splitting a String (Custom Implementation)
    cout << "16. Splitting a String:" << endl;
    string s8 = "apple,banana,grape";
    size_t start = 0, end = s8.find(',');
    while (end != string::npos) {
        cout << "Token: " << s8.substr(start, end - start) << endl; // Output: apple, banana
        start = end + 1;
        end = s8.find(',', start);
    }
    cout << "Token: " << s8.substr(start) << endl; // Output: grape
    cout << endl;

    return 0;
}