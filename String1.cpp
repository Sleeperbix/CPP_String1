#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName;
	string lastName;
	string passwordOne;
	string passwordTwo;

	cout << "Enter first name: ";
	cin >> firstName;
	cout << "Enter last name: ";
	cin >> lastName;
	cout << "Hello" << " " << firstName << " " << lastName << ".\n";

	do
	{
		cout << "Enter password: ";
		cin >> passwordOne;
		cout << "Enter password again: ";
		cin >> passwordTwo;
		if (passwordOne != passwordTwo)
		{
			cout << "Passwords do not match!\n";
		}
	}
	while (passwordOne != passwordTwo);

	cout << "Verified!\n";
	return 0;
	
}