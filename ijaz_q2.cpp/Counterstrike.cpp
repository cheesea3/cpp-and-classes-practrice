#include "Counterstrike.h"
#include <sstream>
#include <string>


// Define standard constructor
Counterstrike::Counterstrike(const string& fn, const string& ln, const string& occ, int ag) {
	fname = fn;	// credit card number
	lname = ln;
	occupation = occ;
	age = ag;
}

Counterstrike::Counterstrike() //constructor
{
	//default value for age
}


string Counterstrike::getFname() {
	return fname;
};

string Counterstrike::getLname() {
	return lname;
};

string Counterstrike::getOccupation() {
	return occupation;
};

int Counterstrike::getAge() {
	return age;
};

void Counterstrike::incrementAge(int x) {
	age += x;
}

void Counterstrike::changeJob(string job) {
	occupation = job;
}

Counterstrike::~Counterstrike() { 
	//prints the first name and last name of the object getting deleted
	cout << "\n";
	cout << fname << " " << lname;
}

