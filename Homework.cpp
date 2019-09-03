#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int update_balance (string command , float dollars , float &balance);

int main ()
{
	float amount , balance = 10000;
	string command;

	cout << " Exit with 0 \n";
	cout << " Your balance = " << balance << ".00" << endl;
	do {
		cout << " Input command (1 or withdraw , 2 deposit) : ";
		cin >> command;
		if (command == "0")
		{
			break;
		}
		cout << " Input amount : ";
		cin >> amount;
		update_balance (command , amount , balance);
		cout << " Your balance : " << fixed << setprecision(2) << balance << endl;
	}while (command != "0");
	return(0);
}

int update_balance (string command , float dollars , float &balance)
{
	if (command == "1")
	{
		balance = balance - dollars;
	}
	else
	{
		balance = balance + dollars;
	}
	return(balance);
}