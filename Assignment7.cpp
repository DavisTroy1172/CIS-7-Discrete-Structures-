#include<iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
class Tower
{

   private:
	   vector<string>disks;
 public:
	Tower(string name, int size, bool isInitialTower)
 {
		this -> name = name;
		if (isInitialTower)
		{
			for (int i = size - 1; i >= 0; i--)
			{
				this->pushDisk(to_string(i));
			}
		}
	for (int i = 0; i <= size; i++)
	{
		string value = isInitialTower ? to_string(i) : " - ";
		
	}
 }
	string name;
	void pushDisk(string val)
	{   
		this->disks.push_back (val);
	}
	void popDisk()
	{
		this->disks.pop_back();
	}
	string print()
	{
		string output = "Tower: " + this->name + ": ";
		
		for (auto disk : disks)
		{
			output = output + disk + " , ";
		}
		return output;
	}
};
void TowerofHanoi(int, Tower*, Tower*, Tower*);



int main()
{
	auto A = new Tower(" A ", 3, true);
	auto B = new Tower(" B ", 3, false);
	auto C = new Tower(" C ", 3, false);
	TowerofHanoi(3, A, B, C);
	cout << A->print() << endl;
	cout << B->print() << endl;
	cout << C->print() << endl;

	system("pause");
	system("cls");
return 0;
}
void TowerofHanoi(int disks, Tower* source, Tower* target, Tower* spare)
{
	if (disks > 0)
	{

		TowerofHanoi(disks - 1, source, spare, target);
		cout << " Move disk " << disks << "From" << source->name << " to " << target->name << endl;
		source->popDisk();
		target->pushDisk(to_string(disks-1));
		cout << source->print() << endl;
		cout << spare->print() << endl;
		cout << target->print() << endl;
		system("pause");
		system("cls");
		TowerofHanoi(disks - 1, spare, target, source);
	}

}
