#include <iostream>
using std::cout;

int main()
{
    // Utilize each of the following operators and display their result in the console: +, -, *, /, ++
    int i = 2;
    cout << 2 + 4 << '\n';
    cout << 2 - 4 << '\n';
    cout << 2 * 4 << '\n';
    cout << 2 / 4 << '\n';
    cout << i++ << '\n';

    // Utilize the following comparison operators and display their result in the console: >, ==, !=, <=.
    if (4 > 2) { cout << "4 is bigger as 2" << '\n'; }
    if (4 == 4) { cout << "4 is equal to 4" << '\n'; }
    if (4 != 2) { cout << "4 is not equal to 2" << '\n'; }
    if (2 <= 4) { cout << "2 is smaller or equal to 4" << '\n'; }

    // Utilize the following assignment operators: =, +=, &=, <<=
    int x = 8;
    cout << x << '\n';
    x += 4;
    cout << x << '\n';
    x &= 5;
    cout << x << '\n';
    x <<= 2;
    cout << x << '\n';

    // Utilize the following assignment operators and display their results in the console : &&, ||, !
    // result is false, output:0
    bool result = x < 3 && x > 1;
    cout << result << '\n';
    //result is true, output 1
    result = x == 16 || x == 4;
    cout << result << '\n';
    //result is false, output 0
    result = !(x == 16);
    cout << result << '\n';

}
