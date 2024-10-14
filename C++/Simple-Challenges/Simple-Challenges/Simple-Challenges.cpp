#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;


int main()
{
	// Output values or text. 
	cout << "Welcome to this programme! \n 5 + 5 = " << 5 + 5 << '\n';

	// Declare a variable and display its value in the console.
	int value = 20445;
	cout << value;

	// Utilize each of the following keywords: char, int, double, bool, string.
	char exampleCharacter = 'A';
	int exampleInteger = 300;
	double exampleDouble = 4.556673;
	bool exampleBool = true;
	string exampleString = "Hello World";

	// Declare more than one variable of the same data type
	bool bool1 = true, bool2 = false, bool3 = false;

	// Utilize the const keyword.
	const int daysOfTheWeek = 7;

	// Create a basic program that accepts user input.
	string name = "";
	int age = 0;

	cout << "\n \n" << "Welcome, what is your name: ";
	cin >> name;
	cout << "And how old are you: ";
	cin >> age;
	cout << "In 6 years " << name << " will be " << age + 6 << " years old.\n";
	
	// Utilize the float keyword.
	float exampleFloat = 3.56;

	// Utilize string type and concatenate a string.
	string string1 = "Hallo world";
	string1 += ", How are you?";
	cout << string1;

	// Utilize the length() function and display the output in the console.
	// Access and print the third character in one of your strings in the console.
	// Change the value of a specific character in a string.

	cout << string1.length() << '\n';
	cout << string1[2] << '\n';
	cout << string1 << '\n';
	string1[5] = 'r';
	cout << string1 << '\n';

}