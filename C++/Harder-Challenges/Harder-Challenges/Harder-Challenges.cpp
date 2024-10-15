/* Write multi line code comments.
*  This is a multi-line comment.
*  It ents on the next line.
*/

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::getline;

#include <algorithm>
using std::max;

#include <cmath>
using std::sqrt;
using std::round;
using std::pow;

int main()
{
    // Utilize the getline() function.
    string phrase = "";
    std::cout << "Write a phrase ";
    getline(cin, phrase);
    cout << phrase << '\n' << '\n';
    
    // Complete these actions: Utilize the max(x, y) function, Utilize the sqrt function, Utilize the round function, Utilize the pow(x, y) function.
    cout << max(4, 60) << '\n';
    cout << sqrt(60) << '\n';
    cout << round(4.506623345591) << '\n';
    cout << pow(2, 4) << '\n';

    /*
    Complete these actions:
    - Write and execute an if statement and display the result in the console.
    - Write and execute an else statement and display the result in the console.
    - Write and execute an else if statement and display the result in the console.
    */
    int i = 0;
    cout << "Enter a number: ";
    cin >> i;
    if (i < 10)
    {
        cout << i << " is less than 10 \n";
    }
    else if (i < 20)
    {
        cout << i << " is less than 20 but higher as 10 \n";
    }
    else
    {
        cout << i << " is higher as 20 \n";
    }

    // Write and execute a switch statement and display the result in the console.
    cout << "Enter 1, 2 or 3: ";
    cin >> i;

    switch (i)
    {
    case 1:
        cout << "You chose 1 \n";
        break;
    case 2:
        cout << "You chose 2 \n";
        break;
    case 3:
        cout << "You chose 3 \n";
        break;
    default:
        cout << "You didn't chose 1, 2 or 3 \n";
        break;
    }

    // Utilize a ternary operator.
    i = i <= 3 ? 10 : 20;
    cout << i << '\n';

    // Write and execute a while loop, and display the result in the console.
    bool wrongAnswer = true;
    while (wrongAnswer)
    {
        int answer;
        cout << "Guess a number: ";
        cin >> answer;
        if (answer != 52)
        {
            string reply = "";
            reply = answer < 52 ? "The number is to low" : "The number is to big";
            cout << reply << " try again... \n";
        }
        else
        {
            cout << "You got it!!! \n";
            wrongAnswer = false;
        }
    }

    // Write and execute a do/while loop, and display the result in the console.
    int repeat = 1;
    do
    {
        cout << "Do you wand to continue? enter 0 for yes, 1 for no: ";
        cin >> repeat;
    } 
    while (repeat > 0);

    // Write and execute a for loop, and display the result in the console.
    for (int i = 0; i < 10; i++)
    {
        cout << "This for loop itteration is number " << ( i+ 1) << '\n';
    }

    // Utilize the break and continue statements inside a while loop.
    bool wrongAnswer1 = true;
    while (wrongAnswer1)
    {
        int answer;
        cout << "Guess a number: ";
        cin >> answer;
        if (answer != 45)
        {
            string reply = "";
            reply = answer < 45 ? "The number is to low" : "The number is to big";
            cout << reply << " try again... \n";
            continue;
        }
        cout << "You got it!!! \n";
        break;
    }

    // Declare an array and display one of its elements in the console.
    int numbers[3] = { 4, 2, 4005 };
    cout << numbers[2] << '\n';

    // Loop through the elements of an array.
    for (int number : numbers)
    {
        cout << number << '\n';
    }

    // Create a reference variable. 
    int value = 10;
    int &refValue = value;

    cout << value << "  " << refValue << '\n';

    value = 40;

    cout << value << "  " << refValue << '\n';

}

