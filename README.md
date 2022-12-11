## C++ Essentials

### Inputs and outputs

```c++
#include <iostream>
using namespace std;

int main(){
    cout << "Hello, World!" << endl;
    return 0;
}
```

- The above code can also be simplified as below:
    ```c++
    int main(){
        printf("Hello, World!")
        return 0;
    }
    ```

- To read a user input in C++, `cin` is used as shown below:
  ```c++
  int main(){
      string some_user_input;
      cin >> some_user_input;
      cout << "User entered " << some_user_input << endl;
      return 0;
  }
  ```