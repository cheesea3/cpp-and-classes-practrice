//main.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Counterstrike.h"

using namespace std;




int main(void)
{
	//decided to do simpsons instead of counterstrike because i realized idk any characters lol
	
	// Create character object using heap memory
	Counterstrike* homer = new Counterstrike("Homer", "Simpson", "Powerplant Engineer", 39); //create an instance of Homer Simpson through heap memory

	// Create character object with stack memory
	Counterstrike bart("Bart", "Simpson", "Student", 10); //create an instance of Bart Simpson through heap memory

	// Create character object with stack memory
	Counterstrike daiyaan = Counterstrike("Daiyaan", "Simpson", "Student"); //create an instance of Daiyaan Simpson through heap memory

	cout << bart.getAge();
	cout << homer->getAge();
	cout << daiyaan.getAge();
	delete homer;				// deallocate storage
}

