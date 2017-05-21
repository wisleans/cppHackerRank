#include "stdafx.h"
#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

#pragma region DAY 4 
/*
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
*/
#pragma endregion DAY 4 

#pragma region DAY 12
/*
Person::Person(string firstName, string lastName, int identification) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->id = identification;
}
void Person::printPerson() {
	cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
}

Student::Student(string firstName, string lastName, int identification, vector<int> testScores): Person(firstName, lastName, identification)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->id = identification;
	this->testScores = testScores;
	this->grade = calculate();
}

char Student::calculate()
{
	int score = 0;
	
	for (vector<int>::iterator it = testScores.begin(); it != testScores.end(); ++it)
		score += *it;

	score = score / testScores.size();

	if(90 <= score && score <= 100)
	{
		return 'O';
	}
	else if (80 <= score && score < 90)
	{
		return 'E';
	}
	else if (70 <= score && score < 80)
	{
		return 'A';
	}
	else if (55 <= score && score < 70)
	{
		return 'P';
	}
	else if (40 <= score && score < 55)
	{
		return 'D';
	}
	else
	{
		return 'T';
	}
}
*/
#pragma endregion DAY 12

#pragma region DAY 13
/*
using namespace std;
Book::Book(string t, string a) {
		title = t;
		author = a;
	}

MyBook::MyBook(string t, string a, int p):Book(t,a)
{
	title = t;
	author = a;
	price = p;
}

void MyBook::display()
{
	cout << "Title: " << this->title << endl;
	cout << "Author: " << this->author << endl;
	cout << "Price: " << this->price << endl;
}
*/
#pragma endregion DAY 13
