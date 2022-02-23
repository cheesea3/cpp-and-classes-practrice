// ijaz_q2.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Counterstrike {
private:
	string fname;
	string lname;
	int age;
	string occupation;

public:
	// Getter for all private variables
	string getFname() {
		return fname;
	}
	string getLname() {
		return lname;
	}
	int getAge() {
		return age;
	}
	string getOccupation() {
		return occupation;
	}
	// Setter for incrementAge
	void incrementAge(int increment) {
		age = age + increment;
	}
};


int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
