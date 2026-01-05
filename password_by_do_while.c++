#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{

	cout << "Adham" << endl;
	string password;
	const string checkpassword = "9016";
	do
	{
		cout << "plz entre the password" << endl;

		cin >> password;

		if (checkpassword == password)
		{
			cout << "welcome" << endl;
			break;
		}
		else
		{
			cout << "plz try again" << endl;
		}

	} while (true);

	return 0;
}