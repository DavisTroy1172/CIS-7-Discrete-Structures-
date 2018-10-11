Troy Davis 
Assignment # 1 

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char c;
	int counter = 0;
	string connectors = "!V^->";
	string statements = "ABCDEFGHIJKLMNOPQRSTUWXYZabcdefghijklmnopqrstuwxyz";
	string input;
	bool quit = false;
	bool lastWasAlpha = false;
	bool lastWasNot = false;
	bool lastWasConnector = false;
	bool isValidWff = true;
	
	

	while (!quit)
	{
		counter = 0;

		cout << "Enter a string: ";
		cin.ignore();
		getline(cin, input);

		for (unsigned int i = 0; i < input.length(); i++)
		{

			 c = input[i];
			
			if (c == ' ' || c == '-' || c == '(' || c == ')')
			{
				/*if (c == '(')
				{
					counter++;
					
					
				}

				else if (c == ')')
				{
					counter--;
				}
				else
				{
					continue;
				}*/
			}
			if (c == '!' || c == 'v' || c == '^' || c == '>')
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

		if (counter != 0)
		{
			cout << " That is an invalid input of parentheses !\n";
			isValidWff = false;
		}
		
		

		cout << (isValidWff ? "That is a WFF" : "NOT Valid WFF") << endl;
		
        cout << " Would you like to quit Y/N" << endl;
		
		char answer;
		cin.get(answer);
		cin.ignore();

			if (toupper(answer) == 'Y')
			{
				quit = true;
			}
			else
			{
				quit = false;
				
			}
			
		
		
			
	} 

	return 0;
}
	
