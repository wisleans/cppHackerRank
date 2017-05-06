#include "stdafx.h"
#include "Person.h"
#include <iostream>

#pragma region DAY 4 
Person::Person(int initialAge) {
	// Add some more code to run some checks on initialAge
	age = initialAge;
	if (this->age < 0)
	{
		std::cout << "Age is not valid, setting age to 0." << std::endl;
	}
}

void Person::amIOld() {
	// Do some computations in here and print out the correct statement to the console 
	if (this->age < 13)
	{
		std::cout << "You are young." << std::endl;
	}
	else if(this->age >= 13 && this->age < 18)
		std::cout << "You are a teenager." << std::endl;
	else
		std::cout << "You are old." << std::endl;
}

void Person::yearPasses() {
	// Increment the age of the person in here
	this->age = age+ 1;
}
#pragma endregion DAY 4 