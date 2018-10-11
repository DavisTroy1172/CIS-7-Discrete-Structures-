Troy Davis 
Assignment # 6

#include <iostream>
#include<algorithm>
#include<chrono>
#include <istream>

using namespace std;
using namespace chrono;
int gcd(int n1, int n2);
bool quit = false;

int main()
{
	
	auto start = high_resolution_clock::now();
	int n1, n2;
	
	while (!quit)
    {
		cout << " Enter two positive integers :  ";
		cin >> n1 >> n2;



		cout << " The GCD of " << n1 << " & " << n2 << " is: " << gcd(n1, n2) << endl;

		auto stop = high_resolution_clock::now();

		auto duration = duration_cast<microseconds>(stop - start);

		cout << "Time taken by function: " << duration.count() << " Microseconds" << endl;


		
	

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


	
	
	}	return 0;
}
int gcd(int n1, int n2)
{
	if (n2 != 0)
		return gcd(n2, n1 % n2);
	else
		return n1;
}
