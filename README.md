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
- There are instances when you want to take in numerous user inputs. `scanf` and `printf` are used in such cases:
  ```c++
  #include <iostream>
  #include <cstdio>
  using namespace std;
  
  int main(){
      int integer;
      int64_t long_int;
      char character;
      float float_num;
      double double_num; 
      scanf("%d %ld %c %f %lf", &integer, &long_int, &character, &float_num, &double_num);
      printf("%d\n%ld\n%c\n%f\n%lf", integer, long_int, character, float_num, double_num);
      return 0;
    }
  ```
- A sample output of the above program is shown below:
  ```bash
  3
  12345678912345
  a
  334.230
  14049.304930000
  ```