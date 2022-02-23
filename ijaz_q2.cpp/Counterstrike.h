#pragma once
#include <iostream>

using namespace std;
class Counterstrike
{
public:
	// Getter for all private variables
	Counterstrike(); //initialization
	// Declare standard constructor with default age as 21
	Counterstrike(const string& fname, const string& lname, const string& occupation, int age=21);
	~Counterstrike(); // destructor
	string getFname(); //get the first name
	string getLname(); //get the last name
	string getOccupation(); //get the occupation
	int getAge(); //get the age
	void incrementAge(int x); //add x to the age
	void changeJob(string job); //add x to the age


private:
	string fname; //first name
	string lname; //last name
	int age;
	string occupation;
};


