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
    printf("You typed %s", s.c_str()); // Method 2
    return 0;
}
