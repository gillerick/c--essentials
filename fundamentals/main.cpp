#include <iostream>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl; // Method 1
    printf("Hello, World\n"); // Method 2

    // C++ inputs and outputs
    cout << "Type in something in the next line" << endl;
    string s;
    cin >> s;
    cout << "You typed " << s << endl; // Method 1
    printf("You typed %s\n", s.c_str()); // Method 2

    // Take in three integers and print out their sum
    int a, b, c;
    cout << "Enter 3 integers, separated by a whitespace" << endl;
    cin >> a >> b >> c;
    cout << "Sum of the three integers is " << a + b + c << endl;

    return 0;


}
