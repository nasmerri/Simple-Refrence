// Naszir L. Merritt 11/22/2020
/* Refrence project 
* in this project we will demonstrate the use of refrences
* within functions

*/

#include<iostream>
#include<string>

using namespace std;


void HackedBank(int& x, int& y); // function using refrences as parameters

void Bank(int x, int y); // function using regular ints as parameters

void Pause();// checkpoint in the program




int main()
{
	int GoodBanker = 1000;// value for the bigger number 
	int MyBanker = 150;// value for the samller number 

	// following tells user current values and instructions
	cout << "\nAfter each transaction, type 'y' if you understand.\n";
	cout << "\nOriginal Values\n";
	cout << "Good Banker: " << GoodBanker << "\n";
	cout << "MyBanker: " << MyBanker << "\n";

	Pause();

	Bank(MyBanker, GoodBanker); // the function that uses normal params
	
	// no changes to the values, normal bank
	cout << "\nNormal Bank Values\n";
	cout << "Good Banker: " << GoodBanker << "\n";
	cout << "MyBanker: " << MyBanker << "\n";


	Pause();


	HackedBank(MyBanker, GoodBanker);// refrence function

	// swaps the values, good banker becomes my banker and vice versa
	cout << "\nHacked Values\n";
	cout << "Good Banker: " << GoodBanker << "\n";
	cout << "MyBanker: " << MyBanker << "\n";

	Pause();

	







	return 0;
}



// function to ask the user for understanding
void Pause()
{
	string answer;
	do
	{
		cout << "\nDo you understand the transaction?\n";
		cin >> answer;




	} while (answer != "y");



}

// switches given values within the function
void HackedBank(int& x, int& y)
{
	int temp = x;// sets x as temp

	x = y; // sets x as y

	y = temp; // sets y as temp, hence x



	 
}

// switches values inside and outside of the function using refrences
void Bank(int x, int y)
{
	int temp = x;

	x = y; 

	y = temp;



	
}