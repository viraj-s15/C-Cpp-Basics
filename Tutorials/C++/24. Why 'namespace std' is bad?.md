# Using namespace std

<font size=5>
This is a line that you must have seen in all of the codes.
However, this is not a good practice, using namespace std in a global scope is not a good practice as it can cause clashing of certain functions that may have the same name. Take this code for example.

<font size=4>

```
#include <iostream>
#include <otherLib>
using namespace std;

int main() {
    int n = 20
    cout << "n = " << n << endl; // This gives an error
    return 0;
}
```

<font size=5>
In the above code the error is caused as the cout function is present in both std and otherLib. This causes the compiler to not know which function to be used. The correct way of declaring the above code is ->

<font size=4>

```
#include <iostream>
#include <otherLib>

int main() {
    int n = 20
    std::cout << "n = " << n << endl;
    otherLib::cout << "n = " << n << endl;
    return 0;
}
```

<font size=5>
This resolves all ambiguity in the code. You can however call it in a local scope and use all of the functions, this is the preferred method.
