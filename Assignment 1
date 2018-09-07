Troy Davis 
Assignment # 1 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char repeat = ' yY';
    string connectors = "!V^->";
	string statements = "ABCDEFGHIJKLMNOPQRSTUWXYZabcdefghijklmnopqrstuwxyz";
	string input;
	cout << "Enter a string: ";
	getline(cin, input);
	bool lastWasAlpha = false;
	bool lastWasNot = false;
	bool lastWasConnector = false;
	bool isValidWff = true;
	
	do
	{
		for (unsigned int i = 0; i < input.length(); i++)
		{

			char c = input[i];
			cout << c << " ";
			if (c == ' ' || c == '-')
			{
				continue;
			}
			if (c == '!' || c == 'v' || c == '^' || c == '>' || c == '-')
			{
				if (c == '>' &&  i > 0)
				{
					if (input[i - 1] == '-')
					{
						lastWasConnector = true;
						lastWasAlpha = false;
						continue;
					}
					else
					{
						isValidWff = false;
						break;
					}

				}

				if (c == '!')
				{
					if (!lastWasAlpha)
					{
						isValidWff = false;
						break;
					}
					lastWasConnector = false;

				}
				else
				{
					if (lastWasAlpha)
					{
						isValidWff = false;
						break;
					}
					lastWasNot = true;

				}
				lastWasAlpha = false;
			}
			else if (isalpha(c))
			{
				if (lastWasAlpha)
				{
					isValidWff = false;
					break;
				}
				lastWasAlpha = true;
				lastWasConnector = false;
				continue;
			}
			else
			{
				isValidWff = false;
			}
		}

		cout << (isValidWff ? "That is a WFF" : "NOT Valid WFF") << endl;

		cout << " Would you like to enter another String ? Y/N ";
		cin >> repeat;
	} while (repeat == 'yY');
	
	system("pause");
	
}
